
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_groups {int dummy; } ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct map_groups*,size_t,int,int *) ;

__attribute__((used)) static size_t FUNC_1(struct map_groups *VAR_1,
            int VAR_2, FILE *VAR_3)
{
 size_t VAR_4 = 0, VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  VAR_4 += FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3);
 return VAR_4;
}
