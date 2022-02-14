
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct module_env {int dummy; } ;
struct autr_ta {scalar_t__ last_change; scalar_t__ s; struct autr_ta* next; int dname_len; int rr_len; int rr; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct module_env*,struct autr_ta*,int*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct autr_ta*) ;
 int FUNC_3 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct module_env* VAR_4, struct trust_anchor* VAR_5, int* VAR_6)
{

 struct autr_ta* VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 for(VAR_7 = VAR_5->autr->keys; VAR_7; VAR_7 = VAR_7->next) {

  if(FUNC_1(VAR_7->rr, VAR_7->rr_len,
   VAR_7->dname_len) == VAR_2 &&
   VAR_7->last_change == 0 &&
   !FUNC_2(VAR_7) &&
   VAR_7->s == VAR_1)
                        VAR_8++;
 }
 if(VAR_8 == 0)
  return 0;
 for(VAR_7 = VAR_5->autr->keys; VAR_7; VAR_7 = VAR_7->next) {
                if (FUNC_2(VAR_7) &&
   VAR_7->s == VAR_0) {
   FUNC_3(VAR_7, VAR_3, "trust KSK from "
    "ZSK(config)");
   FUNC_0(VAR_4, VAR_7, VAR_6,
    VAR_1);
   VAR_9++;
  }
 }
 return VAR_9;
}
