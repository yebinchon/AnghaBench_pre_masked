
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct midi_input_info {int m_state; int m_ptr; int m_left; unsigned char* m_buf; unsigned char m_prev_status; } ;
struct TYPE_2__ {struct midi_input_info in_info; } ;





 int FUNC_0 (int,unsigned char*,int) ;
 int* VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, unsigned char VAR_4)
{
 int VAR_5;
 struct midi_input_info *VAR_6;

 static unsigned char VAR_7[] =

 {
  2,
  2,
  2,
  2,
  1,
  1,
  2,
  0
 };

 if (VAR_3 < 0 || VAR_3 > VAR_2 || VAR_1[VAR_3] == ((void*)0))
  return;

 if (VAR_4 == 0xfe)
  return;

 VAR_5 = VAR_0[VAR_3];
 VAR_6 = &VAR_1[VAR_3]->in_info;

 switch (VAR_6->m_state)
   {
   case 129:
    if (VAR_4 & 0x80)
      {
       if ((VAR_4 & 0xf0) == 0xf0)
         {
          switch (VAR_4)
     {
     case 0xf0:
      VAR_6->m_state = 128;
      break;

     case 0xf1:
     case 0xf3:
      VAR_6->m_state = 130;
      VAR_6->m_ptr = 1;
      VAR_6->m_left = 1;
      VAR_6->m_buf[0] = VAR_4;
      break;

     case 0xf2:
      VAR_6->m_state = 130;
      VAR_6->m_ptr = 1;
      VAR_6->m_left = 2;
      VAR_6->m_buf[0] = VAR_4;
      break;

     default:
      VAR_6->m_buf[0] = VAR_4;
      VAR_6->m_ptr = 1;
      FUNC_0(VAR_5, VAR_6->m_buf, VAR_6->m_ptr);
      VAR_6->m_ptr = 0;
      VAR_6->m_left = 0;
     }
       } else
         {
          VAR_6->m_state = 130;
          VAR_6->m_ptr = 1;
          VAR_6->m_left = VAR_7[(VAR_4 >> 4) - 8];
          VAR_6->m_buf[0] = VAR_6->m_prev_status = VAR_4;
         }
      } else if (VAR_6->m_prev_status & 0x80) {

       VAR_6->m_ptr = 2;
       VAR_6->m_buf[1] = VAR_4;
       VAR_6->m_buf[0] = VAR_6->m_prev_status;
       VAR_6->m_left = VAR_7[(VAR_6->m_buf[0] >> 4) - 8] - 1;
       if (VAR_6->m_left > 0)
        VAR_6->m_state = 130;
       else {
        VAR_6->m_state = 129;
        FUNC_0(VAR_5, VAR_6->m_buf, VAR_6->m_ptr);
        VAR_6->m_ptr = 0;
       }
      }
    break;

   case 130:
    VAR_6->m_buf[VAR_6->m_ptr++] = VAR_4;
    if (--VAR_6->m_left <= 0)
      {
       VAR_6->m_state = 129;
       FUNC_0(VAR_5, VAR_6->m_buf, VAR_6->m_ptr);
       VAR_6->m_ptr = 0;
      }
    break;

   case 128:
    if (VAR_4 == 0xf7)
      {
       VAR_6->m_state = 129;
       VAR_6->m_left = 0;
       VAR_6->m_ptr = 0;
      }
    break;

   default:
    FUNC_1("MIDI%d: Unexpected state %d (%02x)\n", VAR_3, VAR_6->m_state, (int) VAR_4);
    VAR_6->m_state = 129;
   }
}
