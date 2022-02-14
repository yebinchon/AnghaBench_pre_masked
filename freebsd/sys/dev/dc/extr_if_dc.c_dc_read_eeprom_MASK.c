
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dc_softc {int dummy; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (struct dc_softc*) ;
 scalar_t__ FUNC_1 (struct dc_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dc_softc*,int,int *) ;
 int FUNC_4 (struct dc_softc*,int,int *) ;
 int FUNC_5 (struct dc_softc*,int,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct dc_softc *VAR_0, caddr_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 uint16_t VAR_6 = 0, *VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_0(VAR_0))
   FUNC_4(VAR_0, VAR_2 + VAR_5, &VAR_6);
  else if (FUNC_1(VAR_0))
   FUNC_5(VAR_0, VAR_2 + VAR_5, &VAR_6);
  else
   FUNC_3(VAR_0, VAR_2 + VAR_5, &VAR_6);
  VAR_7 = (uint16_t *)(VAR_1 + (VAR_5 * 2));
  if (VAR_4)
   *VAR_7 = FUNC_2(VAR_6);
  else
   *VAR_7 = FUNC_6(VAR_6);
 }
}
