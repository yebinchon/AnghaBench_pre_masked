
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {char* string; } ;
struct roff_man {int next; int roff; struct roff_node* last; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char*,char*) ;
 char* FUNC_2 (int ,char const*) ;

void
FUNC_3(struct roff_man *VAR_1, const char *VAR_2)
{
 struct roff_node *VAR_3;
 char *VAR_4, *VAR_5;

 VAR_3 = VAR_1->last;
 VAR_4 = FUNC_2(VAR_1->roff, VAR_2);
 FUNC_1(&VAR_5, "%s %s", VAR_3->string, VAR_4);
 FUNC_0(VAR_4);
 FUNC_0(VAR_3->string);
 VAR_3->string = VAR_5;
 VAR_1->next = VAR_0;
}
