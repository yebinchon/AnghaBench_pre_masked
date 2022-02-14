
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sm_port_guid; } ;
typedef TYPE_1__ osm_subn_t ;
struct TYPE_13__ {int part_guid_tbl; } ;
typedef TYPE_2__ osm_prtn_t ;
typedef int osm_log_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__*,int ,int ,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,TYPE_2__*,int ,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,TYPE_1__*,char*,int ) ;

__attribute__((used)) static ib_api_status_t FUNC_5(osm_log_t * VAR_10, osm_subn_t * VAR_11,
      boolean_t VAR_12)
{
 ib_api_status_t VAR_13 = VAR_3;
 osm_prtn_t *VAR_14;

 VAR_14 = FUNC_4(VAR_10, VAR_11, "Default",
         VAR_1);
 if (!VAR_14)
  goto _err;
 VAR_13 = FUNC_1(VAR_10, VAR_11, VAR_14, 0, VAR_12, VAR_0);
 if (VAR_13 != VAR_2)
  goto _err;
 FUNC_0(&VAR_14->part_guid_tbl, VAR_11->sm_port_guid);
 VAR_13 =
     FUNC_3(VAR_10, VAR_11, VAR_14, VAR_11->sm_port_guid, VAR_8, VAR_0);


 if (VAR_12)
  FUNC_2(VAR_10, VAR_11, VAR_14, VAR_5,
         VAR_4, VAR_6,
         0, VAR_7, 0, 0,
         &VAR_9);

_err:
 return VAR_13;
}
