
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct ibnd_config {int mkey; int retries; int timeout_ms; int member_0; } ;
struct ibmad_port {int dummy; } ;
struct TYPE_20__ {int total_smps; } ;
typedef TYPE_2__ smp_engine_t ;
struct TYPE_21__ {scalar_t__ initial_hops; int selfportid; struct ibnd_config* cfg; TYPE_5__* f_int; } ;
typedef TYPE_3__ ibnd_scan_t ;
typedef int ibnd_fabric_t ;
struct TYPE_19__ {scalar_t__ cnt; } ;
struct TYPE_22__ {TYPE_1__ drpath; int member_0; } ;
typedef TYPE_4__ ib_portid_t ;
struct TYPE_18__ {int maxhops_discovered; int total_mads_used; } ;
struct TYPE_23__ {TYPE_14__ fabric; } ;
typedef TYPE_5__ f_internal_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_14__*) ;
 scalar_t__ FUNC_5 (int *,int *,int *,struct ibmad_port*) ;
 int FUNC_6 (TYPE_14__*) ;
 int FUNC_7 (struct ibmad_port*) ;
 struct ibmad_port* FUNC_8 (char*,int,int*,int) ;
 int FUNC_9 (struct ibmad_port*,int ) ;
 int FUNC_10 (struct ibmad_port*,int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_15 (struct ibnd_config*,struct ibnd_config*) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,char*,int,TYPE_3__*,struct ibnd_config*) ;
 int FUNC_18 (struct ibmad_port*,int ) ;

ibnd_fabric_t *FUNC_19(char * VAR_2, int VAR_3,
        ib_portid_t * VAR_4,
        struct ibnd_config *VAR_5)
{
 struct ibnd_config VAR_6 = { 0 };
 f_internal_t *VAR_7 = ((void*)0);
 ib_portid_t VAR_8 = { 0 };
 smp_engine_t VAR_9;
 ibnd_scan_t VAR_10;
 struct ibmad_port *VAR_11;
 int VAR_12 = 2;
 int VAR_13[2] = { VAR_0, VAR_1 };


 if (!VAR_4)
  VAR_4 = &VAR_8;

 if (FUNC_15(&VAR_6, VAR_5)) {
  FUNC_1("Invalid ibnd_config\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_2();
 if (!VAR_7) {
  FUNC_1("OOM: failed to calloc ibnd_fabric_t\n");
  return ((void*)0);
 }

 FUNC_11(&VAR_10.selfportid, 0, sizeof(VAR_10.selfportid));
 VAR_10.f_int = VAR_7;
 VAR_10.cfg = &VAR_6;
 VAR_10.initial_hops = VAR_4->drpath.cnt;

 VAR_11 = FUNC_8(VAR_2, VAR_3, VAR_13, VAR_12);
 if (!VAR_11) {
  FUNC_1("can't open MAD port (%s:%d)\n", VAR_2, VAR_3);
  return (((void*)0));
 }
 FUNC_10(VAR_11, VAR_5->timeout_ms);
 FUNC_9(VAR_11, VAR_5->retries);
 FUNC_18(VAR_11, VAR_5->mkey);

 if (FUNC_5(&VAR_10.selfportid,
    ((void*)0), ((void*)0), VAR_11) < 0) {
  FUNC_1("Failed to resolve self\n");
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 FUNC_7(VAR_11);

 if (FUNC_17(&VAR_9, VAR_2, VAR_3, &VAR_10, &VAR_6)) {
  FUNC_3(VAR_7);
  return (((void*)0));
 }

 FUNC_0("from %s\n", FUNC_12(VAR_4));

 if (!FUNC_14(&VAR_9, VAR_4, ((void*)0)))
  if (FUNC_13(&VAR_9) != 0)
   goto error;

 VAR_7->fabric.total_mads_used = VAR_9.total_smps;
 VAR_7->fabric.maxhops_discovered += VAR_10.initial_hops;

 if (FUNC_4(&VAR_7->fabric))
  goto error;

 FUNC_16(&VAR_9);
 return (ibnd_fabric_t *)VAR_7;
error:
 FUNC_16(&VAR_9);
 FUNC_6(&VAR_7->fabric);
 return ((void*)0);
}
