
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout {int * c_arg; int * c_func; } ;
typedef int * node_p ;
typedef int * item_p ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct callout*) ;
 int VAR_0 ;

int
FUNC_4(struct callout *VAR_1, node_p VAR_2)
{
 item_p VAR_3;
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0), ("ng_uncallout: NULL callout"));
 FUNC_0(VAR_2 != ((void*)0), ("ng_uncallout: NULL node"));

 VAR_4 = FUNC_3(VAR_1);
 VAR_3 = VAR_1->c_arg;

 if ((VAR_4 > 0) && (VAR_1->c_func == &VAR_0) &&
     (VAR_3 != ((void*)0)) && (FUNC_1(VAR_3) == VAR_2)) {





  FUNC_2(VAR_3);
 }
 VAR_1->c_arg = ((void*)0);





 return (VAR_4 > 0);
}
