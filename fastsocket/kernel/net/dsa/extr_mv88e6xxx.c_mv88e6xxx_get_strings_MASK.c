
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mv88e6xxx_hw_stat {int string; } ;
struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct dsa_switch *VAR_1,
      int VAR_2, struct mv88e6xxx_hw_stat *VAR_3,
      int VAR_4, uint8_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0(VAR_5 + VAR_6 * VAR_0,
         VAR_3[VAR_6].string, VAR_0);
 }
}
