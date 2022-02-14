
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {TYPE_1__* node; } ;
struct soundbus_dev {int modalias; struct of_device ofdev; } ;
struct kobj_uevent_env {int buflen; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int name; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int,...) ;
 char* FUNC_1 (TYPE_1__*,char*,int*) ;
 struct soundbus_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct soundbus_dev * VAR_3;
 struct of_device * VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;
 int VAR_7, VAR_8 = 0;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = &VAR_3->ofdev;


 VAR_6 = FUNC_0(VAR_2, "OF_NAME=%s", VAR_4->node->name);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, "OF_TYPE=%s", VAR_4->node->type);
 if (VAR_6)
  return VAR_6;





 VAR_5 = FUNC_1(VAR_4->node, "compatible", &VAR_7);
 while (VAR_5 && VAR_7 > 0) {
  int VAR_9 = VAR_2->buflen;
  VAR_6 = FUNC_0(VAR_2, "OF_COMPATIBLE_%d=%s", VAR_8, VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_5 += VAR_2->buflen - VAR_9;
  VAR_7 -= VAR_2->buflen - VAR_9;
  VAR_8 += 1;
 }

 VAR_6 = FUNC_0(VAR_2, "OF_COMPATIBLE_N=%d", VAR_8);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_2, "MODALIAS=%s", VAR_3->modalias);

 return VAR_6;
}
