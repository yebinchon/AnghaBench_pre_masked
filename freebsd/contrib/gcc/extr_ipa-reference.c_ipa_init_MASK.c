
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int decl; struct cgraph_node* next; } ;


 void* FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 struct cgraph_node* VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  struct cgraph_node *VAR_9;
  VAR_3 = FUNC_2(7, "memory");

  VAR_6 =
    FUNC_5 (VAR_7);

  FUNC_1 (&VAR_2);
  VAR_4 = FUNC_0 (&VAR_2);
  VAR_5 = FUNC_0 (&VAR_2);
  VAR_0 = FUNC_0 (&VAR_2);


  for (VAR_9 = VAR_1; VAR_9; VAR_9 = VAR_9->next)
    FUNC_3 (VAR_9->decl);





  VAR_8 = FUNC_4 ();
}
