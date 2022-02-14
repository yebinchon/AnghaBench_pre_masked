
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ciss_device_address {int dummy; } ciss_device_address ;
typedef scalar_t__ u_int32_t ;
struct ciss_softc {TYPE_3__** ciss_physical; } ;
struct ciss_lun_report {TYPE_2__* lun; int list_size; } ;
struct TYPE_4__ {scalar_t__ extra_address; scalar_t__ mode; } ;
struct TYPE_5__ {TYPE_1__ physical; } ;
struct TYPE_6__ {int cp_online; TYPE_2__ cp_address; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ciss_softc *VAR_2, struct ciss_lun_report *VAR_3)
{
    u_int32_t VAR_4;
    int VAR_5, VAR_6;
    int VAR_7, VAR_8;

    VAR_6 = (FUNC_5(VAR_3->list_size) / sizeof(union ciss_device_address));
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
 if (VAR_3->lun[VAR_5].physical.extra_address == 0)
     continue;
 VAR_4 = VAR_3->lun[VAR_5].physical.extra_address;
 if ((FUNC_1(VAR_4) != 0) || (FUNC_4(VAR_4) != 0) ||
     (FUNC_2(VAR_4) == 0x3))
     continue;
 if ((VAR_1 == 0) &&
    (VAR_3->lun[VAR_5].physical.mode == VAR_0))
     continue;






 VAR_7 = FUNC_0(VAR_4) - 1;
 VAR_8 = FUNC_3(VAR_4);
 VAR_2->ciss_physical[VAR_7][VAR_8].cp_address = VAR_3->lun[VAR_5];
 VAR_2->ciss_physical[VAR_7][VAR_8].cp_online = 1;
    }

    return (0);
}
