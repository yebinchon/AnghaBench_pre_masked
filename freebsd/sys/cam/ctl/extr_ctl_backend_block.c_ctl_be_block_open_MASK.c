
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {TYPE_1__* ni_vp; } ;
struct ctl_lun_req {int error_str; } ;
struct ctl_be_lun {scalar_t__ lun_type; void* serseq; int options; int flags; } ;
struct ctl_be_block_lun {char* dev_path; scalar_t__ dispatch; TYPE_1__* vn; struct ctl_be_lun cbe_lun; } ;
struct TYPE_3__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,char*,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (char**,int ,char*,char*) ;
 int FUNC_4 (struct ctl_be_block_lun*) ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (struct ctl_be_block_lun*,struct ctl_lun_req*) ;
 int FUNC_6 (struct ctl_be_block_lun*,struct ctl_lun_req*) ;
 int VAR_17 ;
 char* FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 () ;
 int * VAR_18 ;
 int FUNC_10 (int ,int,char*,...) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 char* FUNC_12 (char const*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int*) ;
 int FUNC_14 (struct nameidata*,int*,int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct ctl_be_block_lun *VAR_19, struct ctl_lun_req *VAR_20)
{
 struct ctl_be_lun *VAR_21 = &VAR_19->cbe_lun;
 struct nameidata VAR_22;
 const char *VAR_23;
 int VAR_24, VAR_25;

 VAR_24 = 0;
 if (VAR_18 == ((void*)0)) {
  FUNC_10(VAR_20->error_str, sizeof(VAR_20->error_str),
    "Root filesystem is not mounted");
  return (1);
 }
 FUNC_9();

 VAR_23 = FUNC_7(VAR_21->options, "file", ((void*)0));
 if (VAR_23 == ((void*)0)) {
  FUNC_10(VAR_20->error_str, sizeof(VAR_20->error_str),
    "no file argument specified");
  return (1);
 }
 FUNC_8(VAR_19->dev_path, VAR_11);
 VAR_19->dev_path = FUNC_12(VAR_23, VAR_11);

 VAR_25 = VAR_8;
 VAR_23 = FUNC_7(VAR_21->options, "readonly", ((void*)0));
 if (VAR_23 != ((void*)0)) {
  if (FUNC_11(VAR_23, "on") != 0)
   VAR_25 |= VAR_9;
 } else if (VAR_21->lun_type == VAR_13)
  VAR_25 |= VAR_9;

again:
 FUNC_1(&VAR_22, VAR_10, VAR_7, VAR_14, VAR_19->dev_path, VAR_17);
 VAR_24 = FUNC_14(&VAR_22, &VAR_25, 0, ((void*)0));
 if ((VAR_24 == VAR_6 || VAR_24 == VAR_4) && (VAR_25 & VAR_9)) {
  VAR_25 &= ~VAR_9;
  goto again;
 }
 if (VAR_24) {






  if (VAR_19->dev_path[0] != '/') {
   char *VAR_26;

   FUNC_3(&VAR_26, VAR_11, "/dev/%s",
    VAR_19->dev_path);
   FUNC_8(VAR_19->dev_path, VAR_11);
   VAR_19->dev_path = VAR_26;
   goto again;
  }
  FUNC_10(VAR_20->error_str, sizeof(VAR_20->error_str),
      "error opening %s: %d", VAR_19->dev_path, VAR_24);
  return (VAR_24);
 }
 if (VAR_25 & VAR_9)
  VAR_21->flags &= ~VAR_0;
 else
  VAR_21->flags |= VAR_0;

 FUNC_0(&VAR_22, VAR_12);
 VAR_19->vn = VAR_22.ni_vp;


 if (FUNC_13(VAR_19->vn, &VAR_24)) {
  VAR_24 = FUNC_5(VAR_19, VAR_20);
 } else if (VAR_19->vn->v_type == VAR_15) {
  VAR_24 = FUNC_6(VAR_19, VAR_20);
 } else {
  VAR_24 = VAR_5;
  FUNC_10(VAR_20->error_str, sizeof(VAR_20->error_str),
    "%s is not a disk or plain file", VAR_19->dev_path);
 }
 FUNC_2(VAR_19->vn, 0);

 if (VAR_24 != 0)
  FUNC_4(VAR_19);
 VAR_21->serseq = VAR_1;
 if (VAR_19->dispatch != VAR_16)
  VAR_21->serseq = VAR_3;
 VAR_23 = FUNC_7(VAR_21->options, "serseq", ((void*)0));
 if (VAR_23 != ((void*)0) && FUNC_11(VAR_23, "on") == 0)
  VAR_21->serseq = VAR_2;
 else if (VAR_23 != ((void*)0) && FUNC_11(VAR_23, "read") == 0)
  VAR_21->serseq = VAR_3;
 else if (VAR_23 != ((void*)0) && FUNC_11(VAR_23, "off") == 0)
  VAR_21->serseq = VAR_1;
 return (0);
}
