
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mpt_softc {int dummy; } ;


 int FUNC_0 (struct mpt_softc*,char*,char const*) ;
 int FUNC_1 (struct mpt_softc*,char*,...) ;

void
FUNC_2(struct mpt_softc *VAR_0, const char *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;
 uint8_t *VAR_5 = VAR_2;

 FUNC_0(VAR_0, "%s:", VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if ((VAR_4 & 0xf) == 0) {
   FUNC_1(VAR_0, "\n");
  }
  FUNC_1(VAR_0, " %02x", VAR_5[VAR_4]);
 }
 FUNC_1(VAR_0, "\n");
}
