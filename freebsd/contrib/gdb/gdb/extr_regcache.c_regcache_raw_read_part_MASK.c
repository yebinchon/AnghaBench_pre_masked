
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache_descr {int nr_raw_registers; } ;
struct regcache {struct regcache_descr* descr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct regcache*,int,int,int,void*,int *,int ,int ) ;

void
FUNC_2 (struct regcache *VAR_2, int VAR_3,
   int VAR_4, int VAR_5, void *VAR_6)
{
  struct regcache_descr *VAR_7 = VAR_2->descr;
  FUNC_0 (VAR_3 >= 0 && VAR_3 < VAR_7->nr_raw_registers);
  FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0),
        VAR_0, VAR_1);
}
