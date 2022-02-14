
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int32_t ;
struct bfe_softc {int bfe_dev; } ;


 int FUNC_0 (struct bfe_softc*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_3(struct bfe_softc *VAR_0, u_int32_t VAR_1, u_int32_t VAR_2,
  u_long VAR_3, const int VAR_4)
{
 u_long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  u_int32_t VAR_6 = FUNC_0(VAR_0, VAR_1);

  if (VAR_4 && !(VAR_6 & VAR_2))
   break;
  if (!VAR_4 && (VAR_6 & VAR_2))
   break;
  FUNC_1(10);
 }
 if (VAR_5 == VAR_3) {
  FUNC_2(VAR_0->bfe_dev,
      "BUG!  Timeout waiting for bit %08x of register "
      "%x to %s.\n", VAR_2, VAR_1, (VAR_4 ? "clear" : "set"));
  return (-1);
 }
 return (0);
}
