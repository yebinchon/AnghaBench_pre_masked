
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {int decl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (scalar_t__,int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int * FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;

void
FUNC_15 (void)
{
  tree VAR_5 = FUNC_0 (VAR_4->decl);
  rtx VAR_6, VAR_7;

  VAR_6 = FUNC_11 ();
  if (!FUNC_6 (VAR_6))
    VAR_6 = FUNC_13 (VAR_6);
  for (; VAR_6; VAR_6 = FUNC_13 (VAR_6))
    {
      tree VAR_8;


      if (FUNC_2 (VAR_6)
   && (FUNC_1 (FUNC_3 (VAR_6)) == VAR_1
       || FUNC_1 (FUNC_3 (VAR_6)) == VAR_0))
 continue;

      VAR_8 = FUNC_12 (VAR_6);


      if (FUNC_1 (FUNC_3 (VAR_6)) == VAR_3)
 {
   int VAR_9;
   rtx VAR_10 = FUNC_3 (VAR_6);

   VAR_8 = ((void*)0);
   for (VAR_9 = 0; VAR_9 < FUNC_5 (VAR_10, 0); VAR_9++)
     VAR_8 = FUNC_8 (VAR_8,
      FUNC_12 (FUNC_4 (VAR_10, 0, VAR_9)));
 }
      if (! VAR_8)
 continue;

      if (VAR_8 != VAR_5)
 {
   FUNC_7 (VAR_6, VAR_5, VAR_8);
   VAR_5 = VAR_8;
 }
    }


  VAR_7 = FUNC_10 (VAR_2);
  FUNC_7 (VAR_7, VAR_5, FUNC_0 (VAR_4->decl));
  FUNC_9 (VAR_7);

  FUNC_14 ();
}
