
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulatory_request {int alpha2; int processed; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct regulatory_request* FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct regulatory_request *VAR_2;
 u8 VAR_3[2];
 bool VAR_4 = 0;

 FUNC_3();
 VAR_2 = FUNC_1();
 if (VAR_2 && !VAR_2->processed) {
  FUNC_2(VAR_3, VAR_2->alpha2, 2);
  VAR_4 = 1;
 }
 FUNC_4();

 if (VAR_4)
  return FUNC_0(VAR_1, "COUNTRY=%c%c",
          VAR_3[0], VAR_3[1]);
 return 0;
}
