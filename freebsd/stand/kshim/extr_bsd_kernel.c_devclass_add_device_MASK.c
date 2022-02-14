
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct module_data {TYPE_1__** devclass_pp; } ;
typedef TYPE_2__* device_t ;
struct TYPE_6__ {int dev_unit; int dev_nameunit; struct module_data const* dev_module; } ;
struct TYPE_5__ {TYPE_2__** dev_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,char*,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_3(const struct module_data *VAR_1, device_t VAR_2)
{
 device_t *VAR_3;
 device_t *VAR_4;
 uint8_t VAR_5;

 VAR_3 = VAR_1->devclass_pp[0]->dev_list;
 VAR_4 = VAR_3 + VAR_0;
 VAR_5 = 0;

 while (VAR_3 != VAR_4) {
  if (*VAR_3 == ((void*)0)) {
   *VAR_3 = VAR_2;
   VAR_2->dev_unit = VAR_5;
   VAR_2->dev_module = VAR_1;
   FUNC_2(VAR_2->dev_nameunit,
       sizeof(VAR_2->dev_nameunit),
       "%s%d", FUNC_1(VAR_2), VAR_5);
   return (0);
  }
  VAR_3++;
  VAR_5++;
 }
 FUNC_0("Could not add device to devclass.\n");
 return (1);
}
