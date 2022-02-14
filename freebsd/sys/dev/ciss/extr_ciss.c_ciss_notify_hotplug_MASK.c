
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_softc {TYPE_4__* ciss_cfg; TYPE_3__** ciss_physical; } ;
struct TYPE_5__ {int big_physical_drive_number; } ;
struct TYPE_6__ {TYPE_1__ drive; } ;
struct ciss_notify {int subclass; int detail; TYPE_2__ data; } ;
struct ciss_lun_report {int dummy; } ;
struct TYPE_8__ {int max_physical_supported; } ;
struct TYPE_7__ {int cp_online; } ;


 int FUNC_0 (struct ciss_softc*,int ) ;
 int FUNC_1 (struct ciss_softc*,int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_2 (struct ciss_softc*,struct ciss_lun_report*) ;
 int FUNC_3 (struct ciss_softc*,char*,...) ;
 struct ciss_lun_report* FUNC_4 (struct ciss_softc*,int ,int ) ;
 int FUNC_5 (struct ciss_lun_report*,int ) ;

__attribute__((used)) static void
FUNC_6(struct ciss_softc *VAR_2, struct ciss_notify *VAR_3)
{
    struct ciss_lun_report *VAR_4 = ((void*)0);
    int VAR_5, VAR_6;

    switch (VAR_3->subclass) {
    case 128:
    case 129:
 VAR_5 = FUNC_0(VAR_2, VAR_3->data.drive.big_physical_drive_number);
 VAR_6 =
     FUNC_1(VAR_2, VAR_3->data.drive.big_physical_drive_number);

 if (VAR_3->detail == 0) {




     if ((VAR_5 >= 0) && (VAR_6 >= 0))
  VAR_2->ciss_physical[VAR_5][VAR_6].cp_online = 0;
 } else {



     VAR_4 = FUNC_4(VAR_2, VAR_1,
       VAR_2->ciss_cfg->max_physical_supported);
     if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_2, "Warning, cannot get physical lun list\n");
  break;
     }
     FUNC_2(VAR_2, VAR_4);
 }
 break;

    default:
 FUNC_3(VAR_2, "Unknown hotplug event %d\n", VAR_3->subclass);
 return;
    }

    if (VAR_4 != ((void*)0))
 FUNC_5(VAR_4, VAR_0);
}
