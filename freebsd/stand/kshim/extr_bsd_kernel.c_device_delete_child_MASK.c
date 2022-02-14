
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_10__ {int dev_children; int dev_module; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int
FUNC_6(device_t VAR_2, device_t VAR_3)
{
 int VAR_4 = 0;
 device_t VAR_5;


 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto done;


 while ((VAR_5 = FUNC_0(&VAR_3->dev_children))) {
  VAR_4 = FUNC_6(VAR_3, VAR_5);
  if (VAR_4) {
   FUNC_4(VAR_2, "Error deleting child!\n");
   goto done;
  }
 }

 FUNC_2(VAR_3->dev_module, VAR_3);

 if (VAR_2 != ((void*)0)) {

  FUNC_1(&VAR_2->dev_children, VAR_3, VAR_1);
 }
 FUNC_5(VAR_3, VAR_0);

done:
 return (VAR_4);
}
