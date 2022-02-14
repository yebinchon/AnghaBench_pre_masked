
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct fman_softc {int mem_res; } ;
typedef int device_t ;


 struct fman_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0, vm_offset_t *VAR_1)
{
 struct fman_softc *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = FUNC_1(VAR_2->mem_res);

 return (0);
}
