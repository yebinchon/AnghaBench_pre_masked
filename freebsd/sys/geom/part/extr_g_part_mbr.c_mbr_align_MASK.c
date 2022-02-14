
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_part_table {int gpt_sectors; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5;

 if (VAR_1 == 0)
  return (0);
 VAR_5 = VAR_2->gpt_sectors;
 if (*VAR_4 < VAR_5)
  return (VAR_0);
 if (VAR_3 != ((void*)0) && (*VAR_3 % VAR_5)) {
  *VAR_4 += (*VAR_3 % VAR_5) - VAR_5;
  *VAR_3 -= (*VAR_3 % VAR_5) - VAR_5;
 }
 if (*VAR_4 % VAR_5)
  *VAR_4 -= (*VAR_4 % VAR_5);
 if (*VAR_4 < VAR_5)
  return (VAR_0);
 return (0);
}
