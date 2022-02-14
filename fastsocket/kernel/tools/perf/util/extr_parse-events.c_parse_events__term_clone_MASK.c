
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int str; } ;
struct parse_events__term {TYPE_1__ val; int config; int type_term; int type_val; } ;


 int FUNC_0 (struct parse_events__term**,int ,int ,int ,int ,int ) ;

int FUNC_1(struct parse_events__term **VAR_0,
        struct parse_events__term *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->type_val, VAR_1->type_term, VAR_1->config,
   VAR_1->val.str, VAR_1->val.num);
}
