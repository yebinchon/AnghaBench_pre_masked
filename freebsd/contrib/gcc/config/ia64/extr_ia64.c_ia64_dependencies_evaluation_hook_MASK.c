
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* rtx ;
typedef enum attr_itanium_class { ____Placeholder_attr_itanium_class } attr_itanium_class ;
struct TYPE_17__ {int call; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_8, rtx VAR_9)
{
  rtx VAR_10, VAR_11, VAR_12, VAR_13;




  if (!VAR_7)
    return;

  VAR_13 = FUNC_2 (VAR_9);
  for (VAR_10 = VAR_8; VAR_10 != VAR_13; VAR_10 = FUNC_2 (VAR_10))
    if (FUNC_1 (VAR_10))
      VAR_10->call = 0;
  for (VAR_10 = VAR_8; VAR_10 != VAR_13; VAR_10 = FUNC_2 (VAR_10))
    if (FUNC_1 (VAR_10)
 && FUNC_6 (VAR_10) == VAR_2)
      {
 for (VAR_11 = FUNC_0 (VAR_10); VAR_11 != 0; VAR_11 = FUNC_4 (VAR_11, 1))
   {
     enum attr_itanium_class VAR_14;

     if (FUNC_3 (VAR_11) != VAR_6)
       continue;
     VAR_12 = FUNC_4 (VAR_11, 0);
     VAR_14 = FUNC_6 (VAR_12);
     if ((VAR_14 == VAR_4
   || VAR_14 == VAR_5)
  && FUNC_7 (VAR_10, VAR_12))
       break;
     else if ((VAR_14 == VAR_3
        || VAR_14 == VAR_0
        || VAR_14 == VAR_1)
       && FUNC_5 (VAR_10, VAR_12))
       break;
   }
 VAR_10->call = VAR_11 != 0;
      }
}
