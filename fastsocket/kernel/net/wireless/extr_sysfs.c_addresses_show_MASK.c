
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int n_addresses; TYPE_1__* addresses; int * perm_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct wiphy wiphy; } ;
struct TYPE_3__ {int addr; } ;


 TYPE_2__* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct wiphy *VAR_3 = &FUNC_0(VAR_0)->wiphy;
 char *VAR_4 = VAR_2;
 int VAR_5;

 if (!VAR_3->addresses)
  return FUNC_1(VAR_2, "%pM\n", VAR_3->perm_addr);

 for (VAR_5 = 0; VAR_5 < VAR_3->n_addresses; VAR_5++)
  VAR_2 += FUNC_1(VAR_2, "%pM\n", &VAR_3->addresses[VAR_5].addr);

 return VAR_2 - VAR_4;
}
