
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_cru_softc {intptr_t reset_num; int reset_offset; int mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct rk_cru_softc*,int) ;
 int VAR_0 ;
 struct rk_cru_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, intptr_t VAR_2, bool *VAR_3)
{
 struct rk_cru_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 > VAR_4->reset_num)
  return (VAR_0);
 VAR_5 = VAR_4->reset_offset + VAR_2 / 16 * 4;
 VAR_6 = VAR_2 % 16;

 FUNC_2(&VAR_4->mtx);
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 FUNC_3(&VAR_4->mtx);

 *VAR_3 = 0;
 if (VAR_7 & (1 << VAR_6))
  *VAR_3 = 1;

 return (0);
}
