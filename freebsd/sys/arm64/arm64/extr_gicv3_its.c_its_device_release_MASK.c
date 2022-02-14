
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lpi_busy; int lpi_num; int lpi_base; } ;
struct its_dev {scalar_t__ itt; TYPE_1__ lpis; int itt_size; } ;
struct gicv3_its_softc {int sc_irq_alloc; int sc_its_dev_lock; int sc_its_dev_list; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct its_dev*,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 struct gicv3_its_softc* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct its_dev*,int ) ;
 int FUNC_5 (int ,struct its_dev*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_2, struct its_dev *VAR_3)
{
 struct gicv3_its_softc *VAR_4;

 FUNC_0(VAR_3->lpis.lpi_busy == 0,
     ("its_device_release: Trying to release an inuse ITS device"));


 FUNC_5(VAR_2, VAR_3, 0);

 VAR_4 = FUNC_3(VAR_2);


 FUNC_6(&VAR_4->sc_its_dev_lock);
 FUNC_1(&VAR_4->sc_its_dev_list, VAR_3, VAR_1);
 FUNC_7(&VAR_4->sc_its_dev_lock);


 FUNC_0(VAR_3->itt != 0, ("Invalid ITT in valid ITS device"));
 FUNC_2((void *)VAR_3->itt, VAR_3->itt_size, VAR_0);


 FUNC_8(VAR_4->sc_irq_alloc, VAR_3->lpis.lpi_base,
     VAR_3->lpis.lpi_num);

 FUNC_4(VAR_3, VAR_0);
}
