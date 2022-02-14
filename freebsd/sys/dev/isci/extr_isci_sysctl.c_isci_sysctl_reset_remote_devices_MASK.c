
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ISCI_REMOTE_DEVICE {int dummy; } ;
struct ISCI_CONTROLLER {int lock; struct ISCI_REMOTE_DEVICE** remote_device; } ;


 int FUNC_0 (struct ISCI_REMOTE_DEVICE*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ISCI_CONTROLLER *VAR_0,
    uint32_t VAR_1)
{
 uint32_t VAR_2 = 0;

 while (VAR_1 != 0) {
  if (VAR_1 & 0x1) {
   struct ISCI_REMOTE_DEVICE *VAR_3 =
    VAR_0->remote_device[VAR_2];

   if (VAR_3 != ((void*)0)) {
    FUNC_1(&VAR_0->lock);
    FUNC_0(VAR_3, ((void*)0));
    FUNC_2(&VAR_0->lock);
   }
  }
  VAR_1 >>= 1;
  VAR_2++;
 }
}
