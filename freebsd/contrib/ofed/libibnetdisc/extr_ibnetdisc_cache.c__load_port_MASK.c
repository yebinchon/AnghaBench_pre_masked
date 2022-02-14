
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_7__ {void* portnum; int guid; } ;
struct TYPE_8__ {void* lmc; void* remoteport_flag; TYPE_1__ remoteport_cache_key; int node_guid; int info; int base_lid; void* ext_portnum; void* portnum; int guid; struct TYPE_8__* port; } ;
typedef TYPE_2__ ibnd_port_t ;
typedef TYPE_2__ ibnd_port_cache_t ;
typedef int ibnd_fabric_cache_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void**,int *) ;
 scalar_t__ FUNC_2 (void**,int *) ;
 scalar_t__ FUNC_3 (void**,void**) ;
 scalar_t__ FUNC_4 (void**,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int,void**,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,char,int) ;
 int FUNC_9 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_10(int VAR_3, ibnd_fabric_cache_t * VAR_4)
{
 uint8_t VAR_5[VAR_0];
 ibnd_port_cache_t *VAR_6 = ((void*)0);
 ibnd_port_t *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 uint8_t VAR_9;

 VAR_6 = (ibnd_port_cache_t *) FUNC_7(sizeof(ibnd_port_cache_t));
 if (!VAR_6) {
  FUNC_0("OOM: port_cache\n");
  return -1;
 }
 FUNC_8(VAR_6, '\0', sizeof(ibnd_port_cache_t));

 VAR_7 = (ibnd_port_t *) FUNC_7(sizeof(ibnd_port_t));
 if (!VAR_7) {
  FUNC_0("OOM: port\n");
  FUNC_5(VAR_6);
  return -1;
 }
 FUNC_8(VAR_7, '\0', sizeof(ibnd_port_t));

 VAR_6->port = VAR_7;

 if (FUNC_6(VAR_3, VAR_5, VAR_1) < 0)
  goto cleanup;

 VAR_8 += FUNC_2(VAR_5 + VAR_8, &VAR_7->guid);
 VAR_8 += FUNC_3(VAR_5 + VAR_8, &VAR_9);
 VAR_7->portnum = VAR_9;
 VAR_8 += FUNC_3(VAR_5 + VAR_8, &VAR_9);
 VAR_7->ext_portnum = VAR_9;
 VAR_8 += FUNC_1(VAR_5 + VAR_8, &VAR_7->base_lid);
 VAR_8 += FUNC_3(VAR_5 + VAR_8, &VAR_7->lmc);
 VAR_8 += FUNC_4(VAR_5 + VAR_8, VAR_7->info, VAR_2);
 VAR_8 += FUNC_2(VAR_5 + VAR_8, &VAR_6->node_guid);
 VAR_8 += FUNC_3(VAR_5 + VAR_8, &VAR_6->remoteport_flag);
 VAR_8 +=
     FUNC_2(VAR_5 + VAR_8, &VAR_6->remoteport_cache_key.guid);
 VAR_8 +=
     FUNC_3(VAR_5 + VAR_8,
    &VAR_6->remoteport_cache_key.portnum);

 FUNC_9(VAR_6, VAR_4);

 return 0;

cleanup:
 FUNC_5(VAR_7);
 FUNC_5(VAR_6);
 return -1;
}
