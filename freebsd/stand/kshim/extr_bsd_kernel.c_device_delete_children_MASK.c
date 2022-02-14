
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_7__ {int dev_children; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

int
FUNC_3(device_t VAR_0)
{
 device_t VAR_1;
 int VAR_2 = 0;

 while ((VAR_1 = FUNC_0(&VAR_0->dev_children))) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_2(VAR_0, "Error deleting child!\n");
   break;
  }
 }
 return (VAR_2);
}
