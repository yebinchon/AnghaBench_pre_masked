
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ioat_softc {int device; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static boolean_t
FUNC_1(struct ioat_softc *VAR_2)
{
 u_int32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->device);
 switch (VAR_3) {

 case 0x0c508086:
 case 0x0c518086:
 case 0x0c528086:
 case 0x0c538086:

 case 0x6f508086:
 case 0x6f518086:
 case 0x6f528086:
 case 0x6f538086:
  return (VAR_1);
 }

 return (VAR_0);
}
