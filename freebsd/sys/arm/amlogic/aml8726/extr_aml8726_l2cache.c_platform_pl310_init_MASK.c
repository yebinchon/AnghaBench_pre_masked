
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pl310_softc*,int ) ;
 int FUNC_1 (struct pl310_softc*,int ,int ) ;

void
FUNC_2(struct pl310_softc *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 &= ~VAR_1;




 VAR_4 |= VAR_0;

 FUNC_1(VAR_3, VAR_2, VAR_4);
}
