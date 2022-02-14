
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct zyd_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct zyd_softc *VAR_2, const uint8_t *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;

 VAR_5 = VAR_3[3] << 24 | VAR_3[2] << 16 | VAR_3[1] << 8 | VAR_3[0];
 FUNC_0(VAR_2, VAR_1, VAR_5);
 VAR_5 = VAR_3[5] << 8 | VAR_3[4];
 FUNC_0(VAR_2, VAR_0, VAR_5);
fail:
 return (VAR_4);
}
