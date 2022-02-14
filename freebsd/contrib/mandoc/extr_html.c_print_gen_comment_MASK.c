
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; char* string; struct roff_node* next; } ;
struct html {int indent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct html*) ;
 int FUNC_1 (struct html*) ;
 int FUNC_2 (struct html*,char*) ;
 int * FUNC_3 (char*,char*) ;

void
FUNC_4(struct html *VAR_1, struct roff_node *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, "<!-- This is an automatically generated file."
     "  Do not edit.");
 VAR_1->indent = 1;
 VAR_3 = 0;
 while (VAR_2 != ((void*)0) && VAR_2->type == VAR_0) {
  if (FUNC_3(VAR_2->string, "-->") == ((void*)0) &&
      (VAR_3 || *VAR_2->string != '\0')) {
   FUNC_0(VAR_1);
   FUNC_1(VAR_1);
   FUNC_2(VAR_1, VAR_2->string);
   VAR_3 = *VAR_2->string != '\0';
  }
  VAR_2 = VAR_2->next;
 }
 if (VAR_3)
  FUNC_0(VAR_1);
 FUNC_2(VAR_1, " -->");
 FUNC_0(VAR_1);
 VAR_1->indent = 0;
}
