
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ type; } ;
struct roff_meta {int dummy; } ;
struct mpage {int desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct roff_node const*) ;

__attribute__((used)) static int
FUNC_1(struct mpage *VAR_1, const struct roff_meta *VAR_2,
 const struct roff_node *VAR_3)
{

 if (VAR_3->type == VAR_0)
  FUNC_0(&VAR_1->desc, VAR_3);
 return 0;
}
