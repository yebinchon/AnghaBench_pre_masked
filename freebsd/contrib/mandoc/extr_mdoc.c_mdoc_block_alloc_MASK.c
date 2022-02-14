
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mdoc_data {int dummy; } mdoc_data ;
struct roff_node {int norm; struct mdoc_arg* args; } ;
struct roff_man {int next; } ;
struct mdoc_arg {int refcnt; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct roff_node* FUNC_1 (struct roff_man*,int,int,int ,int) ;
 int FUNC_2 (struct roff_man*,struct roff_node*) ;

struct roff_node *
FUNC_3(struct roff_man *VAR_2, int VAR_3, int VAR_4,
    enum roff_tok VAR_5, struct mdoc_arg *VAR_6)
{
 struct roff_node *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5);
 VAR_7->args = VAR_6;
 if (VAR_7->args)
  (VAR_6->refcnt)++;

 switch (VAR_5) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_7->norm = FUNC_0(1, sizeof(union mdoc_data));
  break;
 default:
  break;
 }
 FUNC_2(VAR_2, VAR_7);
 VAR_2->next = VAR_1;
 return VAR_7;
}
