
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_process {int * up_ptr; int up_drain; int up_cv; int up_qhead; int up_prio; struct mtx* up_mtx; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct usb_process*,int **,char*,char const*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int FUNC_4 (struct usb_process*) ;
 int VAR_2 ;

int
FUNC_5(struct usb_process *VAR_3, struct mtx *VAR_4,
    const char *VAR_5, uint8_t VAR_6)
{
 VAR_3->up_mtx = VAR_4;
 VAR_3->up_prio = VAR_6;

 FUNC_1(&VAR_3->up_qhead);

 FUNC_3(&VAR_3->up_cv, "-");
 FUNC_3(&VAR_3->up_drain, "usbdrain");

 if (FUNC_2(&VAR_2, VAR_3,
     &VAR_3->up_ptr, "%s", VAR_5)) {
  FUNC_0(0, "Unable to create USB process.");
  VAR_3->up_ptr = ((void*)0);
  goto error;
 }



 return (0);

error:
 FUNC_4(VAR_3);
 return (VAR_0);
}
