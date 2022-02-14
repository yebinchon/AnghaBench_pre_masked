
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ehci_softc_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(ehci_softc_t *VAR_2, uint16_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;

 FUNC_0("index=%d lowspeed=%d\n", VAR_3, VAR_4);

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_2, VAR_5) & ~VAR_0;
 FUNC_3(VAR_2, VAR_5, VAR_6 | VAR_1);
}
