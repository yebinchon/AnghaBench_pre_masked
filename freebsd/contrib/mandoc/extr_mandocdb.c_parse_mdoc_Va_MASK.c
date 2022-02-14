
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ type; scalar_t__ tok; TYPE_1__* child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int * next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char**,struct roff_node const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct mpage*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct mpage *VAR_6, const struct roff_meta *VAR_7,
 const struct roff_node *VAR_8)
{
 char *VAR_9;

 if (VAR_8->type != VAR_2 && VAR_8->type != VAR_1)
  return 0;

 if (VAR_8->child != ((void*)0) &&
     VAR_8->child->next == ((void*)0) &&
     VAR_8->child->type == VAR_3)
  return 1;

 VAR_9 = ((void*)0);
 FUNC_0(&VAR_9, VAR_8);
 if (VAR_9 != ((void*)0)) {
  FUNC_2(VAR_6, VAR_9, VAR_5 | (VAR_8->tok == VAR_0 ||
      VAR_8->type == VAR_1 ? VAR_4 : 0));
  FUNC_1(VAR_9);
 }

 return 0;
}
