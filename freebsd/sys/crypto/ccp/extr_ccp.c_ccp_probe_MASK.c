
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pciid {scalar_t__ devid; int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pciid* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (struct pciid*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct pciid *VAR_3;
 uint32_t VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 for (VAR_3 = VAR_1; VAR_3 < &VAR_1[FUNC_1(VAR_1)]; VAR_3++) {
  if (VAR_4 == VAR_3->devid) {
   FUNC_0(VAR_2, VAR_3->desc);
   return (0);
  }
 }
 return (VAR_0);
}
