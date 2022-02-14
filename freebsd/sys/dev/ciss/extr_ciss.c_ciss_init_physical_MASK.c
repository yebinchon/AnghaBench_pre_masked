
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ciss_device_address {int dummy; } ciss_device_address ;
struct ciss_softc {int ciss_max_logical_bus; int ciss_max_physical_bus; int ** ciss_physical; TYPE_3__* ciss_controllers; TYPE_1__* ciss_cfg; } ;
struct ciss_pdrive {int dummy; } ;
struct ciss_lun_report {TYPE_3__* lun; int list_size; } ;
struct TYPE_5__ {scalar_t__ extra_address; int bus; } ;
struct TYPE_6__ {TYPE_2__ physical; } ;
struct TYPE_4__ {int max_physical_supported; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ciss_softc*,struct ciss_lun_report*) ;
 int FUNC_2 (struct ciss_softc*,char*,...) ;
 struct ciss_lun_report* FUNC_3 (struct ciss_softc*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ciss_lun_report*,int ) ;
 void* FUNC_6 (int,int ,int) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ciss_softc *VAR_8)
{
    struct ciss_lun_report *VAR_9;
    int VAR_10 = 0, VAR_11;
    int VAR_12;
    int VAR_13, VAR_14;

    FUNC_4(1);

    VAR_13 = 0;
    VAR_14 = 0;

    VAR_9 = FUNC_3(VAR_8, VAR_2,
      VAR_8->ciss_cfg->max_physical_supported);
    if (VAR_9 == ((void*)0)) {
 VAR_10 = VAR_4;
 goto out;
    }

    VAR_12 = (FUNC_8(VAR_9->list_size) / sizeof(union ciss_device_address));

    if (VAR_7) {
 FUNC_2(VAR_8, "%d physical device%s\n",
     VAR_12, (VAR_12 > 1 || VAR_12 == 0) ? "s" : "");
    }
    VAR_8->ciss_max_logical_bus = 1;
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
 if (VAR_9->lun[VAR_11].physical.extra_address == 0) {
     VAR_13 = VAR_9->lun[VAR_11].physical.bus;
     VAR_8->ciss_max_logical_bus = FUNC_7(VAR_8->ciss_max_logical_bus, VAR_13) + 1;
 } else {
     VAR_13 = FUNC_0(VAR_9->lun[VAR_11].physical.extra_address);
     VAR_8->ciss_max_physical_bus = FUNC_7(VAR_8->ciss_max_physical_bus, VAR_13);
 }
    }

    VAR_8->ciss_controllers =
 FUNC_6(VAR_8->ciss_max_logical_bus * sizeof (union ciss_device_address),
        VAR_0, VAR_5 | VAR_6);

    if (VAR_8->ciss_controllers == ((void*)0)) {
 FUNC_2(VAR_8, "Could not allocate memory for controller map\n");
 VAR_10 = VAR_3;
 goto out;
    }


    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
 if (VAR_9->lun[VAR_11].physical.extra_address == 0) {
     VAR_8->ciss_controllers[VAR_9->lun[VAR_11].physical.bus] = VAR_9->lun[VAR_11];
 }
    }

    VAR_8->ciss_physical =
 FUNC_6(VAR_8->ciss_max_physical_bus * sizeof(struct ciss_pdrive *),
        VAR_0, VAR_5 | VAR_6);
    if (VAR_8->ciss_physical == ((void*)0)) {
 FUNC_2(VAR_8, "Could not allocate memory for physical device map\n");
 VAR_10 = VAR_3;
 goto out;
    }

    for (VAR_11 = 0; VAR_11 < VAR_8->ciss_max_physical_bus; VAR_11++) {
 VAR_8->ciss_physical[VAR_11] =
     FUNC_6(sizeof(struct ciss_pdrive) * VAR_1,
     VAR_0, VAR_5 | VAR_6);
 if (VAR_8->ciss_physical[VAR_11] == ((void*)0)) {
     FUNC_2(VAR_8, "Could not allocate memory for target map\n");
     VAR_10 = VAR_3;
     goto out;
 }
    }

    FUNC_1(VAR_8, VAR_9);

out:
    if (VAR_9 != ((void*)0))
 FUNC_5(VAR_9, VAR_0);

    return(VAR_10);
}
