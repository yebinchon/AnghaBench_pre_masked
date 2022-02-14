
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device {TYPE_1__* node; } ;
struct soundbus_dev {scalar_t__* modalias; struct of_device ofdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; char* type; } ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,scalar_t__*,int) ;
 int FUNC_3 (char*) ;
 struct soundbus_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct soundbus_dev *VAR_3 = FUNC_4(VAR_0);
 struct of_device *VAR_4 = &VAR_3->ofdev;
 int VAR_5;

 if (*VAR_3->modalias) {
  FUNC_2(VAR_2, VAR_3->modalias, sizeof(VAR_3->modalias) + 1);
  FUNC_1(VAR_2, "\n");
  VAR_5 = FUNC_3(VAR_2);
 } else {
  VAR_5 = FUNC_0(VAR_2, "of:N%sT%s\n",
     VAR_4->node->name, VAR_4->node->type);
 }

 return VAR_5;
}
