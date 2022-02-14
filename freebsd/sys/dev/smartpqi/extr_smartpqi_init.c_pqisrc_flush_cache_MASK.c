
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int request ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;
struct TYPE_4__ {int halt_event; } ;
typedef TYPE_1__ pqisrc_bmic_flush_cache_t ;
typedef enum pqisrc_flush_cache_event_type { ____Placeholder_pqisrc_flush_cache_event_type } pqisrc_flush_cache_event_type ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7( pqisrc_softstate_t *VAR_4,
   enum pqisrc_flush_cache_event_type VAR_5)
{
 int VAR_6 = VAR_1;
 pqisrc_raid_req_t VAR_7;
 pqisrc_bmic_flush_cache_t *VAR_8 = ((void*)0);

 FUNC_1("IN\n");

 if (FUNC_6(VAR_4))
  return VAR_0;

 VAR_8 = FUNC_3(VAR_4, sizeof(pqisrc_bmic_flush_cache_t));
 if (!VAR_8) {
  FUNC_0("Failed to allocate memory for flush cache params\n");
  VAR_6 = VAR_0;
  return VAR_6;
 }

 VAR_8->halt_event = VAR_5;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_6 = FUNC_5(VAR_4, &VAR_7, VAR_8,
   sizeof(*VAR_8), VAR_3, 0,
   (uint8_t *)VAR_2, ((void*)0));
 if (VAR_6) {
  FUNC_0("error in build send raid req ret=%d\n", VAR_6);
 }

 if (VAR_8)
  FUNC_4(VAR_4, (void *)VAR_8,
   sizeof(pqisrc_bmic_flush_cache_t));

 FUNC_1("OUT\n");

 return VAR_6;
}
