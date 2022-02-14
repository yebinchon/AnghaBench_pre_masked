
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_plx_softc {scalar_t__ link; } ;
typedef void* device_t ;


 int FUNC_0 (struct ntb_plx_softc*,int) ;
 int FUNC_1 (struct ntb_plx_softc*,int,int) ;
 struct ntb_plx_softc* FUNC_2 (void*) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0)
{
 device_t VAR_1 = VAR_0;
 struct ntb_plx_softc *VAR_2 = FUNC_2(VAR_1);
 uint32_t VAR_3;

 FUNC_4((device_t)VAR_0, 0);

 if (VAR_2->link)
  return;

 VAR_3 = FUNC_0(VAR_2, 0xfe0);
 if (VAR_3 == 0)
  return;
 FUNC_1(VAR_2, 0xfe0, VAR_3);
 if (VAR_3 & 1)
  FUNC_3(VAR_1, "Correctable Error\n");
 if (VAR_3 & 2)
  FUNC_3(VAR_1, "Uncorrectable Error\n");
 if (VAR_3 & 4) {

  FUNC_6(VAR_1);
  FUNC_5(VAR_1);
 }
 if (VAR_3 & 8)
  FUNC_3(VAR_1, "Uncorrectable Error Message Drop\n");
}
