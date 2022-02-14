
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct nvd_disk {int ns; } ;
struct disk {struct nvd_disk* d_drv1; } ;
typedef int off_t ;


 int FUNC_0 (int ,void*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1, vm_offset_t VAR_2, off_t VAR_3, size_t VAR_4)
{
 struct disk *VAR_5 = VAR_0;
 struct nvd_disk *VAR_6 = VAR_5->d_drv1;

 return (FUNC_0(VAR_6->ns, VAR_1, VAR_3, VAR_4));
}
