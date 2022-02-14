
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int p_log; int cache_valid; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_10__ {size_t num_ports; TYPE_1__* ports; } ;
typedef TYPE_3__ cache_switch_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ is_leaf; scalar_t__ remote_lid_ho; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,scalar_t__,size_t,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(osm_ucast_mgr_t * VAR_2, uint16_t VAR_3,
         uint8_t VAR_4, uint16_t VAR_5,
         boolean_t VAR_6)
{
 cache_switch_t *VAR_7;

 FUNC_1(VAR_2->p_log);

 if (!VAR_2->cache_valid)
  goto Exit;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_0(VAR_2->p_log, VAR_1,
   "Found uncached switch/link (lid %u, port %u)\n",
   VAR_3, VAR_4);
  FUNC_4(VAR_2);
  goto Exit;
 }

 if (VAR_4 >= VAR_7->num_ports ||
     !VAR_7->ports[VAR_4].remote_lid_ho) {
  FUNC_0(VAR_2->p_log, VAR_1,
   "Found uncached switch link (lid %u, port %u)\n",
   VAR_3, VAR_4);
  FUNC_4(VAR_2);
  goto Exit;
 }

 if (VAR_7->ports[VAR_4].remote_lid_ho != VAR_5) {
  FUNC_0(VAR_2->p_log, VAR_1,
   "Remote lid change on switch lid %u, port %u "
   "(was %u, now %u)\n", VAR_3, VAR_4,
   VAR_7->ports[VAR_4].remote_lid_ho,
   VAR_5);
  FUNC_4(VAR_2);
  goto Exit;
 }

 if ((VAR_7->ports[VAR_4].is_leaf && !VAR_6) ||
     (!VAR_7->ports[VAR_4].is_leaf && VAR_6)) {
  FUNC_0(VAR_2->p_log, VAR_1,
   "Remote node type change on switch lid %u, port %u\n",
   VAR_3, VAR_4);
  FUNC_4(VAR_2);
  goto Exit;
 }

 FUNC_0(VAR_2->p_log, VAR_1,
  "New link from lid %u, port %u to lid %u - "
  "found in cache\n", VAR_3, VAR_4, VAR_5);



 VAR_7->ports[VAR_4].remote_lid_ho = 0;
 VAR_7->ports[VAR_4].is_leaf = VAR_0;
Exit:
 FUNC_2(VAR_2->p_log);
}
