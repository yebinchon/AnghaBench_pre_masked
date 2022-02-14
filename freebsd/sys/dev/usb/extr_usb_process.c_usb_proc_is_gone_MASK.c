
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_process {int * up_mtx; scalar_t__ up_gone; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

uint8_t
FUNC_1(struct usb_process *VAR_1)
{
 if (VAR_1->up_gone)
  return (1);





 if (VAR_1->up_mtx != ((void*)0))
  FUNC_0(VAR_1->up_mtx, VAR_0);
 return (0);
}
