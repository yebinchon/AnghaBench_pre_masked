
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int tbl ;
struct TYPE_13__ {int list_item; } ;
typedef TYPE_1__ qos_mad_item_t ;
typedef int osm_sm_t ;
struct TYPE_14__ {int port_info; } ;
typedef TYPE_2__ osm_physp_t ;
struct TYPE_15__ {int* raw_vl_by_sl; } ;
typedef TYPE_3__ ib_slvl_table_t ;
typedef int ib_api_status_t ;
typedef int cl_qlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_5 (int *,TYPE_2__*,int,int*,int ,int ) ;

__attribute__((used)) static ib_api_status_t FUNC_6(osm_sm_t * VAR_4, osm_physp_t * VAR_5,
       uint8_t VAR_6, uint32_t VAR_7,
       unsigned VAR_8,
       const ib_slvl_table_t * VAR_9,
       cl_qlist_t *VAR_10)
{
 ib_slvl_table_t VAR_11, *VAR_12;
 unsigned VAR_13;
 uint8_t VAR_14, VAR_15;
 int VAR_16;
 qos_mad_item_t *VAR_17;

 VAR_13 = (1 << (FUNC_1(&VAR_5->port_info) - 1)) - 1;

 for (VAR_16 = 0; VAR_16 < VAR_2 / 2; VAR_16++) {
  VAR_14 = VAR_9->raw_vl_by_sl[VAR_16] >> 4;
  VAR_15 = VAR_9->raw_vl_by_sl[VAR_16] & 0xf;
  if (VAR_14 != 15)
   VAR_14 &= VAR_13;
  if (VAR_15 != 15)
   VAR_15 &= VAR_13;
  VAR_11.raw_vl_by_sl[VAR_16] = (VAR_14 << 4) | VAR_15;
 }

 VAR_12 = FUNC_4(VAR_5, VAR_6);

 if (!VAR_8 && !FUNC_2(VAR_12, &VAR_11, sizeof(VAR_11)))
  return VAR_3;

 VAR_17 = FUNC_5(VAR_4, VAR_5, sizeof(VAR_11), (uint8_t *) & VAR_11,
       VAR_1, VAR_7);
 if (!VAR_17)
  return VAR_0;





 FUNC_3(VAR_12, 0, sizeof(VAR_11));

 FUNC_0(VAR_10, &VAR_17->list_item);
 return VAR_3;
}
