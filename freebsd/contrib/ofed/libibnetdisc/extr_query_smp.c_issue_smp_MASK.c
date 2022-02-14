
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* cfg; } ;
typedef TYPE_5__ smp_engine_t ;
typedef int smp_comp_cb_t ;
struct TYPE_14__ {unsigned int id; unsigned int mod; } ;
struct TYPE_17__ {int mgtclass; int mkey; int trid; int dataoffs; int datasz; int timeout; TYPE_1__ attr; int method; } ;
struct TYPE_16__ {int drslid; int drdlid; } ;
struct TYPE_20__ {scalar_t__ lid; scalar_t__ qp; scalar_t__ sl; TYPE_3__ drpath; } ;
struct TYPE_19__ {TYPE_4__ rpc; TYPE_7__ path; void* cb_data; int cb; } ;
typedef TYPE_6__ ibnd_smp_t ;
typedef TYPE_7__ ib_portid_t ;
struct TYPE_15__ {int mkey; int timeout_ms; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*) ;

int FUNC_5(smp_engine_t * VAR_6, ib_portid_t * VAR_7,
       unsigned VAR_8, unsigned VAR_9, smp_comp_cb_t VAR_10, void *VAR_11)
{
 ibnd_smp_t *VAR_12 = FUNC_1(1, sizeof *VAR_12);
 if (!VAR_12) {
  FUNC_0("OOM\n");
  return -VAR_0;
 }

 VAR_12->cb = VAR_10;
 VAR_12->cb_data = VAR_11;
 VAR_12->path = *VAR_7;
 VAR_12->rpc.method = VAR_1;
 VAR_12->rpc.attr.id = VAR_8;
 VAR_12->rpc.attr.mod = VAR_9;
 VAR_12->rpc.timeout = VAR_6->cfg->timeout_ms;
 VAR_12->rpc.datasz = VAR_5;
 VAR_12->rpc.dataoffs = VAR_4;
 VAR_12->rpc.trid = FUNC_2();
 VAR_12->rpc.mkey = VAR_6->cfg->mkey;

 if (VAR_7->lid <= 0 || VAR_7->drpath.drslid == 0xffff ||
     VAR_7->drpath.drdlid == 0xffff)
  VAR_12->rpc.mgtclass = VAR_3;
 else
  VAR_12->rpc.mgtclass = VAR_2;

 VAR_7->sl = 0;
 VAR_7->qp = 0;

 FUNC_4(VAR_6, VAR_12);
 return FUNC_3(VAR_6);
}
