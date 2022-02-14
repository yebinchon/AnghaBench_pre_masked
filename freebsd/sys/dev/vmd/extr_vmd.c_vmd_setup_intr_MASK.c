
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_softc {TYPE_1__* vmd_irq; } ;
struct vmd_irq_handler {void* vmd_arg; int vmd_rid; int * vmd_intr; int vmd_child; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {int vmd_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct vmd_irq_handler*,int ) ;
 int FUNC_1 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;
 struct vmd_softc* FUNC_2 (int ) ;
 struct vmd_irq_handler* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct resource*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, device_t VAR_5, struct resource *VAR_6,
    int VAR_7, driver_filter_t *VAR_8, driver_intr_t *VAR_9, void *VAR_10,
    void **VAR_11)
{
 struct vmd_irq_handler *VAR_12;
 struct vmd_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(VAR_4);






 VAR_14 = 0;
 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_0, VAR_1|VAR_2);
 VAR_12->vmd_child = VAR_5;
 VAR_12->vmd_intr = VAR_9;
 VAR_12->vmd_rid = FUNC_4(VAR_6);
 VAR_12->vmd_arg = VAR_10;
 FUNC_0(&VAR_13->vmd_irq[VAR_14].vmd_list, VAR_12, VAR_3);

 return (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11));
}
