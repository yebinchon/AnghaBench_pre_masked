
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mpt_softc*) ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;
 int FUNC_4 (struct mpt_softc*,char*) ;
 int FUNC_5 (struct mpt_softc*,int) ;
 scalar_t__ FUNC_6 (struct mpt_softc*,int ) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_2)
{






 FUNC_0(VAR_2);






 FUNC_5(VAR_2, 1);







 FUNC_3(VAR_2);




 FUNC_2(VAR_2);







 FUNC_3(VAR_2);




 if (FUNC_6(VAR_2, 0) != VAR_1) {
  FUNC_4(VAR_2, "failed to enable port 0\n");
  FUNC_1(VAR_2);
  return (VAR_0);
 }
 FUNC_1(VAR_2);
 return (0);
}
