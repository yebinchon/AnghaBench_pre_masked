
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_softc {int tx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpsw_softc*) ;
 int FUNC_2 (struct cpsw_softc*) ;
 int FUNC_3 (struct cpsw_softc*,int ) ;
 int FUNC_4 (struct cpsw_softc*) ;
 int FUNC_5 (struct cpsw_softc*,int ,int) ;
 int FUNC_6 (struct cpsw_softc*,int *,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct cpsw_softc *VAR_2;

 VAR_2 = (struct cpsw_softc *)VAR_1;
 FUNC_1(VAR_2);
 if (FUNC_3(VAR_2, FUNC_0(0)) == 0xfffffffc)
  FUNC_6(VAR_2, &VAR_2->tx, 0xfffffffc);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_0, 2);
 FUNC_2(VAR_2);
}
