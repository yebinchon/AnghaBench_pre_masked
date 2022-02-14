
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;


struct TYPE_27__ {int tv_usec; int tv_sec; } ;
struct TYPE_29__ {TYPE_2__ tv; } ;
typedef TYPE_4__ timestamp_t ;
struct TYPE_30__ {int tv_nsec; int tv_sec; } ;
typedef TYPE_5__ timespec_t ;
struct TYPE_31__ {scalar_t__ q_ptr; } ;
typedef TYPE_6__ queue_t ;
typedef int parsetime_t ;
struct TYPE_28__ {int serial; TYPE_2__ tv; } ;
struct TYPE_25__ {int parse_dtime; } ;
struct TYPE_32__ {int parse_status; TYPE_3__ parse_ppsclockev; TYPE_16__ parse_io; TYPE_6__* parse_queue; } ;
typedef TYPE_7__ parsestream_t ;
struct TYPE_33__ {int b_wptr; TYPE_1__* b_datap; int b_rptr; } ;
typedef TYPE_8__ mblk_t ;
typedef int caddr_t ;
struct TYPE_26__ {unsigned char db_type; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_16__*) ;
 int FUNC_6 (TYPE_16__*,int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_16__*,unsigned int,TYPE_4__*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_6__*,TYPE_8__*) ;
 unsigned long FUNC_11 (TYPE_8__**) ;

__attribute__((used)) static int
FUNC_12(
   queue_t *VAR_7,
   mblk_t *VAR_8
   )
{
 register unsigned char VAR_9;
 mblk_t *VAR_10 = VAR_8;

 switch (VAR_9 = VAR_10->b_datap->db_type)
 {
     default:




  FUNC_8(VAR_1, "parse: parserput - forward type 0x%x\n", VAR_9);

  if (FUNC_2(VAR_7) || (VAR_10->b_datap->db_type > VAR_3))
  {
   FUNC_9(VAR_7, VAR_10);
  }
  else
      FUNC_10(VAR_7, VAR_10);
  break;

     case 131:
     case 130:
      {
       register parsestream_t * VAR_11 = (parsestream_t *)VAR_7->q_ptr;
       register mblk_t *VAR_12;
       register unsigned long VAR_13;
       timestamp_t VAR_14;
       timespec_t VAR_15;




       FUNC_4(&VAR_15);
       VAR_14.tv.tv_sec = VAR_15.tv_sec;
       VAR_14.tv.tv_usec = VAR_15.tv_nsec / 1000;

       if (!(VAR_11->parse_status & VAR_2))
       {
        FUNC_8(VAR_1, "parse: parserput - parser disabled - forward type 0x%x\n", VAR_9);
        if (FUNC_2(VAR_7) || (VAR_10->b_datap->db_type > VAR_3))
        {
         FUNC_9(VAR_7, VAR_10);
        }
        else
     FUNC_10(VAR_7, VAR_10);
       }
       else
       {
        FUNC_8(VAR_1, "parse: parserput - M_%s\n", (VAR_9 == 130) ? "DATA" : "BREAK");
        if (VAR_9 == 130)
        {



         while (VAR_10 != (mblk_t *)((void*)0))
         {
          VAR_13 = FUNC_11(&VAR_10);
          if (VAR_13 != ~0 && FUNC_7(&VAR_11->parse_io, (unsigned int)VAR_13, &VAR_14))
          {




           VAR_12 = (mblk_t *)((void*)0);
           if (FUNC_2(VAR_11->parse_queue) && (VAR_12 = FUNC_0(sizeof(parsetime_t), VAR_0)))
           {
            FUNC_1((caddr_t)&VAR_11->parse_io.parse_dtime, (caddr_t)VAR_12->b_rptr, sizeof(parsetime_t));
            VAR_12->b_wptr += sizeof(parsetime_t);
            FUNC_9(VAR_11->parse_queue, VAR_12);
           }
           else
        if (VAR_12) FUNC_3(VAR_12);
           FUNC_5(&VAR_11->parse_io);
          }
         }
        }
        else
        {
         if (FUNC_7(&VAR_11->parse_io, (unsigned int)0, &VAR_14))
         {




          VAR_12 = (mblk_t *)((void*)0);
          if (FUNC_2(VAR_11->parse_queue) && (VAR_12 = FUNC_0(sizeof(parsetime_t), VAR_0)))
          {
           FUNC_1((caddr_t)&VAR_11->parse_io.parse_dtime, (caddr_t)VAR_12->b_rptr, sizeof(parsetime_t));
           VAR_12->b_wptr += sizeof(parsetime_t);
           FUNC_9(VAR_11->parse_queue, VAR_12);
          }
          else
       if (VAR_12) FUNC_3(VAR_12);
          FUNC_5(&VAR_11->parse_io);
         }
         FUNC_3(VAR_10);
        }
        break;
       }
      }




     case 129:
     case 128:
      {
       register parsestream_t * VAR_16 = (parsestream_t *)VAR_7->q_ptr;
       timestamp_t VAR_17;
       timespec_t VAR_18;
       register mblk_t *VAR_19;
       register int VAR_20 = VAR_6 ^ (VAR_9 == 128);

       FUNC_4(&VAR_18);
       VAR_17.tv.tv_sec = VAR_18.tv_sec;
       VAR_17.tv.tv_usec = VAR_18.tv_nsec / 1000;

       FUNC_8(VAR_1, "parse: parserput - M_%sHANGUP\n", (VAR_9 == 129) ? "" : "UN");

       if ((VAR_16->parse_status & VAR_2) &&
    FUNC_6(&VAR_16->parse_io, VAR_20 ? VAR_4 : VAR_5, &VAR_17))
       {
        VAR_19 = (mblk_t *)((void*)0);
        if (FUNC_2(VAR_16->parse_queue) && (VAR_19 = FUNC_0(sizeof(parsetime_t), VAR_0)))
        {
         FUNC_1((caddr_t)&VAR_16->parse_io.parse_dtime, (caddr_t)VAR_19->b_rptr, sizeof(parsetime_t));
         VAR_19->b_wptr += sizeof(parsetime_t);
         FUNC_9(VAR_16->parse_queue, VAR_19);
        }
        else
     if (VAR_19) FUNC_3(VAR_19);
        FUNC_5(&VAR_16->parse_io);
        FUNC_3(VAR_10);
       }
       else
    if (FUNC_2(VAR_7) || (VAR_10->b_datap->db_type > VAR_3))
    {
     FUNC_9(VAR_7, VAR_10);
    }
    else
        FUNC_10(VAR_7, VAR_10);

       if (VAR_20)
       {
        VAR_16->parse_ppsclockev.tv = VAR_17.tv;
        ++(VAR_16->parse_ppsclockev.serial);
       }
      }
 }
 return 0;
}
