
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intr_info {scalar_t__ cause_reg; scalar_t__ enable_reg; int fatal; int flags; struct intr_action* actions; } ;
struct intr_action {int mask; int (* action ) (struct adapter*,int ,int) ;int arg; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int) ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,struct intr_info const*,int) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_4(struct adapter *VAR_2, const struct intr_info *VAR_3,
    u32 VAR_4, bool VAR_5)
{
 u32 VAR_6, VAR_7;
 bool VAR_8;
 const struct intr_action *VAR_9;






 VAR_6 = FUNC_1(VAR_2, VAR_3->cause_reg);
 if (VAR_3->cause_reg == VAR_0)
  VAR_6 &= FUNC_1(VAR_2, VAR_3->enable_reg);
 if (VAR_5 || VAR_6 != 0)
  FUNC_2(VAR_2, VAR_3, VAR_6);
 VAR_7 = VAR_6 & VAR_3->fatal;
 if (VAR_7 != 0 && VAR_3->flags & VAR_1)
  VAR_7 &= FUNC_1(VAR_2, VAR_3->enable_reg);
 VAR_6 |= VAR_4;
 if (VAR_6 == 0)
  return (0);

 VAR_8 = VAR_7 != 0;
 for (VAR_9 = VAR_3->actions; VAR_9 && VAR_9->mask != 0; VAR_9++) {
  if (!(VAR_9->mask & VAR_6))
   continue;
  VAR_8 |= (VAR_9->action)(VAR_2, VAR_9->arg, VAR_5);
 }


 FUNC_3(VAR_2, VAR_3->cause_reg, VAR_6);
 (void)FUNC_1(VAR_2, VAR_3->cause_reg);

 return (VAR_8);
}
