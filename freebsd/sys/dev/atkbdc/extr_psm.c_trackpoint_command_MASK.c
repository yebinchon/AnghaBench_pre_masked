
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ capPassthrough; } ;
struct psm_softc {TYPE_1__ synhw; int kbdc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 int FUNC_2 (struct psm_softc*) ;
 int FUNC_3 (struct psm_softc*) ;

__attribute__((used)) static int
FUNC_4(struct psm_softc *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 const int VAR_6[] = { 0xe2, VAR_3, VAR_4, VAR_5 };
 int VAR_7;

 if (VAR_2->synhw.capPassthrough)
  FUNC_3(VAR_2);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
  if (VAR_2->synhw.capPassthrough &&
      (VAR_6[VAR_7] == 0xff || VAR_6[VAR_7] == 0xe7))
   if (FUNC_1(VAR_2->kbdc, 0xe7) != VAR_1) {
    FUNC_2(VAR_2);
    return (VAR_0);
   }
  if (FUNC_1(VAR_2->kbdc, VAR_6[VAR_7]) != VAR_1) {
   if (VAR_2->synhw.capPassthrough)
    FUNC_2(VAR_2);
   return (VAR_0);
  }
 }

 if (VAR_2->synhw.capPassthrough)
  FUNC_2(VAR_2);

 return (0);
}
