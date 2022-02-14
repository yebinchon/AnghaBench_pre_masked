
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sysctl_oid {int dummy; } ;
struct TYPE_4__ {int always_on; int boot_on; int enable_delay; int ramp_delay; int max_uamp; int min_uamp; int max_uvolt; int min_uvolt; } ;
struct regnode_init_def {char* name; int flags; char* parent_name; int ofw_node; TYPE_1__ std_param; int id; } ;
struct regnode {char* name; char* parent_name; int flags; int sysctl_ctx; TYPE_1__ std_param; int enable_cnt; int ofw_node; int * parent; int pdev; int id; int consumers_list; void* softc; int lock; } ;
typedef TYPE_2__* regnode_class_t ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int device_t ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_4 (int *,int ,int ,char*,int,int ,char*) ;
 int FUNC_5 (int *,int ,int ,char*,int,struct regnode*,int ,int ,char*,char*) ;
 int FUNC_6 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_7 (struct sysctl_oid*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (int ,int ) ;
 void* FUNC_11 (int,int ,int) ;
 int FUNC_12 (char*,char*) ;
 int * FUNC_13 (char*) ;
 int VAR_8 ;
 void* FUNC_14 (char*,int ) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;

struct regnode *
FUNC_17(device_t VAR_9, regnode_class_t VAR_10,
    struct regnode_init_def *VAR_11)
{
 struct regnode *VAR_12;
 struct sysctl_oid *VAR_13;

 FUNC_0(VAR_11->name != ((void*)0), ("regulator name is NULL"));
 FUNC_0(VAR_11->name[0] != '\0', ("regulator name is empty"));

 FUNC_1();
 if (FUNC_13(VAR_11->name) != ((void*)0))
  FUNC_12("Duplicated regulator registration: %s\n", VAR_11->name);
 FUNC_2();


 VAR_12 = FUNC_11(sizeof(struct regnode), VAR_2,
     VAR_3 | VAR_4);
 FUNC_10((kobj_t)VAR_12, (kobj_class_t)VAR_10);
 FUNC_15(&VAR_12->lock, "Regulator node lock");


 if (VAR_10->size > 0) {
  VAR_12->softc = FUNC_11(VAR_10->size, VAR_2,
      VAR_3 | VAR_4);
 }



 if (VAR_11->flags & VAR_6) {
  VAR_12->name = VAR_11->name;
  VAR_12->parent_name = VAR_11->parent_name;
 } else {
  VAR_12->name = FUNC_14(VAR_11->name, VAR_2);
  if (VAR_11->parent_name != ((void*)0))
   VAR_12->parent_name = FUNC_14(VAR_11->parent_name,
       VAR_2);
 }


 FUNC_9(&VAR_12->consumers_list);
 VAR_12->id = VAR_11->id;
 VAR_12->pdev = VAR_9;
 VAR_12->flags = VAR_11->flags;
 VAR_12->parent = ((void*)0);
 VAR_12->std_param = VAR_11->std_param;




 FUNC_16(&VAR_12->sysctl_ctx);
 VAR_13 = FUNC_4(&VAR_12->sysctl_ctx,
     FUNC_8(VAR_7),
     VAR_5, VAR_12->name,
     VAR_0, 0, "A regulator node");

 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "min_uvolt",
     VAR_0, &VAR_12->std_param.min_uvolt, 0,
     "Minimal voltage (in uV)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "max_uvolt",
     VAR_0, &VAR_12->std_param.max_uvolt, 0,
     "Maximal voltage (in uV)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "min_uamp",
     VAR_0, &VAR_12->std_param.min_uamp, 0,
     "Minimal amperage (in uA)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "max_uamp",
     VAR_0, &VAR_12->std_param.max_uamp, 0,
     "Maximal amperage (in uA)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "ramp_delay",
     VAR_0, &VAR_12->std_param.ramp_delay, 0,
     "Ramp delay (in uV/us)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "enable_delay",
     VAR_0, &VAR_12->std_param.enable_delay, 0,
     "Enable delay (in us)");
 FUNC_3(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "enable_cnt",
     VAR_0, &VAR_12->enable_cnt, 0,
     "The regulator enable counter");
 FUNC_6(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "boot_on",
     VAR_0, (uint8_t *) &VAR_12->std_param.boot_on, 0,
     "Is enabled on boot");
 FUNC_6(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "always_on",
     VAR_0, (uint8_t *)&VAR_12->std_param.always_on, 0,
     "Is always enabled");

 FUNC_5(&VAR_12->sysctl_ctx,
     FUNC_7(VAR_13),
     VAR_5, "uvolt",
     VAR_1 | VAR_0,
     VAR_12, 0, VAR_8,
     "I",
     "Current voltage (in uV)");

 return (VAR_12);
}
