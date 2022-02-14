
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int dummy; } ;
struct roff_man {int dummy; } ;
struct mdoc_argv {int * value; int pos; int line; scalar_t__ sz; } ;


 int FUNC_0 (struct roff_man*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct roff_man *VAR_0, struct roff_node *VAR_1, struct mdoc_argv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (int)VAR_2->sz; VAR_3++)
  FUNC_0(VAR_0, VAR_2->line, VAR_2->pos, VAR_2->value[VAR_3]);
}
