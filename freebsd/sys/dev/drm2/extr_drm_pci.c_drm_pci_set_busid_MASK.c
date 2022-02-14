
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int unique_len; int unique_size; int * unique; } ;
struct drm_device {int pci_domain; int pci_bus; int pci_slot; int pci_func; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int,char*,int,int,int,int) ;

int FUNC_3(struct drm_device *VAR_4, struct drm_master *VAR_5)
{
 int VAR_6, VAR_7;
 VAR_5->unique_len = 40;
 VAR_5->unique_size = VAR_5->unique_len;
 VAR_5->unique = FUNC_1(VAR_5->unique_size, VAR_0, VAR_3);
 if (VAR_5->unique == ((void*)0))
  return -VAR_2;


 VAR_6 = FUNC_2(VAR_5->unique, VAR_5->unique_len,
         "pci:%04x:%02x:%02x.%d",
         VAR_4->pci_domain,
         VAR_4->pci_bus,
         VAR_4->pci_slot,
         VAR_4->pci_func);

 if (VAR_6 >= VAR_5->unique_len) {
  FUNC_0("buffer overflow");
  VAR_7 = -VAR_1;
  goto err;
 } else
  VAR_5->unique_len = VAR_6;

 return 0;
err:
 return VAR_7;
}
