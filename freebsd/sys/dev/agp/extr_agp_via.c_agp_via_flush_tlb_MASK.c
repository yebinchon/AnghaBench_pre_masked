
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_via_softc {int * regs; } ;
typedef int device_t ;


 size_t VAR_0 ;
 struct agp_via_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2)
{
 struct agp_via_softc *VAR_3 = FUNC_0(VAR_2);
 u_int32_t VAR_4;

 if (VAR_3->regs == VAR_1) {
  FUNC_2(VAR_2, VAR_3->regs[VAR_0], 0x8f, 4);
  FUNC_2(VAR_2, VAR_3->regs[VAR_0], 0x0f, 4);
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_3->regs[VAR_0], 4);
  FUNC_2(VAR_2, VAR_3->regs[VAR_0], VAR_4 &
      ~(1 << 7), 4);
  FUNC_2(VAR_2, VAR_3->regs[VAR_0], VAR_4, 4);
 }

}
