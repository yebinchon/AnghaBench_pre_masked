
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {scalar_t__ sis_type; int sis_dev; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sis_softc*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct sis_softc *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_7, VAR_2, VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (!(FUNC_0(VAR_7, VAR_2) & VAR_3))
   break;
 }

 if (VAR_8 == VAR_5)
  FUNC_4(VAR_7->sis_dev, "reset never completed\n");


 FUNC_2(1000);





 if (VAR_7->sis_type == VAR_6) {
  FUNC_1(VAR_7, VAR_0, VAR_1);
  FUNC_1(VAR_7, VAR_0, 0);
 } else {

  FUNC_1(VAR_7, VAR_4, 0);
 }
}
