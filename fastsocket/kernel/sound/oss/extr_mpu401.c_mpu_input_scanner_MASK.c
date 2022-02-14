
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int m_state; int last_status; int m_ptr; int* m_buf; int synthno; int m_left; int timer_flag; } ;


 int FUNC_0 (struct mpu_config*) ;
 int VAR_0 ;




 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int * VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct mpu_config*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mpu_config *VAR_8, unsigned char VAR_9)
{

 switch (VAR_8->m_state)
 {
  case 133:
   switch (VAR_9)
   {
    case 0xf8:

     break;

    case 0xfc:
     FUNC_3("<all end>");
      break;

    case 0xfd:
     if (VAR_8->timer_flag)
      FUNC_2();
     break;

    case 0xfe:
     return VAR_0;

    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
     FUNC_3("<Trk data rq #%d>", VAR_9 & 0x0f);
     break;

    case 0xf9:
     FUNC_3("<conductor rq>");
     break;

    case 0xff:
     VAR_8->m_state = 129;
     break;

    default:
     if (VAR_9 <= 0xef)
     {

      VAR_8->m_state = 128;
     }
     else
      FUNC_3("<MPU: Unknown event %02x> ", VAR_9);
   }
   break;

  case 128:
   {
    int VAR_10 = ((int) (VAR_9 & 0xf0) >> 4);

    VAR_8->m_state = 134;

    if (VAR_10 < 8)
    {

     VAR_10 = ((int) (VAR_8->last_status & 0xf0) >> 4);
     VAR_10 -= 8;
     VAR_8->m_left = VAR_7[VAR_10] - 1;

     VAR_8->m_ptr = 2;
     VAR_8->m_buf[0] = VAR_8->last_status;
     VAR_8->m_buf[1] = VAR_9;

     if (VAR_8->m_left <= 0)
     {
      VAR_8->m_state = 133;
      FUNC_1(VAR_8->synthno, VAR_8->m_buf, VAR_8->m_ptr);
      VAR_8->m_ptr = 0;
     }
    }
    else if (VAR_10 == 0xf)
    {
     VAR_8->m_state = 133;

     switch (VAR_9)
     {
      case 0xf8:

       break;

      case 0xf9:

       break;

      case 0xfc:

       break;

      default:
       FUNC_3("Unknown MPU mark %02x\n", VAR_9);
     }
    }
    else
    {
     VAR_8->last_status = VAR_9;

     VAR_10 -= 8;
     VAR_8->m_left = VAR_7[VAR_10];

     VAR_8->m_ptr = 1;
     VAR_8->m_buf[0] = VAR_9;

     if (VAR_8->m_left <= 0)
     {
      VAR_8->m_state = 133;
      FUNC_1(VAR_8->synthno, VAR_8->m_buf, VAR_8->m_ptr);
      VAR_8->m_ptr = 0;
     }
    }
   }
   break;

  case 129:
   switch (VAR_9)
   {
    case 0xf0:
     FUNC_3("<SYX>");
     VAR_8->m_state = 130;
     break;

    case 0xf1:
     VAR_8->m_state = 132;
     break;

    case 0xf2:
     VAR_8->m_state = 131;
     VAR_8->m_ptr = 0;
     break;

    case 0xf3:
     VAR_8->m_state = VAR_1;
     break;

    case 0xf6:

     VAR_8->m_state = 133;




    case 0xf8:

     VAR_8->m_state = 133;
     FUNC_4(VAR_8, VAR_2, 0);
     break;

    case 0xfA:
     VAR_8->m_state = 133;
     FUNC_4(VAR_8, VAR_5, 0);
     break;

    case 0xFB:
     VAR_8->m_state = 133;
     FUNC_4(VAR_8, VAR_3, 0);
     break;

    case 0xFC:
     VAR_8->m_state = 133;
     FUNC_4(VAR_8, VAR_6, 0);
     break;

    case 0xFE:

     VAR_8->m_state = 133;
     break;

    case 0xff:

     VAR_8->m_state = 133;
     break;

    default:
     FUNC_3("unknown MIDI sysmsg %0x\n", VAR_9);
     VAR_8->m_state = 133;
   }
   break;

  case 132:
   VAR_8->m_state = 133;
   FUNC_3("MTC frame %x02\n", VAR_9);
   break;

  case 130:
   if (VAR_9 == 0xf7)
   {
    FUNC_3("<EOX>");
    VAR_8->m_state = 133;
   }
   else
    FUNC_3("%02x ", VAR_9);
   break;

  case 131:
   FUNC_0(VAR_8);
   VAR_8->m_buf[VAR_8->m_ptr++] = VAR_9;
   if (VAR_8->m_ptr == 2)
   {
    VAR_8->m_state = 133;
    VAR_8->m_ptr = 0;
    FUNC_4(VAR_8, VAR_4,
     ((VAR_8->m_buf[1] & 0x7f) << 7) |
     (VAR_8->m_buf[0] & 0x7f));
   }
   break;

  case 134:
   FUNC_0(VAR_8);
   VAR_8->m_buf[VAR_8->m_ptr++] = VAR_9;
   if ((--VAR_8->m_left) <= 0)
   {
    VAR_8->m_state = 133;
    FUNC_1(VAR_8->synthno, VAR_8->m_buf, VAR_8->m_ptr);
    VAR_8->m_ptr = 0;
   }
   break;

  default:
   FUNC_3("Bad state %d ", VAR_8->m_state);
   VAR_8->m_state = 133;
 }
 return 1;
}
