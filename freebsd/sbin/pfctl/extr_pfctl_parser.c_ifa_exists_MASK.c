
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_host {scalar_t__ af; int * ifname; struct node_host* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct node_host* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct node_host* VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,int ) ;

struct node_host *
FUNC_7(char *VAR_3)
{
 struct node_host *VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0))
  FUNC_3();


 VAR_5 = FUNC_2();
 if (FUNC_4(VAR_3)) {

  if ((VAR_4 = FUNC_0(1, sizeof(*VAR_4))) == ((void*)0))
   FUNC_1(1, "calloc");
  if ((VAR_4->ifname = FUNC_5(VAR_3)) == ((void*)0))
   FUNC_1(1, "strdup");
  return (VAR_4);
 }

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->af == VAR_0 && !FUNC_6(VAR_4->ifname, VAR_3, VAR_1))
   return (VAR_4);
 }

 return (((void*)0));
}
