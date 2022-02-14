
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct ciss_softc {int dummy; } ;
struct ciss_request {size_t cr_length; struct ciss_command* cr_cc; int cr_flags; void* cr_data; } ;
struct TYPE_8__ {int cdb_length; int * cdb; scalar_t__ timeout; int direction; int attribute; int type; } ;
struct TYPE_5__ {scalar_t__ target; scalar_t__ bus; int mode; } ;
struct TYPE_6__ {TYPE_1__ physical; } ;
struct TYPE_7__ {TYPE_2__ address; } ;
struct ciss_command {TYPE_4__ cdb; TYPE_3__ header; } ;
struct ciss_bmic_cdb {int bmic_opcode; int size; int opcode; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ciss_bmic_cdb*,int) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_2 (struct ciss_request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (size_t,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct ciss_softc *VAR_12, struct ciss_request **VAR_13,
        int VAR_14, void **VAR_15, size_t VAR_16)
{
    struct ciss_request *VAR_17;
    struct ciss_command *VAR_18;
    struct ciss_bmic_cdb *VAR_19;
    void *VAR_20;
    int VAR_21;
    int VAR_22;

    FUNC_3(2);

    VAR_17 = ((void*)0);
    VAR_20 = ((void*)0);




    if ((VAR_21 = FUNC_1(VAR_12, &VAR_17)) != 0)
 goto out;




    VAR_22 = 0;
    if ((VAR_16 > 0) && (VAR_15 != ((void*)0))) {
 if (*VAR_15 == ((void*)0)) {
     if ((VAR_20 = FUNC_5(VAR_16, VAR_7, VAR_10 | VAR_11)) == ((void*)0)) {
  VAR_21 = VAR_9;
  goto out;
     }
 } else {
     VAR_20 = *VAR_15;
     VAR_22 = 1;
 }
    }




    VAR_17->cr_data = VAR_20;
    VAR_17->cr_length = VAR_16;
    if (!VAR_22)
 VAR_17->cr_flags = VAR_8;

    VAR_18 = VAR_17->cr_cc;
    VAR_18->header.address.physical.mode = VAR_6;
    VAR_18->header.address.physical.bus = 0;
    VAR_18->header.address.physical.target = 0;
    VAR_18->cdb.cdb_length = sizeof(*VAR_19);
    VAR_18->cdb.type = VAR_5;
    VAR_18->cdb.attribute = VAR_2;
    VAR_18->cdb.direction = VAR_22 ? VAR_4 : VAR_3;
    VAR_18->cdb.timeout = 0;

    VAR_19 = (struct ciss_bmic_cdb *)&(VAR_18->cdb.cdb[0]);
    FUNC_0(VAR_19, sizeof(*VAR_19));
    VAR_19->opcode = VAR_22 ? VAR_1 : VAR_0;
    VAR_19->bmic_opcode = VAR_14;
    VAR_19->size = FUNC_4((u_int16_t)VAR_16);

out:
    if (VAR_21) {
 if (VAR_17 != ((void*)0))
     FUNC_2(VAR_17);
    } else {
 *VAR_13 = VAR_17;
 if ((VAR_15 != ((void*)0)) && (*VAR_15 == ((void*)0)) && (VAR_20 != ((void*)0)))
     *VAR_15 = VAR_20;
    }
    return(VAR_21);
}
