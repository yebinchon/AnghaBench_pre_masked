
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_softc {int dummy; } ;
struct ciss_request {struct ciss_softc* cr_sc; struct ciss_command* cr_cc; } ;
struct TYPE_5__ {int lun; } ;
struct TYPE_6__ {TYPE_1__ logical; } ;
struct ciss_ldrive {int * cl_controller; TYPE_2__ cl_address; } ;
struct TYPE_8__ {int * cdb; } ;
struct TYPE_7__ {int address; } ;
struct ciss_command {TYPE_4__ cdb; TYPE_3__ header; } ;
struct ciss_bmic_cdb {int log_drive; } ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**,int ,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ciss_softc*,char*,int) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_request*,int*,int *) ;
 int FUNC_6 (struct ciss_request*,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_1, struct ciss_ldrive *VAR_2)
{
    struct ciss_request *VAR_3;
    struct ciss_command *VAR_4;
    struct ciss_bmic_cdb *VAR_5;
    int VAR_6;
    int VAR_7 = 0, VAR_8;

    VAR_8 = FUNC_0(VAR_2->cl_address.logical.lun);

    FUNC_7(0, "bringing logical drive %d back online", VAR_8);




    if ((VAR_7 = FUNC_1(VAR_1, &VAR_3, VAR_0,
           ((void*)0), 0)) != 0)
 goto out;
    VAR_4 = VAR_3->cr_cc;
    VAR_4->header.address = *VAR_2->cl_controller;
    VAR_5 = (struct ciss_bmic_cdb *)&(VAR_4->cdb.cdb[0]);
    VAR_5->log_drive = VAR_8;




    if ((VAR_7 = FUNC_6(VAR_3, 60 * 1000)) != 0) {
 FUNC_3(VAR_1, "error sending BMIC ACCEPT MEDIA command (%d)\n", VAR_7);
 goto out;
    }




    FUNC_5(VAR_3, &VAR_6, ((void*)0));
    switch(VAR_6) {
    case 128:

 break;
    default:
 FUNC_3(VAR_3->cr_sc, "error accepting media into failed logical drive (%s)\n",
      FUNC_2(VAR_6));
 break;
    }

out:
    if (VAR_3 != ((void*)0))
 FUNC_4(VAR_3);
    return(VAR_7);
}
