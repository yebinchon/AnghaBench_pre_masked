
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int dummy; } ;
typedef int platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pl310_softc*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(platform_t VAR_8, struct pl310_softc *VAR_9)
{
 uint32_t VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_9, VAR_2);
 VAR_11 = FUNC_0(VAR_9, VAR_3);




 VAR_11 &= ~VAR_5;
 VAR_10 &= ~VAR_1;







 VAR_11 |= VAR_4;
 VAR_10 |= VAR_0;






 FUNC_1(VAR_10, 0, VAR_6);
 FUNC_1(VAR_11, 0, VAR_7);
}
