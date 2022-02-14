
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {scalar_t__ total_size; scalar_t__ args_size; int mask; int fmask; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (scalar_t__,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

void
FUNC_14 (int VAR_15)
{
  HOST_WIDE_INT VAR_16, VAR_17;
  rtx VAR_18, VAR_19;

  if (!VAR_15 && FUNC_12 ())
    {
      FUNC_5 (FUNC_9 ());
      return;
    }






  VAR_16 = VAR_9->machine->frame.total_size;
  VAR_17 = 0;



  if (!VAR_11)
    VAR_18 = VAR_14;
  else
    {
      VAR_18 = VAR_12;
      if (VAR_7)
 VAR_16 -= VAR_9->machine->frame.args_size;
    }



  if ((VAR_9->machine->frame.mask | VAR_9->machine->frame.fmask) != 0)
    {
      VAR_17 = FUNC_1 (VAR_16, VAR_2);
      VAR_16 -= VAR_17;
    }


  VAR_19 = VAR_18;
  if (VAR_16 > 0)
    {
      rtx VAR_20;


      VAR_20 = FUNC_0 (VAR_16);
      if (!FUNC_3 (VAR_16))
 {
   FUNC_6 (FUNC_2 (VAR_3), VAR_20);
   VAR_20 = FUNC_2 (VAR_3);
 }


      if (!VAR_7)
 VAR_19 = VAR_14;

      FUNC_4 (FUNC_7 (VAR_19, VAR_18, VAR_20));
    }


  if (VAR_19 != VAR_14)
    FUNC_6 (VAR_14, VAR_19);




  if (VAR_5 && VAR_8 && !VAR_6)
    FUNC_4 (FUNC_8 ());


  FUNC_13 (VAR_9->machine->frame.total_size - VAR_17,
      VAR_13);


  if (VAR_17 > 0)
    FUNC_4 (FUNC_7 (VAR_14,
         VAR_14,
         FUNC_0 (VAR_17)));



  if (VAR_10)
    {
      if (VAR_7)
 {
   FUNC_6 (FUNC_2 (VAR_3), VAR_14);
   FUNC_4 (FUNC_7 (FUNC_2 (VAR_3),
        FUNC_2 (VAR_3),
        VAR_0));
   FUNC_6 (VAR_14, FUNC_2 (VAR_3));
 }
      else
 FUNC_4 (FUNC_7 (VAR_14,
      VAR_14,
      VAR_0));
    }

  if (!VAR_15)
    {

      if (VAR_7 && (VAR_9->machine->frame.mask & VAR_4) != 0)
 FUNC_5 (FUNC_10 (FUNC_11 (VAR_3,
         VAR_1 + 7)));
      else
 FUNC_5 (FUNC_10 (FUNC_11 (VAR_3,
         VAR_1 + 31)));
    }
}
