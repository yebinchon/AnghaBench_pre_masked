
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int sscf; scalar_t__ enabled; int * lower; int * upper; } ;
typedef int node_p ;
typedef int * hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct priv* FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_3)
{
 node_p VAR_4 = FUNC_0(VAR_3);
 struct priv *VAR_5 = FUNC_3(VAR_4);

 if (VAR_3 == VAR_5->upper)
  VAR_5->upper = ((void*)0);
 else if (VAR_3 == VAR_5->lower)
  VAR_5->lower = ((void*)0);
 else {
  FUNC_4(VAR_1, "bogus hook");
  return (VAR_0);
 }

 if (FUNC_2(VAR_4) == 0) {
  if (FUNC_1(VAR_4))
   FUNC_5(VAR_4);
 } else {




  if (VAR_5->lower == ((void*)0) &&
      VAR_5->enabled &&
      FUNC_6(VAR_5->sscf) != VAR_2)
   FUNC_7(VAR_5->sscf);
 }
 return (0);
}
