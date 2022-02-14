
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct tdfx_softc {int addr0; int memrange; } ;
struct cdev {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, vm_ooffset_t VAR_3, vm_paddr_t *VAR_4,
    int VAR_5, vm_memattr_t *VAR_6)
{
 struct tdfx_softc* VAR_7[2];

 VAR_7[0] = (struct tdfx_softc*)FUNC_0(VAR_1, 0);


 if(VAR_7[0] == ((void*)0)) {



    return -1;
 }


 if((VAR_3 & 0xff000000) == VAR_7[0]->addr0) {
  VAR_3 &= 0xffffff;
  *VAR_4 = FUNC_2(VAR_7[0]->memrange) + VAR_3;
  return 0;
 }

 if(VAR_0 > 1) {
  VAR_7[1] = (struct tdfx_softc*)FUNC_0(VAR_1, 1);
  if((VAR_3 & 0xff000000) == VAR_7[1]->addr0) {
   VAR_3 &= 0xffffff;
   *VAR_4 = FUNC_2(VAR_7[1]->memrange) +
       VAR_3;
   return 0;
  }
 }
 return -1;
}
