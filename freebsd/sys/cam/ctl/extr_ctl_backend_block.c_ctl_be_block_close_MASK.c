
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_be_lun {int flags; } ;
struct TYPE_3__ {int * cred; } ;
struct TYPE_4__ {TYPE_1__ file; } ;
struct ctl_be_block_lun {int dev_type; TYPE_2__ backend; int * vn; struct ctl_be_lun cbe_lun; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ctl_be_block_lun *VAR_5)
{
 struct ctl_be_lun *VAR_6 = &VAR_5->cbe_lun;
 int VAR_7;

 if (VAR_5->vn) {
  VAR_7 = VAR_1;
  if ((VAR_6->flags & VAR_0) == 0)
   VAR_7 |= VAR_2;
  (void)FUNC_2(VAR_5->vn, VAR_7, VAR_3, VAR_4);
  VAR_5->vn = ((void*)0);

  switch (VAR_5->dev_type) {
  case 130:
   break;
  case 129:
   if (VAR_5->backend.file.cred != ((void*)0)) {
    FUNC_0(VAR_5->backend.file.cred);
    VAR_5->backend.file.cred = ((void*)0);
   }
   break;
  case 128:
   break;
  default:
   FUNC_1("Unexpected backend type %d", VAR_5->dev_type);
   break;
  }
  VAR_5->dev_type = 128;
 }
 return (0);
}
