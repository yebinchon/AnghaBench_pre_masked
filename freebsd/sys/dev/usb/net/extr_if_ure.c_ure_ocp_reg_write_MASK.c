
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ure_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ure_softc*,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ure_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 uint16_t VAR_5;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_3 & 0xf000);
 VAR_5 = (VAR_3 & 0x0fff) | 0xb000;

 FUNC_0(VAR_2, VAR_5, VAR_0, VAR_4);
}
