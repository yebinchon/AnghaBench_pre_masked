
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ciss_device_address {int dummy; } ciss_device_address ;
struct ciss_softc {int ciss_max_logical_bus; int * ciss_controllers; struct ciss_ldrive** ciss_logical; TYPE_1__* ciss_cfg; } ;
struct ciss_lun_report {TYPE_3__* lun; int list_size; } ;
struct TYPE_5__ {int lun; } ;
struct TYPE_6__ {TYPE_2__ logical; } ;
struct ciss_ldrive {scalar_t__ cl_update; scalar_t__ cl_status; int * cl_controller; TYPE_3__ cl_address; struct ciss_lun_report* cl_lstatus; struct ciss_lun_report* cl_ldrive; } ;
struct TYPE_4__ {int max_logical_supported; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ciss_softc*,int,int) ;
 scalar_t__ FUNC_3 (struct ciss_softc*,struct ciss_ldrive*) ;
 struct ciss_lun_report* FUNC_4 (struct ciss_softc*,int ,int) ;
 int FUNC_5 (struct ciss_lun_report*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ciss_softc *VAR_3)
{
    struct ciss_lun_report *VAR_4;
    struct ciss_ldrive *VAR_5;
    int VAR_6, VAR_7, VAR_8;





    VAR_4 = FUNC_4(VAR_3, VAR_2,
                           VAR_3->ciss_cfg->max_logical_supported);
    if (VAR_4 == ((void*)0))
        return;

    VAR_8 = (FUNC_6(VAR_4->list_size) / sizeof(union ciss_device_address));





    for (VAR_6 = 0; VAR_6 < VAR_3->ciss_max_logical_bus; VAR_6++) {
 for (VAR_7 = 0; VAR_7 < VAR_3->ciss_cfg->max_logical_supported; VAR_7++) {
     VAR_5 = &VAR_3->ciss_logical[VAR_6][VAR_7];

     if (VAR_5->cl_update == 0)
  continue;

     if (VAR_5->cl_status != VAR_0) {
  FUNC_2(VAR_3, VAR_6, VAR_7);
  VAR_5->cl_update = 0;
  if (VAR_5->cl_ldrive)
      FUNC_5(VAR_5->cl_ldrive, VAR_1);
  if (VAR_5->cl_lstatus)
      FUNC_5(VAR_5->cl_lstatus, VAR_1);

  VAR_5->cl_ldrive = ((void*)0);
  VAR_5->cl_lstatus = ((void*)0);
     }
 }
    }




    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_4->lun[VAR_6].logical.lun);
 VAR_10 = FUNC_1(VAR_4->lun[VAR_6].logical.lun);
 VAR_5 = &VAR_3->ciss_logical[VAR_9][VAR_10];

 if (VAR_5->cl_update == 0)
  continue;

 VAR_5->cl_update = 0;
 VAR_5->cl_address = VAR_4->lun[VAR_6];
 VAR_5->cl_controller = &VAR_3->ciss_controllers[VAR_9];
 if (FUNC_3(VAR_3, VAR_5) == 0) {
     FUNC_2(VAR_3, VAR_9, VAR_10);
 }
    }
    FUNC_5(VAR_4, VAR_1);
}
