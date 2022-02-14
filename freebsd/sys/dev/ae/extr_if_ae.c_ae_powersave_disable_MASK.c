
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ae_softc_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(ae_softc_t *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_3);

 FUNC_2(VAR_3, VAR_0, 0);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4 & VAR_2) {
  VAR_4 &= ~VAR_2;
  FUNC_2(VAR_3, VAR_1, VAR_4);
  FUNC_3(1000);
 }
}
