
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int status; int path; void* func_code; } ;
struct ccb_dev_advinfo {char* buf; TYPE_2__ ccb_h; int bufsiz; int flags; void* buftype; } ;
struct cam_path {int dummy; } ;
struct TYPE_3__ {int num_set; int physpath; } ;
typedef TYPE_1__ ses_setphyspath_callback_args_t ;
typedef int enc_softc_t ;
typedef int enc_element_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (struct cam_path*) ;
 int FUNC_8 (struct cam_path*) ;
 int FUNC_9 (TYPE_2__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_10(enc_softc_t *VAR_12, enc_element_t *VAR_13,
    struct cam_path *VAR_14, void *VAR_15)
{
 struct ccb_dev_advinfo VAR_16;
 ses_setphyspath_callback_args_t *VAR_17;
 char *VAR_18;

 VAR_17 = (ses_setphyspath_callback_args_t *)VAR_15;
 VAR_18 = FUNC_2(VAR_7, VAR_8, VAR_9|VAR_10);
 FUNC_7(VAR_14);
 FUNC_9(&VAR_16.ccb_h, VAR_14, VAR_1);
 VAR_16.ccb_h.func_code = VAR_11;
 VAR_16.buftype = VAR_5;
 VAR_16.flags = VAR_3;
 VAR_16.bufsiz = VAR_7;
 VAR_16.buf = VAR_18;
 FUNC_6((union ccb *)&VAR_16);
 if ((VAR_16.ccb_h.status & VAR_0) != 0)
  FUNC_0(VAR_16.ccb_h.path, 0, 0, 0, VAR_6);

 if (FUNC_5(VAR_18, FUNC_3(VAR_17->physpath)) != 0) {

  FUNC_9(&VAR_16.ccb_h, VAR_14, VAR_1);
  VAR_16.ccb_h.func_code = VAR_11;
  VAR_16.buftype = VAR_5;
  VAR_16.flags = VAR_4;
  VAR_16.bufsiz = FUNC_4(VAR_17->physpath);
  VAR_16.buf = FUNC_3(VAR_17->physpath);
  FUNC_6((union ccb *)&VAR_16);
  if ((VAR_16.ccb_h.status & VAR_0) != 0)
   FUNC_0(VAR_16.ccb_h.path, 0, 0, 0, VAR_6);
  if (VAR_16.ccb_h.status == VAR_2)
   VAR_17->num_set++;
 }
 FUNC_8(VAR_14);
 FUNC_1(VAR_18, VAR_8);
}
