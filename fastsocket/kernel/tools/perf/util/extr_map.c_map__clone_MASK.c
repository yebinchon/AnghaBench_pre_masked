
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;


 struct map* FUNC_0 (int) ;
 int FUNC_1 (struct map*,struct map*,int) ;

struct map *FUNC_2(struct map *VAR_0)
{
 struct map *VAR_1 = FUNC_0(sizeof(*VAR_0));

 if (!VAR_1)
  return ((void*)0);

 FUNC_1(VAR_1, VAR_0, sizeof(*VAR_0));

 return VAR_1;
}
