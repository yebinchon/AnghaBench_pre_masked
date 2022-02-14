
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct bge_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bge_softc*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_4)
{
 if_t VAR_5;
 uint32_t VAR_6[4] = { 0, 0, 0, 0 };
 int VAR_7;

 FUNC_0(VAR_4);

 VAR_5 = VAR_4->bge_ifp;

 if (FUNC_3(VAR_5) & VAR_1 || FUNC_3(VAR_5) & VAR_2) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   FUNC_1(VAR_4, VAR_0 + (VAR_7 * 4), 0xFFFFFFFF);
  return;
 }


 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_1(VAR_4, VAR_0 + (VAR_7 * 4), 0);

 FUNC_2(VAR_5, VAR_3, VAR_6);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_1(VAR_4, VAR_0 + (VAR_7 * 4), VAR_6[VAR_7]);
}
