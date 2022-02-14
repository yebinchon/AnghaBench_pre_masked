
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int smi_agent; int smi_dir_agent; TYPE_1__* cfg; int umad_fd; } ;
typedef TYPE_2__ smp_engine_t ;
struct TYPE_11__ {scalar_t__ mgtclass; } ;
struct TYPE_10__ {int path; TYPE_4__ rpc; } ;
typedef TYPE_3__ ibnd_smp_t ;
typedef TYPE_4__ ib_rpc_t ;
struct TYPE_8__ {int retries; int timeout_ms; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_4__*,int *,int *,int *) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ,int,int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(ibnd_smp_t * VAR_4, smp_engine_t * VAR_5)
{
 int VAR_6 = 0;
 uint8_t VAR_7[1024];
 ib_rpc_t *VAR_8 = &VAR_4->rpc;
 int VAR_9 = 0;

 FUNC_2(VAR_7, 0, FUNC_4() + VAR_1);

 if (VAR_8->mgtclass == VAR_2) {
  VAR_9 = VAR_5->smi_agent;
 } else if (VAR_8->mgtclass == VAR_3) {
  VAR_9 = VAR_5->smi_dir_agent;
 } else {
  FUNC_0("Invalid class for RPC\n");
  return (-VAR_0);
 }

 if ((VAR_6 = FUNC_1(VAR_7, &VAR_4->rpc, &VAR_4->path, ((void*)0), ((void*)0)))
     < 0) {
  FUNC_0("mad_build_pkt failed; %d\n", VAR_6);
  return VAR_6;
 }

 if ((VAR_6 = FUNC_3(VAR_5->umad_fd, VAR_9, VAR_7, VAR_1,
       VAR_5->cfg->timeout_ms, VAR_5->cfg->retries)) < 0) {
  FUNC_0("send failed; %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
