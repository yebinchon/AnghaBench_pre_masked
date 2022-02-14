
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regnode_fixed_sc {TYPE_1__* param; TYPE_2__* gpio_entry; int gpio_open_drain; } ;
struct regnode_fixed_init_def {int * gpio_pin; int gpio_open_drain; int reg_init_def; } ;
struct regnode {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {int always_on; } ;
struct TYPE_3__ {int always_on; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct regnode* FUNC_1 (int ,int *,int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int *) ;
 struct regnode_fixed_sc* FUNC_3 (struct regnode*) ;
 struct regnode* FUNC_4 (struct regnode*) ;

int
FUNC_5(device_t VAR_2, struct regnode_fixed_init_def *VAR_3)
{
 struct regnode *VAR_4;
 struct regnode_fixed_sc *VAR_5;

 VAR_4 = FUNC_1(VAR_2, &VAR_1,
     &VAR_3->reg_init_def);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_2, "Cannot create regulator.\n");
  return(VAR_0);
 }
 VAR_5 = FUNC_3(VAR_4);
 VAR_5->gpio_open_drain = VAR_3->gpio_open_drain;
 if (VAR_3->gpio_pin != ((void*)0)) {
  VAR_5->gpio_entry = FUNC_2(VAR_3->gpio_pin);
  if (VAR_5->gpio_entry == ((void*)0))
   return(VAR_0);
 }
 VAR_4 = FUNC_4(VAR_4);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_2, "Cannot register regulator.\n");
  return(VAR_0);
 }

 if (VAR_5->gpio_entry != ((void*)0))
  VAR_5->gpio_entry->always_on |= VAR_5->param->always_on;

 return (0);
}
