
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_map {int nr; int * map; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,...) ;

size_t FUNC_1(struct cpu_map *VAR_0, FILE *VAR_1)
{
 int VAR_2;
 size_t VAR_3 = FUNC_0(VAR_1, "%d cpu%s: ",
     VAR_0->nr, VAR_0->nr > 1 ? "s" : "");
 for (VAR_2 = 0; VAR_2 < VAR_0->nr; ++VAR_2)
  VAR_3 += FUNC_0(VAR_1, "%s%d", VAR_2 ? ", " : "", VAR_0->map[VAR_2]);

 return VAR_3 + FUNC_0(VAR_1, "\n");
}
