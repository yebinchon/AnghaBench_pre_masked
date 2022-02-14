
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ncr53c9x_softc {scalar_t__ sc_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ncr53c9x_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct ncr53c9x_softc *VAR_5, uint8_t *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_5, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_2(VAR_5, VAR_1, VAR_6[VAR_8]);

  if (VAR_5->sc_rev == VAR_3)
   FUNC_2(VAR_5, VAR_1, 0);
 }
}
