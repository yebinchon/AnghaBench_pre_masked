
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int dummy; } ;
struct drm_device {int id_entry; } ;
typedef int drm_pci_id_list_t ;
typedef int device_t ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int,int,int const*) ;
 int FUNC_2 (int ,struct drm_device*,struct drm_driver*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_0, const drm_pci_id_list_t *VAR_1,
    struct drm_driver *VAR_2)
{
 struct drm_device *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_0);

 VAR_4 = FUNC_4(VAR_0);
 VAR_5 = FUNC_3(VAR_0);
 VAR_3->id_entry = FUNC_1(VAR_4, VAR_5, VAR_1);

 VAR_6 = FUNC_2(VAR_0, VAR_3, VAR_2);

 return (VAR_6);
}
