
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct phynode_init_def {int ofw_node; int id; } ;
struct phynode {int ofw_node; int pdev; int id; int consumers_list; void* softc; int lock; } ;
typedef TYPE_1__* phynode_class_t ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int device_t ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*) ;

struct phynode *
FUNC_4(device_t VAR_3, phynode_class_t VAR_4,
    struct phynode_init_def *VAR_5)
{
 struct phynode *VAR_6;



 VAR_6 = FUNC_2(sizeof(struct phynode), VAR_0, VAR_1 | VAR_2);
 FUNC_1((kobj_t)VAR_6, (kobj_class_t)VAR_4);
 FUNC_3(&VAR_6->lock, "Phy node lock");


 if (VAR_4->size > 0) {
  VAR_6->softc = FUNC_2(VAR_4->size, VAR_0,
      VAR_1 | VAR_2);
 }


 FUNC_0(&VAR_6->consumers_list);
 VAR_6->id = VAR_5->id;
 VAR_6->pdev = VAR_3;




 return (VAR_6);
}
