
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opstack_op {int op; int list; } ;
struct filter_parse_state {int opstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct opstack_op* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct filter_parse_state *VAR_2, int VAR_3)
{
 struct opstack_op *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->op = VAR_3;
 FUNC_1(&VAR_4->list, &VAR_2->opstack);

 return 0;
}
