
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sl2vl; int vlarb_high; int vlarb_low; int high_limit; int max_vls; } ;
typedef TYPE_1__ osm_qos_options_t ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,char*) ;

__attribute__((used)) static void FUNC_4(osm_qos_options_t *VAR_0, const char *VAR_1)
{
 FUNC_1(&VAR_0->max_vls, VAR_1);
 FUNC_0(&VAR_0->high_limit, VAR_1);
 FUNC_3(&VAR_0->vlarb_low, VAR_1, "low");
 FUNC_3(&VAR_0->vlarb_high, VAR_1, "high");
 FUNC_2(&VAR_0->sl2vl, VAR_1);
}
