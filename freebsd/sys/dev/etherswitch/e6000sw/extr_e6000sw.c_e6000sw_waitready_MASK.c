
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int
FUNC_2(e6000sw_softc_t *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
    uint32_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ((FUNC_1(VAR_1, VAR_2, VAR_3) & VAR_4) == 0)
   return (0);
  FUNC_0(1);
 }

 return (1);
}
