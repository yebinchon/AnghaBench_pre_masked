
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int prtn_pkey_tbl; } ;
typedef TYPE_1__ osm_subn_t ;
struct TYPE_12__ {int name; int map_item; int pkey; } ;
typedef TYPE_2__ osm_prtn_t ;
typedef int osm_log_t ;


 int FUNC_0 (int *,int ,char*,char const*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__**) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,char const*) ;
 TYPE_2__* FUNC_7 (char const*,int ) ;

osm_prtn_t *FUNC_8(osm_log_t * VAR_2, osm_subn_t * VAR_3,
         const char *VAR_4, uint16_t VAR_5)
{
 osm_prtn_t *VAR_6 = ((void*)0), *VAR_7;

 VAR_5 &= FUNC_1((uint16_t) ~ 0x8000);
 if (!VAR_5) {
  if (VAR_4 && (VAR_6 = FUNC_6(VAR_3, VAR_4)))
   return VAR_6;
  if (!(VAR_5 = FUNC_4(VAR_3)))
   return ((void*)0);
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_0(VAR_2, VAR_0, "Unable to create"
   " partition \'%s\' (0x%04x)\n", VAR_4, FUNC_2(VAR_5));
  return ((void*)0);
 }

 VAR_7 = (osm_prtn_t *) FUNC_3(&VAR_3->prtn_pkey_tbl,
      VAR_6->pkey, &VAR_6->map_item);
 if (VAR_6 != VAR_7) {
  FUNC_0(VAR_2, VAR_1, "Duplicated partition"
   " definition: \'%s\' (0x%04x) prev name \'%s\'"
   ".  Will use it\n",
   VAR_4, FUNC_2(VAR_5), VAR_7->name);
  FUNC_5(VAR_3, &VAR_6);
  VAR_6 = VAR_7;
 }

 return VAR_6;
}
