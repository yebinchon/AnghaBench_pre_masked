
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ciss_softc {int dummy; } ;
struct ciss_request {struct ciss_command* cr_cc; } ;
struct TYPE_8__ {int lun; } ;
struct TYPE_9__ {TYPE_3__ logical; } ;
struct ciss_ldrive {TYPE_5__* cl_lstatus; int cl_status; TYPE_4__ cl_address; int * cl_controller; } ;
struct TYPE_7__ {int * cdb; } ;
struct TYPE_6__ {int address; } ;
struct ciss_command {TYPE_2__ cdb; TYPE_1__ header; } ;
struct ciss_bmic_cdb {int log_drive; } ;
struct TYPE_10__ {int status; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ciss_softc*,struct ciss_request**,int ,void**,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ciss_softc*,char*,...) ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (struct ciss_request*,int*,int *) ;
 int FUNC_7 (struct ciss_request*,int) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_2, struct ciss_ldrive *VAR_3)
{
    struct ciss_request *VAR_4;
    struct ciss_command *VAR_5;
    struct ciss_bmic_cdb *VAR_6;
    int VAR_7, VAR_8;




    if ((VAR_7 = FUNC_2(VAR_2, &VAR_4, VAR_0,
           (void **)&VAR_3->cl_lstatus,
           sizeof(*VAR_3->cl_lstatus))) != 0)
 goto out;
    VAR_5 = VAR_4->cr_cc;
    VAR_5->header.address = *VAR_3->cl_controller;
    VAR_6 = (struct ciss_bmic_cdb *)&(VAR_5->cdb.cdb[0]);
    VAR_6->log_drive = FUNC_0(VAR_3->cl_address.logical.lun);




    if ((VAR_7 = FUNC_7(VAR_4, 60 * 1000)) != 0) {
 FUNC_4(VAR_2, "error sending BMIC LSTATUS command (%d)\n", VAR_7);
 goto out;
    }




    FUNC_6(VAR_4, &VAR_8, ((void*)0));
    switch(VAR_8) {
    case 128:
 break;
    case 129:
    case 130:
 FUNC_4(VAR_2, "data over/underrun reading logical drive status\n");
    default:
 FUNC_4(VAR_2, "error reading logical drive status (%s)\n",
      FUNC_3(VAR_8));
 VAR_7 = VAR_1;
 goto out;
    }







    VAR_3->cl_status = FUNC_1(VAR_3->cl_lstatus->status);

out:
    if (VAR_4 != ((void*)0))
 FUNC_5(VAR_4);
    return(VAR_7);
}
