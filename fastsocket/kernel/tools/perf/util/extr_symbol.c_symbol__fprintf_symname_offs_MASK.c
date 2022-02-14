
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; unsigned long start; } ;
struct addr_location {unsigned long addr; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,...) ;

size_t FUNC_1(const struct symbol *VAR_0,
        const struct addr_location *VAR_1, FILE *VAR_2)
{
 unsigned long VAR_3;
 size_t VAR_4;

 if (VAR_0 && VAR_0->name) {
  VAR_4 = FUNC_0(VAR_2, "%s", VAR_0->name);
  if (VAR_1) {
   VAR_3 = VAR_1->addr - VAR_0->start;
   VAR_4 += FUNC_0(VAR_2, "+0x%lx", VAR_3);
  }
  return VAR_4;
 } else
  return FUNC_0(VAR_2, "[unknown]");
}
