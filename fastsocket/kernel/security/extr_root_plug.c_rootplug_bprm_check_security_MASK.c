
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct linux_binprm {TYPE_1__* cred; int filename; } ;
struct TYPE_2__ {scalar_t__ egid; int euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct usb_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3 (struct linux_binprm *VAR_3)
{
 struct usb_device *VAR_4;

 FUNC_0("file %s, e_uid = %d, e_gid = %d\n",
   VAR_3->filename, VAR_3->cred->euid, VAR_3->cred->egid);

 if (VAR_3->cred->egid == 0) {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_4) {
   FUNC_0("e_gid = 0, and device not found, "
     "task not allowed to run...\n");
   return -VAR_0;
  }
  FUNC_2(VAR_4);
 }

 return 0;
}
