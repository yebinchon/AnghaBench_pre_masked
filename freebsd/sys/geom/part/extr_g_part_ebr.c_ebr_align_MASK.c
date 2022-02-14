
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_part_table {int gpt_sectors; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_1->gpt_sectors;
 if (*VAR_3 < 2 * VAR_4)
  return (VAR_0);
 if (*VAR_2 % VAR_4) {
  *VAR_3 += (*VAR_2 % VAR_4) - VAR_4;
  *VAR_2 -= (*VAR_2 % VAR_4) - VAR_4;
 }
 if (*VAR_3 % VAR_4)
  *VAR_3 -= (*VAR_3 % VAR_4);
 if (*VAR_3 < 2 * VAR_4)
  return (VAR_0);
 return (0);
}
