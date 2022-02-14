
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct clknode_init_def {char* name; int flags; int parent_cnt; int id; int parent_names; } ;
struct clknode {int flags; char* name; int parent_cnt; int enable_cnt; int sysctl_ctx; int freq; int parent_idx; int * parent; struct clkdom* clkdom; int id; int parent_names; void* parents; void* softc; int children; int lock; } ;
struct clkdom {int clknode_list; } ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef TYPE_1__* clknode_class_t ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,int ,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_4 (int *,int ,int ,char*,int,int ,char*) ;
 int FUNC_5 (int *,int ,int ,char*,int,struct clknode*,int ,int ,char*,char*) ;
 int FUNC_6 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_7 (struct sysctl_oid*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct clknode*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct clknode* FUNC_11 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ,int ) ;
 void* FUNC_13 (int,int ,int) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *) ;

struct clknode *
FUNC_19(struct clkdom * VAR_17, clknode_class_t VAR_18,
    const struct clknode_init_def *VAR_19)
{
 struct clknode *VAR_20;
 struct sysctl_oid *VAR_21;
 bool VAR_22;

 FUNC_2(VAR_19->name != ((void*)0), ("clock name is NULL"));
 FUNC_2(VAR_19->name[0] != '\0', ("clock name is empty"));
 if (VAR_19->flags & VAR_4) {
  FUNC_2(VAR_19->parent_cnt == 0,
   ("Linked clock must not have parents"));
  FUNC_2(VAR_18->size== 0,
   ("Linked clock cannot have own softc"));
 }


 FUNC_0();
 VAR_20 = FUNC_11(VAR_19->name);
 FUNC_1();
  if (VAR_20 != ((void*)0)) {
  if (!(VAR_20->flags & VAR_4) &&
      VAR_19->flags & VAR_4) {





   return (VAR_20);
  } else if (VAR_20->flags & VAR_4 &&
     !(VAR_19->flags & VAR_4)) {
   FUNC_2(VAR_17 != VAR_20->clkdom,
       ("linked clock must be from another "
       "domain that real one"));
   FUNC_10(&VAR_17->clknode_list, VAR_20,
       VAR_13);
   FUNC_10(&VAR_15, VAR_20, VAR_14);
   VAR_22 = 1;
  } else if (VAR_20->flags & VAR_4 &&
     VAR_19->flags & VAR_4) {




   return (VAR_20);
  } else {

   FUNC_14("Duplicated clock registration: %s\n", VAR_19->name);
  }
 } else {

  VAR_20 = FUNC_13(sizeof(struct clknode), VAR_8,
      VAR_9 | VAR_10);
  FUNC_17(&VAR_20->lock, "Clocknode lock");
  FUNC_9(&VAR_20->children);
  VAR_22 = 0;
 }

 FUNC_12((kobj_t)VAR_20, (kobj_class_t)VAR_18);


 if (VAR_18->size > 0) {
  VAR_20->softc = FUNC_13(VAR_18->size,
      VAR_8, VAR_9 | VAR_10);
 }


 VAR_20->parents = FUNC_13(sizeof(struct clknode *) * VAR_19->parent_cnt,
     VAR_8, VAR_9 | VAR_10);


 if (VAR_19->flags & VAR_5) {
  VAR_20->name = VAR_19->name;
  VAR_20->parent_names = VAR_19->parent_names;
 } else {
  VAR_20->name = FUNC_15(VAR_19->name, VAR_8);
  VAR_20->parent_names =
      FUNC_16(VAR_19->parent_names, VAR_19->parent_cnt);
 }


 VAR_20->id = VAR_19->id;
 VAR_20->clkdom = VAR_17;
 VAR_20->flags = VAR_19->flags;
 VAR_20->parent_cnt = VAR_19->parent_cnt;
 VAR_20->parent = ((void*)0);
 VAR_20->parent_idx = VAR_0;

 if (VAR_22)
   return (VAR_20);

 FUNC_18(&VAR_20->sysctl_ctx);
 VAR_21 = FUNC_4(&VAR_20->sysctl_ctx,
     FUNC_8(VAR_12),
     VAR_11, VAR_20->name,
     VAR_6, 0, "A clock node");

 FUNC_6(&VAR_20->sysctl_ctx,
     FUNC_7(VAR_21),
     VAR_11, "frequency",
     VAR_6, &VAR_20->freq, 0, "The clock frequency");
 FUNC_5(&VAR_20->sysctl_ctx,
     FUNC_7(VAR_21),
     VAR_11, "parent",
     VAR_7 | VAR_6,
     VAR_20, VAR_2, VAR_16,
     "A",
     "The clock parent");
 FUNC_5(&VAR_20->sysctl_ctx,
     FUNC_7(VAR_21),
     VAR_11, "parents",
     VAR_7 | VAR_6,
     VAR_20, VAR_3, VAR_16,
     "A",
     "The clock parents list");
 FUNC_5(&VAR_20->sysctl_ctx,
     FUNC_7(VAR_21),
     VAR_11, "childrens",
     VAR_7 | VAR_6,
     VAR_20, VAR_1, VAR_16,
     "A",
     "The clock childrens list");
 FUNC_3(&VAR_20->sysctl_ctx,
     FUNC_7(VAR_21),
     VAR_11, "enable_cnt",
     VAR_6, &VAR_20->enable_cnt, 0, "The clock enable counter");

 return (VAR_20);
}
