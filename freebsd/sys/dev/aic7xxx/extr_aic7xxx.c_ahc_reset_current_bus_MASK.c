
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
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ahc_softc *VAR_5)
{
 uint8_t VAR_6;

 FUNC_3(VAR_5, VAR_4, FUNC_2(VAR_5, VAR_4) & ~VAR_1);
 VAR_6 = FUNC_2(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_3, VAR_6 | VAR_2);
 FUNC_1(VAR_5);
 FUNC_4(VAR_0);

 FUNC_3(VAR_5, VAR_3, VAR_6 & ~VAR_2);

 FUNC_0(VAR_5);


 FUNC_3(VAR_5, VAR_4, FUNC_2(VAR_5, VAR_4) | VAR_1);
}
