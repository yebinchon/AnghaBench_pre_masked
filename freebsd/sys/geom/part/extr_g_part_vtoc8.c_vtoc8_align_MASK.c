
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct g_part_vtoc8_table {int secpercyl; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct g_part_vtoc8_table *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3)
{

 if (*VAR_3 < VAR_1->secpercyl)
  return (VAR_0);
 if (VAR_2 != ((void*)0) && (*VAR_2 % VAR_1->secpercyl)) {
  *VAR_3 += (*VAR_2 % VAR_1->secpercyl) - VAR_1->secpercyl;
  *VAR_2 -= (*VAR_2 % VAR_1->secpercyl) - VAR_1->secpercyl;
 }
 if (*VAR_3 % VAR_1->secpercyl)
  *VAR_3 -= (*VAR_3 % VAR_1->secpercyl);
 if (*VAR_3 < VAR_1->secpercyl)
  return (VAR_0);
 return (0);
}
