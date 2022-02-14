
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int dummy; } ;
struct autr_ta {scalar_t__ s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct autr_ta*,int ) ;
 int FUNC_1 (struct module_env*,struct autr_ta*,int*,int ) ;
 int FUNC_2 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct module_env* VAR_4, struct autr_ta* VAR_5, int* VAR_6)
{
 if(VAR_5->s == VAR_2 || VAR_5->s == VAR_0) {
                FUNC_1(VAR_4, VAR_5, VAR_6, VAR_1);
  FUNC_2(VAR_5, VAR_3, "old id, prior to revocation");
                FUNC_0(VAR_5, 0);
  FUNC_2(VAR_5, VAR_3, "new id, after revocation");
 }
}
