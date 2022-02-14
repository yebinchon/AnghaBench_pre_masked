
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ural_softc {int dummy; } ;


 int FUNC_0 (char*,int const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ural_softc *VAR_3, const uint8_t *VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = VAR_4[0] | VAR_4[1] << 8;
 FUNC_1(VAR_3, VAR_0, VAR_5);

 VAR_5 = VAR_4[2] | VAR_4[3] << 8;
 FUNC_1(VAR_3, VAR_1, VAR_5);

 VAR_5 = VAR_4[4] | VAR_4[5] << 8;
 FUNC_1(VAR_3, VAR_2, VAR_5);

 FUNC_0("setting BSSID to %6D\n", VAR_4, ":");
}
