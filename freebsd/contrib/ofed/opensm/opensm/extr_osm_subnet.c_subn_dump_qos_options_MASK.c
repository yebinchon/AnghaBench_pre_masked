
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_vls; int high_limit; char* vlarb_high; char* vlarb_low; char* sl2vl; } ;
typedef TYPE_1__ osm_qos_options_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char const*,int,char const*,int,char const*,char*,char const*,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_1(FILE * VAR_0, const char *VAR_1,
     const char *VAR_2, osm_qos_options_t * VAR_3)
{
 return FUNC_0(VAR_0, "# %s\n"
         "%s_max_vls %u\n"
         "%s_high_limit %d\n"
         "%s_vlarb_high %s\n"
         "%s_vlarb_low %s\n"
         "%s_sl2vl %s\n",
         VAR_1,
         VAR_2, VAR_3->max_vls,
         VAR_2, VAR_3->high_limit,
         VAR_2, VAR_3->vlarb_high,
         VAR_2, VAR_3->vlarb_low, VAR_2, VAR_3->sl2vl);
}
