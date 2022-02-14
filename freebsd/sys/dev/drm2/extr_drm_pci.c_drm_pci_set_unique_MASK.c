
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_unique {size_t unique_len; int unique; } ;
struct drm_master {size_t unique_len; size_t unique_size; char* unique; } ;
struct drm_device {int pci_domain; int pci_bus; int pci_slot; int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ,size_t) ;
 char* FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (char*,char*,int*,int*,int*) ;

int FUNC_3(struct drm_device *VAR_5,
         struct drm_master *VAR_6,
         struct drm_unique *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_6->unique_len = VAR_7->unique_len;
 VAR_6->unique_size = VAR_7->unique_len + 1;
 VAR_6->unique = FUNC_1(VAR_6->unique_size, VAR_0, VAR_4);
 if (!VAR_6->unique) {
  VAR_12 = -VAR_3;
  goto err;
 }

 if (FUNC_0(VAR_6->unique, VAR_7->unique, VAR_6->unique_len)) {
  VAR_12 = -VAR_1;
  goto err;
 }

 VAR_6->unique[VAR_6->unique_len] = '\0';




 VAR_12 = FUNC_2(VAR_6->unique, "PCI:%d:%d:%d", &VAR_9, &VAR_10, &VAR_11);
 if (VAR_12 != 3) {
  VAR_12 = -VAR_2;
  goto err;
 }

 VAR_8 = VAR_9 >> 8;
 VAR_9 &= 0xff;

 if ((VAR_8 != VAR_5->pci_domain) ||
     (VAR_9 != VAR_5->pci_bus) ||
     (VAR_10 != VAR_5->pci_slot) ||
     (VAR_11 != VAR_5->pci_func)) {
  VAR_12 = -VAR_2;
  goto err;
 }
 return 0;
err:
 return VAR_12;
}
