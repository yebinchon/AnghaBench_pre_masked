
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cleanup {int dummy; } ;
typedef void* ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {int kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 () ;


 void* VAR_5 ;

 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct cleanup*) ;
 int FUNC_5 () ;
 void* VAR_7 ;
 struct cleanup* FUNC_6 (int ,int ) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (void*,int,int) ;
 int FUNC_10 () ;

void
FUNC_11 (int VAR_17, enum target_signal VAR_18)
{
  int VAR_19 = 1;
  struct cleanup *VAR_20 = FUNC_6 (VAR_10, 0);
  VAR_3;
  if (VAR_1 && VAR_17 && VAR_6)
    FUNC_8 ();






  if (FUNC_3 (FUNC_7 ()) == VAR_9)
    FUNC_0 ();

  if (FUNC_2 () && VAR_17)
    {

      FUNC_1 (VAR_18, 1 );

      VAR_17 = 0;


      VAR_14 = 1;
      VAR_15 = VAR_7;
    }
  switch (VAR_8.kind)
    {
    case 129:
    case 128:
      VAR_8.kind = VAR_5;
      if (FUNC_5 ())
 VAR_19 = 0;
      break;

    case 130:

      VAR_8.kind = VAR_5;
      break;

    default:
      break;
    }


  FUNC_10 ();

  if (VAR_19)
    {
      ptid_t VAR_21;

      VAR_21 = VAR_4;

      if ((VAR_17 || VAR_14) &&
   (VAR_16
    || (!VAR_6 && FUNC_3 (FUNC_7 ()))))
 {





   VAR_21 = VAR_7;
 }

      if ((VAR_13 == VAR_11) ||
   (VAR_13 == VAR_12 &&
    (VAR_17 || VAR_14)))
 {

   VAR_21 = VAR_7;
 }

      if (VAR_0)
 {



   if (VAR_17 && VAR_6 && FUNC_3 (FUNC_7 ()))
     VAR_17 = 0;
 }
      FUNC_9 (VAR_21, VAR_17, VAR_18);
    }

  FUNC_4 (VAR_20);
}
