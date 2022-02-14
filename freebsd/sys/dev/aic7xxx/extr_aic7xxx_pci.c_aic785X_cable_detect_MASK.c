
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_9, int *VAR_10,
       int *VAR_11, int *VAR_12)
{
 uint8_t VAR_13;
 uint8_t VAR_14;

 VAR_14 = FUNC_1(VAR_9, VAR_8);
 VAR_14 &= ~VAR_7;
 VAR_14 |= VAR_6;
 FUNC_2(VAR_9, VAR_8, VAR_14);
 FUNC_2(VAR_9, VAR_1, VAR_4|VAR_0);
 FUNC_0(VAR_9);
 FUNC_3(500);
 FUNC_2(VAR_9, VAR_1, 0);
 FUNC_0(VAR_9);
 FUNC_3(500);
 VAR_13 = FUNC_1(VAR_9, VAR_1);
 *VAR_10 = (VAR_13 & VAR_2) ? 0 : 1;
 *VAR_11 = (VAR_13 & VAR_3) ? 0 : 1;
 *VAR_12 = (FUNC_1(VAR_9, VAR_8) & VAR_5) ? 1 : 0;
}
