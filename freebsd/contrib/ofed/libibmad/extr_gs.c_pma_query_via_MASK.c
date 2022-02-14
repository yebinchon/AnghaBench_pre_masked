
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void uint8_t ;
struct ibmad_port {int dummy; } ;
struct TYPE_6__ {unsigned int id; scalar_t__ mod; } ;
struct TYPE_7__ {int mgtclass; unsigned int timeout; int error; int dataoffs; int datasz; TYPE_1__ attr; int method; int member_0; } ;
typedef TYPE_2__ ib_rpc_v1_t ;
typedef int ib_rpc_t ;
struct TYPE_8__ {int lid; int qp; scalar_t__ qkey; } ;
typedef TYPE_3__ ib_portid_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (struct ibmad_port const*,int *,TYPE_3__*,void*,void*) ;
 int FUNC_3 (void*,int ,int ,int) ;

uint8_t *FUNC_4(void *VAR_8, ib_portid_t * VAR_9, int VAR_10,
         unsigned VAR_11, unsigned VAR_12,
         const struct ibmad_port * VAR_13)
{
 ib_rpc_v1_t VAR_14 = { 0 };
 ib_rpc_t *VAR_15 = (ib_rpc_t *)(void *)&VAR_14;
 int VAR_16 = VAR_9->lid;
 void *VAR_17;

 FUNC_0("lid %u port %d", VAR_16, VAR_10);

 if (VAR_16 == -1) {
  FUNC_1("only lid routed is supported");
  return ((void*)0);
 }

 VAR_14.mgtclass = VAR_6 | VAR_2;
 VAR_14.method = VAR_1;
 VAR_14.attr.id = VAR_12;


 FUNC_3(VAR_8, 0, VAR_5, VAR_10);
 VAR_14.attr.mod = 0;
 VAR_14.timeout = VAR_11;
 VAR_14.datasz = VAR_4;
 VAR_14.dataoffs = VAR_3;

 if (!VAR_9->qp)
  VAR_9->qp = 1;
 if (!VAR_9->qkey)
  VAR_9->qkey = VAR_0;

 VAR_17 = FUNC_2(VAR_13, VAR_15, VAR_9, VAR_8, VAR_8);
 VAR_7 = VAR_14.error;
 return VAR_17;
}
