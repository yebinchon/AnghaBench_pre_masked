
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int node; } ;
typedef TYPE_1__ ibnd_node_cache_t ;
typedef int ibnd_fabric_t ;
struct TYPE_16__ {int from_node_guid; TYPE_3__* f_int; } ;
typedef TYPE_2__ ibnd_fabric_cache_t ;
struct TYPE_18__ {int from_node; } ;
struct TYPE_17__ {TYPE_5__ fabric; } ;
typedef TYPE_3__ f_internal_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int,TYPE_2__*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*,char,int) ;
 int FUNC_14 (char const*,int ) ;
 int FUNC_15 (int ) ;

ibnd_fabric_t *FUNC_16(const char *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 ibnd_fabric_cache_t *VAR_6 = ((void*)0);
 f_internal_t *VAR_7 = ((void*)0);
 ibnd_node_cache_t *VAR_8 = ((void*)0);
 int VAR_9 = -1;
 unsigned int VAR_10;

 if (!VAR_2) {
  FUNC_0("file parameter NULL\n");
  return ((void*)0);
 }

 if ((VAR_9 = FUNC_14(VAR_2, VAR_0)) < 0) {
  FUNC_0("open: %s\n", FUNC_15(VAR_1));
  return ((void*)0);
 }

 VAR_6 =
     (ibnd_fabric_cache_t *) FUNC_12(sizeof(ibnd_fabric_cache_t));
 if (!VAR_6) {
  FUNC_0("OOM: fabric_cache\n");
  goto cleanup;
 }
 FUNC_13(VAR_6, '\0', sizeof(ibnd_fabric_cache_t));

 VAR_7 = FUNC_8();
 if (!VAR_7) {
  FUNC_0("OOM: fabric\n");
  goto cleanup;
 }

 VAR_6->f_int = VAR_7;

 if (FUNC_3(VAR_9, VAR_6, &VAR_4, &VAR_5) < 0)
  goto cleanup;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (FUNC_4(VAR_9, VAR_6) < 0)
   goto cleanup;
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (FUNC_5(VAR_9, VAR_6) < 0)
   goto cleanup;
 }


 if (!(VAR_8 =
       FUNC_2(VAR_6, VAR_6->from_node_guid))) {
  FUNC_0("Cache invalid: cannot find from node\n");
  goto cleanup;
 }
 VAR_7->fabric.from_node = VAR_8->node;

 if (FUNC_6(VAR_6) < 0)
  goto cleanup;

 if (FUNC_7(VAR_6) < 0)
  goto cleanup;

 if (FUNC_10(&VAR_7->fabric))
  goto cleanup;

 FUNC_1(VAR_6);
 FUNC_9(VAR_9);
 return (ibnd_fabric_t *)&VAR_7->fabric;

cleanup:
 FUNC_11((ibnd_fabric_t *)VAR_7);
 FUNC_1(VAR_6);
 FUNC_9(VAR_9);
 return ((void*)0);
}
