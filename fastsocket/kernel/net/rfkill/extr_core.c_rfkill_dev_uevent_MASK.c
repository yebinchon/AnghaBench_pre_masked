
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rfkill {int lock; int state; int type; int name; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct rfkill* FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct rfkill *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, "RFKILL_NAME=%s", VAR_2->name);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_1, "RFKILL_TYPE=%s",
          FUNC_1(VAR_2->type));
 if (VAR_5)
  return VAR_5;
 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_4 = VAR_2->state;
 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_5 = FUNC_0(VAR_1, "RFKILL_STATE=%d",
          FUNC_5(VAR_4));
 return VAR_5;
}
