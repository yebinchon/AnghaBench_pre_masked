
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ciss_device_address {int dummy; } ciss_device_address ;
struct ciss_softc {TYPE_5__* ciss_cfg; } ;
struct ciss_request {int cr_length; int cr_flags; struct ciss_lun_report* cr_data; struct ciss_command* cr_cc; } ;
struct ciss_report_cdb {int opcode; void* length; } ;
struct ciss_lun_report {void* list_size; } ;
struct TYPE_9__ {int cdb_length; int timeout; int * cdb; int direction; int attribute; int type; } ;
struct TYPE_6__ {scalar_t__ target; scalar_t__ bus; int mode; } ;
struct TYPE_7__ {TYPE_1__ physical; } ;
struct TYPE_8__ {TYPE_2__ address; } ;
struct ciss_command {TYPE_4__ cdb; TYPE_3__ header; } ;
struct TYPE_10__ {int max_logical_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ciss_report_cdb*,int) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ciss_softc*,char*,...) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_request*,int*,int *) ;
 int FUNC_6 (struct ciss_request*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ciss_lun_report*,int ) ;
 void* FUNC_9 (int) ;
 struct ciss_lun_report* FUNC_10 (int,int ,int) ;

__attribute__((used)) static struct ciss_lun_report *
FUNC_11(struct ciss_softc *VAR_10, int VAR_11, int VAR_12)
{
    struct ciss_request *VAR_13;
    struct ciss_command *VAR_14;
    struct ciss_report_cdb *VAR_15;
    struct ciss_lun_report *VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19 = 0;

    FUNC_7(1);

    VAR_13 = ((void*)0);
    VAR_16 = ((void*)0);




    if ((VAR_19 = FUNC_1(VAR_10, &VAR_13)) != 0)
 goto out;
    VAR_18 = sizeof(*VAR_16) + VAR_12 * sizeof(union ciss_device_address);
    if ((VAR_16 = FUNC_10(VAR_18, VAR_4, VAR_8 | VAR_9)) == ((void*)0)) {
 FUNC_3(VAR_10, "can't allocate memory for lun report\n");
 VAR_19 = VAR_7;
 goto out;
    }




    VAR_14 = VAR_13->cr_cc;
    VAR_13->cr_data = VAR_16;
    VAR_13->cr_length = VAR_18;
    VAR_13->cr_flags = VAR_5;

    VAR_14->header.address.physical.mode = VAR_3;
    VAR_14->header.address.physical.bus = 0;
    VAR_14->header.address.physical.target = 0;
    VAR_14->cdb.cdb_length = sizeof(*VAR_15);
    VAR_14->cdb.type = VAR_2;
    VAR_14->cdb.attribute = VAR_0;
    VAR_14->cdb.direction = VAR_1;
    VAR_14->cdb.timeout = 30;

    VAR_15 = (struct ciss_report_cdb *)&(VAR_14->cdb.cdb[0]);
    FUNC_0(VAR_15, sizeof(*VAR_15));
    VAR_15->opcode = VAR_11;
    VAR_15->length = FUNC_9(VAR_18);
    VAR_16->list_size = FUNC_9(VAR_18 - sizeof(*VAR_16));





    if ((VAR_19 = FUNC_6(VAR_13, 60 * 1000)) != 0) {
 FUNC_3(VAR_10, "error sending %d LUN command (%d)\n", VAR_11, VAR_19);
 goto out;
    }




    FUNC_5(VAR_13, &VAR_17, ((void*)0));
    switch(VAR_17) {
    case 128:
    case 129:
 break;
    case 130:
 FUNC_3(VAR_10, "WARNING: more units than driver limit (%d)\n",
      VAR_10->ciss_cfg->max_logical_supported);
 break;
    default:
 FUNC_3(VAR_10, "error detecting logical drive configuration (%s)\n",
      FUNC_2(VAR_17));
 VAR_19 = VAR_6;
 goto out;
    }
    FUNC_4(VAR_13);
    VAR_13 = ((void*)0);

out:
    if (VAR_13 != ((void*)0))
 FUNC_4(VAR_13);
    if (VAR_19 && VAR_16 != ((void*)0)) {
 FUNC_8(VAR_16, VAR_4);
 VAR_16 = ((void*)0);
    }
    return(VAR_16);
}
