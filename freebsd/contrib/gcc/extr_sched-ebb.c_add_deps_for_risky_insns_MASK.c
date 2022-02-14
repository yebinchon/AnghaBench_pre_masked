
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum DEPS_ADJUST_RESULT { ____Placeholder_DEPS_ADJUST_RESULT } DEPS_ADJUST_RESULT ;
typedef TYPE_1__* basic_block ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {struct TYPE_7__* aux; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;


 int VAR_7 ;

 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_4__* VAR_8 ;
 TYPE_1__* FUNC_9 (TYPE_1__*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_10, rtx VAR_11)
{
  rtx VAR_12, VAR_13;
  int VAR_14;
  rtx VAR_15 = VAR_6;
  rtx VAR_16 = FUNC_4 (VAR_11);
  basic_block VAR_17 = ((void*)0), VAR_18;

  for (VAR_12 = VAR_10; VAR_12 != VAR_16; VAR_12 = FUNC_4 (VAR_12))
    if (FUNC_8 (VAR_12))
      {
 VAR_18 = FUNC_1 (VAR_12);
 VAR_18->aux = VAR_17;
 VAR_17 = VAR_18;
 VAR_15 = VAR_12;
      }
    else if (FUNC_2 (VAR_12) && VAR_15 != VAR_6)
      {
 VAR_14 = FUNC_11 (VAR_12);
 VAR_13 = VAR_15;
 switch (VAR_14)
   {
   case 130:
     if (VAR_9)
       {
  VAR_18 = FUNC_9 (VAR_17, VAR_12);
  if (VAR_18)
    {
      VAR_18 = VAR_18->aux;
      if (!VAR_18)
        break;
      VAR_13 = FUNC_0 (VAR_18);
    }
       }

   case 128:
   case 131:
   case 129:





     if (! FUNC_12 (VAR_12, VAR_13))
       {
  if (!(VAR_8->flags & VAR_4))
    {
      enum DEPS_ADJUST_RESULT VAR_19;

      VAR_19 = FUNC_6 (VAR_12, VAR_13,
        VAR_7, VAR_1);

      if (VAR_19 == VAR_3)
        FUNC_5 (VAR_12, FUNC_3 (VAR_12));
      else
        FUNC_10 (VAR_19 != VAR_2);
    }
  else
    FUNC_7 (VAR_12, VAR_13, VAR_7,
            FUNC_13 (VAR_1,
            VAR_0,
            VAR_5));
       }

            break;

          default:
            break;
   }
      }

  while (VAR_17)
    {
      VAR_18 = VAR_17->aux;
      VAR_17->aux = ((void*)0);
      VAR_17 = VAR_18;
    }
}
