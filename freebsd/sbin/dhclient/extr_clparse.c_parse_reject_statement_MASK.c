
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iaddr {int dummy; } ;
struct iaddrlist {struct iaddrlist* next; struct iaddr addr; } ;
struct client_config {struct iaddrlist* reject_list; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct iaddrlist* FUNC_1 (int) ;
 int FUNC_2 (char**,int *) ;
 int FUNC_3 (int *,struct iaddr*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(FILE *VAR_2, struct client_config *VAR_3)
{
 int VAR_4;
 char *VAR_5;
 struct iaddr VAR_6;
 struct iaddrlist *VAR_7;

 do {
  if (!FUNC_3(VAR_2, &VAR_6)) {
   FUNC_4("expecting IP address.");
   FUNC_5(VAR_2);
   return;
  }

  VAR_7 = FUNC_1(sizeof(struct iaddrlist));
  if (!VAR_7)
   FUNC_0("no memory for reject list!");

  VAR_7->addr = VAR_6;
  VAR_7->next = VAR_3->reject_list;
  VAR_3->reject_list = VAR_7;

  VAR_4 = FUNC_2(&VAR_5, VAR_2);
 } while (VAR_4 == VAR_0);

 if (VAR_4 != VAR_1) {
  FUNC_4("expecting semicolon.");
  FUNC_5(VAR_2);
 }
}
