
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; int * child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpage*,int *) ;

__attribute__((used)) static int
FUNC_1(struct mpage *VAR_1, const struct roff_meta *VAR_2,
 const struct roff_node *VAR_3)
{

 if (VAR_3->type != VAR_0)
  return 1;

 if (VAR_3->child != ((void*)0))
  FUNC_0(VAR_1, VAR_3->child);

 return 0;
}
