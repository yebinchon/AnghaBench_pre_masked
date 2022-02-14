
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct amdgpio_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpio_softc*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct amdgpio_softc*,int) ;
 int FUNC_5 (struct amdgpio_softc*,int) ;
 int FUNC_6 (struct amdgpio_softc*,int) ;
 int FUNC_7 (struct amdgpio_softc*,int,int) ;
 struct amdgpio_softc* FUNC_8 (int ) ;
 int FUNC_9 (char*,int,...) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2, uint32_t VAR_3)
{
 struct amdgpio_softc *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_4 = FUNC_8(VAR_2);

 FUNC_9("pin %d\n", VAR_3);
 if (!FUNC_6(VAR_4, VAR_3))
  return (VAR_0);

 if (!FUNC_4(VAR_4, VAR_3))
  return (VAR_0);


 FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 FUNC_9("pin %d value before 0x%x\n", VAR_3, VAR_6);
 VAR_6 = VAR_6 ^ FUNC_3(VAR_1);
 FUNC_9("pin %d value after 0x%x\n", VAR_3, VAR_6);
 FUNC_7(VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_4);

 return (0);
}
