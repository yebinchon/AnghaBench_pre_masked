
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int8_t ;
struct ciss_softc {int ciss_flags; TYPE_2__** ciss_logical; TYPE_1__** ciss_physical; } ;
struct TYPE_8__ {int target_id; int flags; int status; int path; } ;
struct TYPE_7__ {scalar_t__* cdb_bytes; scalar_t__ cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; int* data_ptr; TYPE_4__ ccb_h; TYPE_3__ cdb_io; } ;
struct TYPE_6__ {scalar_t__ cl_status; } ;
struct TYPE_5__ {int cp_online; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ciss_softc*) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ciss_softc *VAR_7, struct ccb_scsiio *VAR_8)
{
    int VAR_9, VAR_10;
    u_int8_t VAR_11;

    VAR_10 = VAR_8->ccb_h.target_id;
    VAR_9 = FUNC_2(FUNC_5(VAR_8->ccb_h.path));
    VAR_11 = (VAR_8->ccb_h.flags & VAR_0) ?
 *(u_int8_t *)VAR_8->cdb_io.cdb_ptr : VAR_8->cdb_io.cdb_bytes[0];

    if (FUNC_1(VAR_9)) {
 if (VAR_7->ciss_physical[FUNC_0(VAR_9)][VAR_10].cp_online != 1) {
     VAR_8->ccb_h.status |= VAR_2;
     FUNC_4((union ccb *)VAR_8);
     return(1);
 } else
     return(0);
    }






    if (VAR_7->ciss_logical[VAR_9][VAR_10].cl_status != VAR_4) {
 VAR_8->ccb_h.status |= VAR_2;
 FUNC_4((union ccb *)VAR_8);
 return(1);
    }


    if (VAR_7->ciss_flags & VAR_3) {




 if (((VAR_8->ccb_h.flags & VAR_0) ?
      *(u_int8_t *)VAR_8->cdb_io.cdb_ptr : VAR_8->cdb_io.cdb_bytes[0]) == VAR_6) {
     FUNC_3(VAR_7);
     VAR_8->ccb_h.status |= VAR_1;
     FUNC_4((union ccb *)VAR_8);
     return(1);
 }
    }







    if (VAR_11 == VAR_5 && VAR_8->dxfer_len > 0) {
       VAR_8->data_ptr[3] = 8;
       VAR_8->ccb_h.status |= VAR_1;
       FUNC_4((union ccb *)VAR_8);
       return(1);
    }

    return(0);
}
