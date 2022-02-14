
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ste_softc {int dummy; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ste_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ste_softc *VAR_3, uint16_t *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8;

 if (FUNC_3(VAR_3))
  return (1);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  FUNC_1(VAR_3, VAR_1, VAR_0 | (VAR_5 + VAR_8));
  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7)
   break;
  *VAR_4 = FUNC_2(FUNC_0(VAR_3, VAR_2));
  VAR_4++;
 }

 return (VAR_7 ? 1 : 0);
}
