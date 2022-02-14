
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int max_vls; char* vlarb_high; char* vlarb_low; scalar_t__ sl2vl; } ;
typedef TYPE_1__ osm_qos_options_t ;
typedef int osm_log_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,int ,char*,char const*,...) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,int,char const*,char*,int *) ;

__attribute__((used)) static
void FUNC_2(osm_qos_options_t *VAR_3, osm_qos_options_t *VAR_4,
    const char *VAR_5, osm_log_t *VAR_6)
{
 const char *VAR_7;
 bool VAR_8, VAR_9;
 unsigned VAR_10;

 VAR_10 = VAR_4->max_vls;
 if (VAR_3->max_vls > 0)
  VAR_10 = VAR_3->max_vls;

 if (VAR_10 > 0 && VAR_10 < 2)
  FUNC_0(VAR_6, VAR_2,
   "Warning: full torus-2QoS functionality not available "
   "for configured %s_max_vls = %d\n",
   (VAR_3->max_vls > 0 ? VAR_5 : "qos"), VAR_3->max_vls);

 VAR_7 = VAR_3->vlarb_high;
 VAR_8 = 0;
 VAR_9 = 1;
 if (!VAR_7) {
  VAR_7 = VAR_4->vlarb_high;
  VAR_9 = 0;
 }
 if (!VAR_7) {
  VAR_7 = VAR_0;
  VAR_8 = 1;
 }
 FUNC_1(VAR_7, VAR_8, VAR_9,
         VAR_5, "high", VAR_6);

 VAR_7 = VAR_3->vlarb_low;
 VAR_8 = 0;
 VAR_9 = 1;
 if (!VAR_7) {
  VAR_7 = VAR_4->vlarb_low;
  VAR_9 = 0;
 }
 if (!VAR_7) {
  VAR_7 = VAR_1;
  VAR_8 = 1;
 }
 FUNC_1(VAR_7, VAR_8, VAR_9,
         VAR_5, "low", VAR_6);

 if (VAR_3->sl2vl)
  FUNC_0(VAR_6, VAR_2,
   "Warning: torus-2QoS must override configured "
   "%s_sl2vl to generate deadlock-free routes\n", VAR_5);
}
