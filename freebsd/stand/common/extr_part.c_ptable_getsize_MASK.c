
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ptable {int sectors; int sectorsize; } ;


 int VAR_0 ;

int
FUNC_0(const struct ptable *VAR_1, uint64_t *VAR_2)
{
 uint64_t VAR_3 = VAR_1->sectors * VAR_1->sectorsize;

 if (VAR_3 < VAR_1->sectors)
  return (VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return (0);
}
