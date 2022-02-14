
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct qos_config {int * vlarb_high; int * vlarb_low; } ;
typedef int osm_sm_t ;
struct TYPE_6__ {unsigned int vl_arb_low_cap; unsigned int vl_arb_high_cap; } ;
struct TYPE_5__ {TYPE_2__ port_info; } ;
typedef TYPE_1__ osm_physp_t ;
typedef TYPE_2__ ib_port_info_t ;
typedef int ib_api_status_t ;
typedef int cl_qlist_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ,unsigned int,int *,unsigned int,int,int *) ;

__attribute__((used)) static ib_api_status_t FUNC_1(osm_sm_t * VAR_2, osm_physp_t * VAR_3,
        uint8_t VAR_4, unsigned VAR_5,
        const struct qos_config *VAR_6,
        cl_qlist_t *VAR_7)
{
 ib_api_status_t VAR_8 = VAR_1;
 ib_port_info_t *VAR_9 = &VAR_3->port_info;
 unsigned VAR_10;

 if (VAR_9->vl_arb_low_cap > 0) {
  VAR_10 = VAR_9->vl_arb_low_cap < VAR_0 ?
      VAR_9->vl_arb_low_cap : VAR_0;
  if ((VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
             VAR_5,
             &VAR_6->vlarb_low[0],
             VAR_10, 0,
             VAR_7)) != VAR_1)
   return VAR_8;
 }
 if (VAR_9->vl_arb_low_cap > VAR_0) {
  VAR_10 = VAR_9->vl_arb_low_cap % VAR_0;
  if ((VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
             VAR_5,
             &VAR_6->vlarb_low[1],
             VAR_10, 1,
             VAR_7)) != VAR_1)
   return VAR_8;
 }
 if (VAR_9->vl_arb_high_cap > 0) {
  VAR_10 = VAR_9->vl_arb_high_cap < VAR_0 ?
      VAR_9->vl_arb_high_cap : VAR_0;
  if ((VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
             VAR_5,
             &VAR_6->vlarb_high[0],
             VAR_10, 2,
             VAR_7)) != VAR_1)
   return VAR_8;
 }
 if (VAR_9->vl_arb_high_cap > VAR_0) {
  VAR_10 = VAR_9->vl_arb_high_cap % VAR_0;
  if ((VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
             VAR_5,
             &VAR_6->vlarb_high[1],
             VAR_10, 3,
             VAR_7)) != VAR_1)
   return VAR_8;
 }

 return VAR_8;
}
