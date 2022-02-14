
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct bcm_bsc_softc {int * sc_iicbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_bsc_softc*) ;
 int FUNC_1 (struct bcm_bsc_softc*) ;
 int FUNC_2 (struct bcm_bsc_softc*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct bcm_bsc_softc*) ;
 struct bcm_bsc_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, u_char VAR_4, u_char VAR_5, u_char *VAR_6)
{
 struct bcm_bsc_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_5(VAR_3);
 FUNC_0(VAR_7);
 FUNC_4(VAR_7);
 if (VAR_7->sc_iicbus == ((void*)0))
  VAR_8 = 100000;
 else
  VAR_8 = FUNC_3(VAR_7->sc_iicbus, VAR_4);
 FUNC_2(VAR_7, VAR_0, VAR_1 / VAR_8);
 FUNC_1(VAR_7);

 return (VAR_2);
}
