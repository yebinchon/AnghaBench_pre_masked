
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int osm_opensm_t ;
struct TYPE_4__ {int * p_osm; } ;
typedef TYPE_1__ lash_t ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static lash_t *FUNC_1(osm_opensm_t * VAR_0)
{
 lash_t *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(lash_t));
 if (!VAR_1)
  return ((void*)0);

 VAR_1->p_osm = VAR_0;

 return VAR_1;
}
