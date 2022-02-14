
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct octeon_device {size_t octeon_id; int device_name; int mem_access_lock; int pci_win_lock; } ;
typedef int device_t ;


 char* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct octeon_device* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct octeon_device** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,char*,char*,size_t) ;

struct octeon_device *
FUNC_5(device_t VAR_6)
{
 struct octeon_device *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;

 FUNC_2(&VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (!VAR_3[VAR_8])
   break;

 if (VAR_8 < VAR_1) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 != ((void*)0)) {
   VAR_4++;
   VAR_3[VAR_8] = VAR_7;
  }
 }

 FUNC_3(&VAR_5);

 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_1(&VAR_7->pci_win_lock, "pci_win_lock", ((void*)0), VAR_2);
 FUNC_1(&VAR_7->mem_access_lock, "mem_access_lock", ((void*)0), VAR_2);

 VAR_7->octeon_id = VAR_8;
 FUNC_4(VAR_7->device_name, sizeof(VAR_7->device_name), "%s%d",
   VAR_0, VAR_7->octeon_id);

 return (VAR_7);
}
