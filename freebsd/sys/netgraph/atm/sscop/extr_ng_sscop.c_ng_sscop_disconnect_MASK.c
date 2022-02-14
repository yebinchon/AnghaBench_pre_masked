
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int sscop; scalar_t__ enabled; int * lower; int * upper; int * manage; } ;
typedef int node_p ;
typedef int * hook_p ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct priv* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_2)
{
 node_p VAR_3 = FUNC_0(VAR_2);
 struct priv *VAR_4 = FUNC_3(VAR_3);

 if(VAR_2 == VAR_4->upper)
  VAR_4->upper = ((void*)0);
 else if(VAR_2 == VAR_4->lower)
  VAR_4->lower = ((void*)0);
 else if(VAR_2 == VAR_4->manage)
  VAR_4->manage = ((void*)0);

 if(FUNC_2(VAR_3) == 0) {
  if(FUNC_1(VAR_3))
   FUNC_4(VAR_3);
 } else {




  if(VAR_4->upper == ((void*)0) && VAR_4->lower != ((void*)0) &&
     VAR_4->enabled &&
     FUNC_6(VAR_4->sscop) != VAR_0) {
   FUNC_5(VAR_4->sscop, VAR_1,
       ((void*)0), 0);
  }
 }
 return 0;
}
