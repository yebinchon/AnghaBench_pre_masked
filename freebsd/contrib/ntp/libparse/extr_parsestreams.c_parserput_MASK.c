
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_24__ {int tv; } ;
typedef TYPE_3__ timestamp_t ;
struct TYPE_25__ {int q_next; scalar_t__ q_ptr; } ;
typedef TYPE_4__ queue_t ;
typedef int parsetime_t ;
struct TYPE_23__ {int serial; int tv; } ;
struct TYPE_21__ {int parse_dtime; } ;
struct TYPE_26__ {int parse_status; TYPE_2__ parse_ppsclockev; TYPE_14__ parse_io; TYPE_4__* parse_queue; } ;
typedef TYPE_5__ parsestream_t ;
struct TYPE_27__ {int b_wptr; TYPE_1__* b_datap; int b_rptr; } ;
typedef TYPE_6__ mblk_t ;
typedef int caddr_t ;
struct TYPE_22__ {unsigned char db_type; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_14__*,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_14__*,unsigned int,TYPE_3__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_6__*) ;
 unsigned long FUNC_10 (TYPE_6__**) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(
 queue_t *VAR_7,
 mblk_t *VAR_8
 )
{
 unsigned char VAR_9;

 switch (VAR_9 = VAR_8->b_datap->db_type)
 {
     default:




  FUNC_7(VAR_1,("parse: parserput - forward type 0x%x\n", VAR_9));
  if (FUNC_2(VAR_7->q_next) || (VAR_8->b_datap->db_type > VAR_3))
  {
   FUNC_8(VAR_7, VAR_8);
  }
  else
      FUNC_9(VAR_7, VAR_8);
  break;

     case 131:
     case 130:
      {
       register parsestream_t * VAR_10 = (parsestream_t *)(void *)VAR_7->q_ptr;
       register mblk_t *VAR_11;
       register unsigned long VAR_12;
       timestamp_t VAR_13;




       FUNC_11(&VAR_13.tv);

       if (!(VAR_10->parse_status & VAR_2))
       {
        FUNC_7(VAR_1,("parse: parserput - parser disabled - forward type 0x%x\n", VAR_9));
        if (FUNC_2(VAR_7->q_next) || (VAR_8->b_datap->db_type > VAR_3))
        {
         FUNC_8(VAR_7, VAR_8);
        }
        else
     FUNC_9(VAR_7, VAR_8);
       }
       else
       {
        FUNC_7(VAR_1,("parse: parserput - M_%s\n", (VAR_9 == 130) ? "DATA" : "BREAK"));

        if (VAR_9 == 130)
        {



         while (VAR_8 != (mblk_t *)((void*)0))
         {
          VAR_12 = FUNC_10(&VAR_8);
          if (VAR_12 != ~0 && FUNC_6(&VAR_10->parse_io, (unsigned int)VAR_12, &VAR_13))
          {




           VAR_11 = (mblk_t *)((void*)0);
           if (FUNC_2(VAR_10->parse_queue->q_next) && (VAR_11 = FUNC_0(sizeof(parsetime_t), VAR_0)))
           {
            FUNC_1((caddr_t)&VAR_10->parse_io.parse_dtime, (caddr_t)VAR_11->b_rptr, sizeof(parsetime_t));
            VAR_11->b_wptr += sizeof(parsetime_t);
            FUNC_8(VAR_10->parse_queue, VAR_11);
           }
           else
        if (VAR_11) FUNC_3(VAR_11);
           FUNC_4(&VAR_10->parse_io);
          }
         }
        }
        else
        {
         if (FUNC_6(&VAR_10->parse_io, (unsigned int)0, &VAR_13))
         {




          VAR_11 = (mblk_t *)((void*)0);
          if (FUNC_2(VAR_10->parse_queue->q_next) && (VAR_11 = FUNC_0(sizeof(parsetime_t), VAR_0)))
          {
           FUNC_1((caddr_t)&VAR_10->parse_io.parse_dtime, (caddr_t)VAR_11->b_rptr, sizeof(parsetime_t));
           VAR_11->b_wptr += sizeof(parsetime_t);
           FUNC_8(VAR_10->parse_queue, VAR_11);
          }
          else
       if (VAR_11) FUNC_3(VAR_11);
          FUNC_4(&VAR_10->parse_io);
         }
         FUNC_3(VAR_8);
        }
        break;
       }
      }




     case 129:
     case 128:
      {
       register parsestream_t * VAR_14 = (parsestream_t *)(void *)VAR_7->q_ptr;
       timestamp_t VAR_15;
       register mblk_t *VAR_16;
       register int VAR_17 = VAR_6 ^ (VAR_9 == 128);

       FUNC_11(&VAR_15.tv);

       FUNC_7(VAR_1,("parse: parserput - M_%sHANGUP\n", (VAR_9 == 129) ? "" : "UN"));

       if ((VAR_14->parse_status & VAR_2) &&
    FUNC_5(&VAR_14->parse_io, (int)(VAR_17 ? VAR_4 : VAR_5), &VAR_15))
       {
        VAR_16 = (mblk_t *)((void*)0);
        if (FUNC_2(VAR_14->parse_queue->q_next) && (VAR_16 = FUNC_0(sizeof(parsetime_t), VAR_0)))
        {
         FUNC_1((caddr_t)&VAR_14->parse_io.parse_dtime, (caddr_t)VAR_16->b_rptr, sizeof(parsetime_t));
         VAR_16->b_wptr += sizeof(parsetime_t);
         FUNC_8(VAR_14->parse_queue, VAR_16);
        }
        else
     if (VAR_16) FUNC_3(VAR_16);
        FUNC_4(&VAR_14->parse_io);
        FUNC_3(VAR_8);
       }
       else
    if (FUNC_2(VAR_7->q_next) || (VAR_8->b_datap->db_type > VAR_3))
    {
     FUNC_8(VAR_7, VAR_8);
    }
    else
        FUNC_9(VAR_7, VAR_8);

       if (VAR_17)
       {
        VAR_14->parse_ppsclockev.tv = VAR_15.tv;
        ++(VAR_14->parse_ppsclockev.serial);
       }
      }
 }
 return 0;
}
