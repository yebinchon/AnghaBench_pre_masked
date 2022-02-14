
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {char* string; TYPE_1__* next; struct roff_node* child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char*,int ) ;
 int FUNC_2 (struct mpage*,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpage *VAR_1, const struct roff_meta *VAR_2,
 const struct roff_node *VAR_3)
{
 char *VAR_4;

 if (((void*)0) == (VAR_3 = VAR_3->child))
  return 0;

 if (((void*)0) == VAR_3->next) {
  FUNC_2(VAR_1, VAR_3->string, VAR_0);
  return 0;
 }

 FUNC_1(&VAR_4, "%s(%s)", VAR_3->string, VAR_3->next->string);
 FUNC_2(VAR_1, VAR_4, VAR_0);
 FUNC_0(VAR_4);
 return 0;
}
