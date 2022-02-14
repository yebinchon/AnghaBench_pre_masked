
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
typedef int cxx_pretty_printer ;
struct TYPE_2__ {int flags; } ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int *,int ) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16 (cxx_pretty_printer *VAR_3, tree VAR_4)
{
  tree VAR_5 = FUNC_7 (VAR_4) ? ((void*)0) : FUNC_0 (VAR_4);
  tree VAR_6 =
    FUNC_7 (VAR_4) ? FUNC_6 (VAR_4) : FUNC_1 (VAR_4);
  const bool VAR_7 = VAR_5 == ((void*)0)
    || FUNC_8 (VAR_3)->flags & VAR_1;
  bool VAR_8 = 1;


  if (FUNC_3 (VAR_4) == VAR_0)
    VAR_6 = FUNC_2 (VAR_6);

  FUNC_10 (VAR_3);
  for (; VAR_5; VAR_5 = FUNC_2 (VAR_5), VAR_6 = FUNC_2 (VAR_6))
    {
      if (!VAR_8)
 FUNC_13 (VAR_3, ',');
      VAR_8 = 0;
      FUNC_11 (VAR_3, VAR_7 ? FUNC_5 (VAR_6) : VAR_5);
      if (!VAR_7 && FUNC_8 (VAR_3)->flags & VAR_2)
 {
   FUNC_14 (VAR_3);
   FUNC_15 (VAR_3);
   FUNC_14 (VAR_3);
   FUNC_9 (VAR_3, FUNC_4 (VAR_6));
 }
    }
  FUNC_12 (VAR_3);
}
