
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ciss_softc {int ciss_mtx; } ;
struct ciss_request {int * cr_data; int cr_length; struct ciss_command* cr_cc; } ;
struct ciss_error_info {int dummy; } ;
struct TYPE_4__ {int host_tag; int address; } ;
struct ciss_command {TYPE_1__ header; int * sg; int cdb; } ;
struct TYPE_5__ {int buf_size; int buf; int error_info; struct ciss_error_info Request; struct ciss_error_info LUN_info; } ;
typedef TYPE_2__ IOCTL_Command_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ciss_error_info*,int *,int) ;
 int FUNC_1 (struct ciss_error_info*,int) ;
 scalar_t__ FUNC_2 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*,int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_5 ;
 int * FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct ciss_softc*,int *,int ,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct ciss_softc *VAR_6, IOCTL_Command_struct *VAR_7)
{
    struct ciss_request *VAR_8;
    struct ciss_command *VAR_9;
    struct ciss_error_info *VAR_10;
    int VAR_11 = 0;

    FUNC_8(1);

    VAR_8 = ((void*)0);




    while (FUNC_2(VAR_6, &VAR_8) != 0)
 FUNC_11(VAR_6, &VAR_6->ciss_mtx, VAR_4, "cissREQ", VAR_5);
    VAR_9 = VAR_8->cr_cc;




    FUNC_13(&VAR_6->ciss_mtx);
    VAR_8->cr_length = VAR_7->buf_size;
    if (VAR_7->buf_size > 0) {
 if ((VAR_8->cr_data = FUNC_10(VAR_7->buf_size, VAR_1, VAR_3)) == ((void*)0)) {
     VAR_11 = VAR_2;
     goto out_unlocked;
 }
 if ((VAR_11 = FUNC_5(VAR_7->buf, VAR_8->cr_data, VAR_7->buf_size))) {
     FUNC_7(0, "copyin: bad data buffer %p/%d", VAR_7->buf, VAR_7->buf_size);
     goto out_unlocked;
 }
    }




    FUNC_0(&VAR_7->LUN_info, &VAR_9->header.address, sizeof(VAR_9->header.address));
    FUNC_0(&VAR_7->Request, &VAR_9->cdb, sizeof(VAR_9->cdb));


    FUNC_12(&VAR_6->ciss_mtx);




    if ((VAR_11 = FUNC_4(VAR_8, 60 * 1000))) {
 FUNC_7(0, "request failed - %d", VAR_11);
 goto out;
    }




    VAR_10 = (struct ciss_error_info *)&(VAR_9->sg[0]);
    if ((VAR_9->header.host_tag & VAR_0) == 0)
 FUNC_1(VAR_10, sizeof(*VAR_10));




    FUNC_0(VAR_10, &VAR_7->error_info, sizeof(*VAR_10));
    FUNC_13(&VAR_6->ciss_mtx);
    if ((VAR_7->buf_size > 0) &&
 (VAR_11 = FUNC_6(VAR_8->cr_data, VAR_7->buf, VAR_7->buf_size))) {
 FUNC_7(0, "copyout: bad data buffer %p/%d", VAR_7->buf, VAR_7->buf_size);
 goto out_unlocked;
    }


    VAR_11 = 0;

out_unlocked:
    FUNC_12(&VAR_6->ciss_mtx);

out:
    if ((VAR_8 != ((void*)0)) && (VAR_8->cr_data != ((void*)0)))
 FUNC_9(VAR_8->cr_data, VAR_1);
    if (VAR_8 != ((void*)0))
 FUNC_3(VAR_8);
    return(VAR_11);
}
