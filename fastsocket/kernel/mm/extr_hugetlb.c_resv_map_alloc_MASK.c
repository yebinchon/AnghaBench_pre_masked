
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resv_map {int regions; int refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct resv_map* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct resv_map *FUNC_3(void)
{
 struct resv_map *VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_2(&VAR_1->refs);
 FUNC_0(&VAR_1->regions);

 return VAR_1;
}
