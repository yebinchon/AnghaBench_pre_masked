
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_9__ {char* partition_config_file; } ;
struct TYPE_10__ {int prtn_pkey_tbl; TYPE_1__ opt; } ;
typedef TYPE_2__ osm_subn_t ;
struct TYPE_11__ {int full_guid_tbl; int part_guid_tbl; int map_item; } ;
typedef TYPE_3__ osm_prtn_t ;
typedef int osm_log_t ;
typedef scalar_t__ ib_api_status_t ;
typedef int cl_map_item_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*,char const*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__**) ;
 scalar_t__ FUNC_9 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (int ) ;

ib_api_status_t FUNC_12(osm_log_t * VAR_8, osm_subn_t * VAR_9)
{
 struct stat VAR_10;
 const char *VAR_11;
 boolean_t VAR_12 = VAR_5;
 boolean_t VAR_13 = VAR_0;
 ib_api_status_t VAR_14 = VAR_1;
 cl_map_item_t *VAR_15;
 osm_prtn_t *VAR_16;

 VAR_11 = VAR_9->opt.partition_config_file ?
     VAR_9->opt.partition_config_file : VAR_2;
 if (FUNC_10(VAR_11, &VAR_10)) {
  FUNC_0(VAR_8, VAR_4, "Partition configuration "
   "%s is not accessible (%s)\n", VAR_11,
   FUNC_11(VAR_6));
  VAR_12 = VAR_0;
 }

retry_default:

 VAR_15 = FUNC_4(&VAR_9->prtn_pkey_tbl);
 while (VAR_15 != FUNC_3(&VAR_9->prtn_pkey_tbl)) {
  VAR_16 = (osm_prtn_t *) VAR_15;
  VAR_15 = FUNC_5(&VAR_16->map_item);
  FUNC_2(&VAR_16->part_guid_tbl);
  FUNC_2(&VAR_16->full_guid_tbl);
 }

 VAR_7 = 0;

 VAR_14 = FUNC_9(VAR_8, VAR_9, !VAR_12);
 if (VAR_14 != VAR_1)
  goto _err;

 if (VAR_12 && FUNC_7(VAR_8, VAR_9, VAR_11)) {
  FUNC_0(VAR_8, VAR_4, "Partition configuration "
   "was not fully processed\n");
  VAR_13 = VAR_5;
 }


 VAR_15 = FUNC_4(&VAR_9->prtn_pkey_tbl);
 while (VAR_15 != FUNC_3(&VAR_9->prtn_pkey_tbl)) {
  VAR_16 = (osm_prtn_t *) VAR_15;
  VAR_15 = FUNC_5(&VAR_16->map_item);
  if (FUNC_1(&VAR_16->part_guid_tbl) == 0 &&
      FUNC_1(&VAR_16->full_guid_tbl) == 0) {
   FUNC_6(&VAR_9->prtn_pkey_tbl,
         (cl_map_item_t *) VAR_16);
   FUNC_8(VAR_9, &VAR_16);
  }
 }

 if (VAR_12 && VAR_13) {
  FUNC_0(VAR_8, VAR_3, "Partition configuration "
   "in error; retrying with default config\n");
  VAR_12 = VAR_0;
  goto retry_default;
 }

_err:
 return VAR_14;
}
