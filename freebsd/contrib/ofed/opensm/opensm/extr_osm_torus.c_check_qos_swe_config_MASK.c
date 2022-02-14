
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
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,char const*,char*,int *) ;

__attribute__((used)) static
void FUNC_2(osm_qos_options_t *VAR_3,
     osm_qos_options_t *VAR_4, osm_log_t *VAR_5)
{
 const char *VAR_6, *VAR_7;
 bool VAR_8;
 unsigned VAR_9;

 VAR_9 = VAR_4->max_vls;
 if (VAR_3->max_vls > 0)
  VAR_9 = VAR_3->max_vls;

 if (VAR_9 > 0 && VAR_9 < 8)
  FUNC_0(VAR_5, VAR_2,
   "Warning: full torus-2QoS functionality not available "
   "for configured %s_max_vls = %d\n",
   (VAR_3->max_vls > 0 ? "qos_swe" : "qos"), VAR_3->max_vls);

 VAR_6 = VAR_3->vlarb_high;
 VAR_8 = 0;
 VAR_7 = "qos_swe";
 if (!VAR_6) {
  VAR_6 = VAR_4->vlarb_high;
  VAR_7 = "qos";
 }
 if (!VAR_6) {
  VAR_6 = VAR_0;
  VAR_8 = 1;
 }
 FUNC_1(VAR_6, VAR_8, VAR_7, "high", VAR_5);

 VAR_6 = VAR_3->vlarb_low;
 VAR_8 = 0;
 VAR_7 = "qos_swe";
 if (!VAR_6) {
  VAR_6 = VAR_4->vlarb_low;
  VAR_7 = "qos";
 }
 if (!VAR_6) {
  VAR_6 = VAR_1;
  VAR_8 = 1;
 }
 FUNC_1(VAR_6, VAR_8, VAR_7, "low", VAR_5);

 if (VAR_3->sl2vl)
  FUNC_0(VAR_5, VAR_2,
   "Warning: torus-2QoS must override configured "
   "qos_swe_sl2vl to generate deadlock-free routes\n");
}
