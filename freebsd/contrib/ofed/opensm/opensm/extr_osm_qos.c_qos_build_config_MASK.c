
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_9__ {int * raw_vl_by_sl; } ;
struct qos_config {scalar_t__ max_vls; TYPE_3__ sl2vl; TYPE_2__* vlarb_low; TYPE_1__* vlarb_high; void* vl_high_limit; } ;
struct TYPE_10__ {scalar_t__ max_vls; scalar_t__ high_limit; char* vlarb_high; char* vlarb_low; char* sl2vl; } ;
typedef TYPE_4__ osm_qos_options_t ;
struct TYPE_8__ {int * vl_entry; } ;
struct TYPE_7__ {int * vl_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (struct qos_config*,int ,int) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int *) ;

__attribute__((used)) static void FUNC_3(struct qos_config *VAR_7, osm_qos_options_t * VAR_8,
        osm_qos_options_t * VAR_9)
{
 int VAR_10;
 const char *VAR_11;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 if (VAR_8->max_vls > 0)
  VAR_7->max_vls = VAR_8->max_vls;
 else {
  if (VAR_9->max_vls > 0)
   VAR_7->max_vls = VAR_9->max_vls;
  else
   VAR_7->max_vls = VAR_3;
 }

 if (VAR_8->high_limit >= 0)
  VAR_7->vl_high_limit = (uint8_t) VAR_8->high_limit;
 else {
  if (VAR_9->high_limit >= 0)
   VAR_7->vl_high_limit = (uint8_t) VAR_9->high_limit;
  else
   VAR_7->vl_high_limit = (uint8_t) VAR_2;
 }

 if (VAR_8->vlarb_high)
  VAR_11 = VAR_8->vlarb_high;
 else {
  if (VAR_9->vlarb_high)
   VAR_11 = VAR_9->vlarb_high;
  else
   VAR_11 = VAR_5;
 }
 for (VAR_10 = 0; VAR_10 < 2 * VAR_1; VAR_10++) {
  VAR_11 += FUNC_2(VAR_11,
           &VAR_7->vlarb_high[VAR_10 /
       VAR_1].
           vl_entry[VAR_10 %
      VAR_1]);
 }

 if (VAR_8->vlarb_low)
  VAR_11 = VAR_8->vlarb_low;
 else {
  if (VAR_9->vlarb_low)
   VAR_11 = VAR_9->vlarb_low;
  else
   VAR_11 = VAR_6;
 }
 for (VAR_10 = 0; VAR_10 < 2 * VAR_1; VAR_10++) {
  VAR_11 += FUNC_2(VAR_11,
           &VAR_7->vlarb_low[VAR_10 /
             VAR_1].
           vl_entry[VAR_10 %
      VAR_1]);
 }

 VAR_11 = VAR_8->sl2vl ? VAR_8->sl2vl : VAR_9->sl2vl;
 if (VAR_8->sl2vl)
  VAR_11 = VAR_8->sl2vl;
 else {
  if (VAR_9->sl2vl)
   VAR_11 = VAR_9->sl2vl;
  else
   VAR_11 = VAR_4;
 }
 for (VAR_10 = 0; VAR_10 < VAR_0 / 2; VAR_10++)
  VAR_11 += FUNC_1(VAR_11, &VAR_7->sl2vl.raw_vl_by_sl[VAR_10]);
}
