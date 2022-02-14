
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwmmc_softc {int dummy; } ;


 int FUNC_0 (struct dwmmc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dwmmc_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct dwmmc_softc *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_4);
 VAR_8 &= ~(VAR_6);
 VAR_8 |= (VAR_5);
 FUNC_1(VAR_7, VAR_4, VAR_8);

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 VAR_8 &= ~(VAR_1 | VAR_2);
 VAR_8 |= (VAR_3);
 FUNC_1(VAR_7, VAR_0, VAR_8);

 return (0);
}
