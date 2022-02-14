
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int e6000sw_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, int VAR_4, int VAR_5)
{
 e6000sw_softc_t *VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if ((VAR_4 > (VAR_1 * 32 + VAR_2)) ||
     (VAR_4 < (FUNC_0(VAR_6, 0) * 32))) {
  FUNC_2(VAR_3, "Wrong register address.\n");
  return (VAR_0);
 }
 FUNC_3(FUNC_1(VAR_3), VAR_4 / 5,
     VAR_4 % 32, VAR_5);

 return (0);
}
