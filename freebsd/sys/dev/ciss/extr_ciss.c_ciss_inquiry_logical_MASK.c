
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_inquiry {int length; int page_code; int byte2; int opcode; } ;
struct ciss_softc {int dummy; } ;
struct ciss_request {int cr_length; int cr_flags; int * cr_data; struct ciss_command* cr_cc; } ;
struct ciss_ldrive {int cl_address; int cl_geometry; } ;
struct TYPE_4__ {int cdb_length; int timeout; int * cdb; int direction; int attribute; int type; } ;
struct TYPE_3__ {int address; } ;
struct ciss_command {TYPE_2__ cdb; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ciss_softc*,char*,...) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_request*,int*,int *) ;
 int FUNC_6 (struct ciss_request*,int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_7, struct ciss_ldrive *VAR_8)
{
    struct ciss_request *VAR_9;
    struct ciss_command *VAR_10;
    struct scsi_inquiry *VAR_11;
    int VAR_12;
    int VAR_13;

    VAR_9 = ((void*)0);

    FUNC_0(&VAR_8->cl_geometry, sizeof(VAR_8->cl_geometry));

    if ((VAR_12 = FUNC_1(VAR_7, &VAR_9)) != 0)
 goto out;

    VAR_10 = VAR_9->cr_cc;
    VAR_9->cr_data = &VAR_8->cl_geometry;
    VAR_9->cr_length = sizeof(VAR_8->cl_geometry);
    VAR_9->cr_flags = VAR_3;

    VAR_10->header.address = VAR_8->cl_address;
    VAR_10->cdb.cdb_length = 6;
    VAR_10->cdb.type = VAR_2;
    VAR_10->cdb.attribute = VAR_0;
    VAR_10->cdb.direction = VAR_1;
    VAR_10->cdb.timeout = 30;

    VAR_11 = (struct scsi_inquiry *)&(VAR_10->cdb.cdb[0]);
    VAR_11->opcode = VAR_5;
    VAR_11->byte2 = VAR_6;
    VAR_11->page_code = VAR_4;
    FUNC_7(sizeof(VAR_8->cl_geometry), VAR_11->length);

    if ((VAR_12 = FUNC_6(VAR_9, 60 * 1000)) != 0) {
 FUNC_3(VAR_7, "error getting geometry (%d)\n", VAR_12);
 goto out;
    }

    FUNC_5(VAR_9, &VAR_13, ((void*)0));
    switch(VAR_13) {
    case 128:
    case 129:
 break;
    case 130:
 FUNC_3(VAR_7, "WARNING: Data overrun\n");
 break;
    default:
 FUNC_3(VAR_7, "Error detecting logical drive geometry (%s)\n",
      FUNC_2(VAR_13));
 break;
    }

out:
    if (VAR_9 != ((void*)0))
 FUNC_4(VAR_9);
    return(VAR_12);
}
