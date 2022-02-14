
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * rtx ;
struct TYPE_2__ {int decl; } ;
typedef int INSN_LOCATOR ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static rtx
FUNC_11 (void)
{
  rtx VAR_4 = ((void*)0);
  rtx VAR_5 = ((void*)0);
  rtx VAR_6 = ((void*)0);
  rtx VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = FUNC_1 (VAR_1->decl) - 1;
  bool VAR_11 = 0;
  bool VAR_12 = 0;







  for (VAR_7 = FUNC_8(); VAR_7; VAR_7 = FUNC_3 (VAR_7))
    {
      if (FUNC_2 (VAR_7))
 {
   if (FUNC_9 (VAR_7) == VAR_10)
     {
       if (!VAR_4)
  VAR_4 = VAR_7;
       VAR_8++;
       VAR_5 = VAR_7;
       INSN_LOCATOR (VAR_13) = VAR_3;
     }
   else if (!VAR_4
     && VAR_12)
     VAR_11 = 1;
 }
      else if (FUNC_5 (VAR_7)
        && FUNC_4 (VAR_7) == VAR_0)
 VAR_12 = 1;
      else if (FUNC_5 (VAR_7)
        && (FUNC_6 (VAR_7, 5) == VAR_10))
 VAR_6 = VAR_7;
    }



  if (!VAR_4)
    return ((void*)0);




  if (VAR_6)
    FUNC_10 (VAR_6);




  if (VAR_11 && (VAR_2 > 0))
    return ((void*)0);





  VAR_7 = VAR_4;
  while (VAR_7 != VAR_5)
    {
      VAR_9++;
      VAR_7 = FUNC_3 (VAR_7);
    }
  VAR_9++;






  if ((VAR_8 * 2) <= VAR_9)
    return ((void*)0);





  FUNC_7 (VAR_4 != ((void*)0));
  FUNC_7 (VAR_5 != ((void*)0));

  if (FUNC_0 (VAR_4) !=
      FUNC_0 (VAR_5))
    return ((void*)0);

  return VAR_5;
}
