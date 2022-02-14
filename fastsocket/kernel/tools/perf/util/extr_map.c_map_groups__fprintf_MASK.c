
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*) ;
 size_t FUNC_1 (struct map_groups*,int,int *) ;
 size_t FUNC_2 (struct map_groups*,int,int *) ;

size_t FUNC_3(struct map_groups *VAR_0, int VAR_1, FILE *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_3 += FUNC_0(VAR_2, "Removed maps:\n");
 return VAR_3 + FUNC_2(VAR_0, VAR_1, VAR_2);
}
