
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_module_data {int (* dmd_chainevh ) (int ,int,int ) ;int dmd_pass; int dmd_chainarg; int dmd_driver; int dmd_busname; int dmd_devclass; } ;
typedef int module_t ;
typedef int kobj_class_t ;
typedef int devclass_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int,int ) ;

int
FUNC_9(module_t VAR_2, int VAR_3, void *VAR_4)
{
 struct driver_module_data *VAR_5;
 devclass_t VAR_6;
 kobj_class_t VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = (struct driver_module_data *)VAR_4;
 VAR_6 = FUNC_4(VAR_5->dmd_busname, ((void*)0), VAR_1);
 VAR_8 = 0;

 switch (VAR_3) {
 case 130:
  if (VAR_5->dmd_chainevh)
   VAR_8 = VAR_5->dmd_chainevh(VAR_2,VAR_3,VAR_5->dmd_chainarg);

  VAR_9 = VAR_5->dmd_pass;
  VAR_7 = VAR_5->dmd_driver;
  FUNC_1(("Loading module: driver %s on bus %s (pass %d)",
      FUNC_0(VAR_7), VAR_5->dmd_busname, VAR_9));
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_9,
      VAR_5->dmd_devclass);
  break;

 case 128:
  FUNC_1(("Unloading module: driver %s from bus %s",
      FUNC_0(VAR_5->dmd_driver),
      VAR_5->dmd_busname));
  VAR_8 = FUNC_3(VAR_6,
      VAR_5->dmd_driver);

  if (!VAR_8 && VAR_5->dmd_chainevh)
   VAR_8 = VAR_5->dmd_chainevh(VAR_2,VAR_3,VAR_5->dmd_chainarg);
  break;
 case 129:
  FUNC_1(("Quiesce module: driver %s from bus %s",
      FUNC_0(VAR_5->dmd_driver),
      VAR_5->dmd_busname));
  VAR_8 = FUNC_5(VAR_6,
      VAR_5->dmd_driver);

  if (!VAR_8 && VAR_5->dmd_chainevh)
   VAR_8 = VAR_5->dmd_chainevh(VAR_2,VAR_3,VAR_5->dmd_chainarg);
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
