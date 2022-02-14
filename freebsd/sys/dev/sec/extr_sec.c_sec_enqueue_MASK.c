
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sec_softc {int dummy; } ;
struct sec_desc {TYPE_1__* sd_desc; } ;
struct TYPE_2__ {int shd_eu_sel1; int shd_eu_sel0; } ;


 int FUNC_0 (struct sec_softc*) ;
 struct sec_desc* FUNC_1 (struct sec_softc*) ;
 int FUNC_2 (struct sec_softc*,int ) ;
 int FUNC_3 (struct sec_softc*) ;
 scalar_t__ FUNC_4 (struct sec_softc*) ;
 int FUNC_5 (struct sec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct sec_softc*,struct sec_desc*,int) ;
 int FUNC_7 (struct sec_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct sec_softc *VAR_2)
{
 struct sec_desc *VAR_3;
 int VAR_4, VAR_5;

 FUNC_2(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0);

 while (FUNC_4(VAR_2) > 0) {
  VAR_3 = FUNC_1(VAR_2);

  VAR_4 = FUNC_7(VAR_2, VAR_3->sd_desc->shd_eu_sel0);
  VAR_5 = FUNC_7(VAR_2, VAR_3->sd_desc->shd_eu_sel1);





  if (VAR_4 >= 0 && VAR_4 == VAR_5) {
   if (FUNC_6(VAR_2, VAR_3, VAR_4) >= 0) {
    FUNC_0(VAR_2);
    continue;
   }
  }





  if ((VAR_4 >= 0 && VAR_5 < 0) || (VAR_5 >= 0 && VAR_4 < 0)) {
   if (FUNC_6(VAR_2, VAR_3, (VAR_4 >= 0) ? VAR_4 : VAR_5)
       >= 0) {
    FUNC_0(VAR_2);
    continue;
   }
  }





  if (VAR_4 < 0 && VAR_5 < 0) {
   if (FUNC_6(VAR_2, VAR_3, -1) >= 0) {
    FUNC_0(VAR_2);
    continue;
   }
  }


  FUNC_3(VAR_2);
  break;
 }

 FUNC_5(VAR_2, VAR_0);
 FUNC_5(VAR_2, VAR_1);
}
