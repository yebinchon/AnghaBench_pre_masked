
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


 int FUNC_0 (char*,int,int,unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (struct ibmad_port const*,int *,TYPE_3__*,void*,void*) ;
 int FUNC_3 (void*,int ,int ,unsigned int) ;
 int FUNC_4 (void*,int ,int ) ;

uint8_t *FUNC_5(void *VAR_13, ib_portid_t * VAR_14,
          int VAR_15, unsigned VAR_16, unsigned VAR_17,
          unsigned VAR_18, const struct ibmad_port * VAR_19)
{
 ib_rpc_v1_t VAR_20 = { 0 };
 ib_rpc_t *VAR_21 = (ib_rpc_t *)(void *)&VAR_20;

 int VAR_22 = VAR_14->lid;
 void *VAR_23;

 FUNC_0("lid %u port %d mask 0x%x", VAR_22, VAR_15, VAR_16);

 if (VAR_22 == -1) {
  FUNC_1("only lid routed is supported");
  return ((void*)0);
 }

 if (!VAR_16)
  VAR_16 = ~0;

 VAR_20.mgtclass = VAR_11 | VAR_3;
 VAR_20.method = VAR_2;
 VAR_20.attr.id = VAR_18;

 FUNC_4(VAR_13, 0, VAR_4);


 FUNC_3(VAR_13, 0, VAR_10, VAR_15);
 FUNC_3(VAR_13, 0, VAR_6, VAR_16);
 VAR_16 = VAR_16 >> 16;
 if (VAR_18 == VAR_1)
  FUNC_3(VAR_13, 0, VAR_9, VAR_16);
 else
  FUNC_3(VAR_13, 0, VAR_5, VAR_16);
 VAR_20.attr.mod = 0;
 VAR_20.timeout = VAR_17;
 VAR_20.datasz = VAR_8;
 VAR_20.dataoffs = VAR_7;
 if (!VAR_14->qp)
  VAR_14->qp = 1;
 if (!VAR_14->qkey)
  VAR_14->qkey = VAR_0;

 VAR_23 = FUNC_2(VAR_19, VAR_21, VAR_14, VAR_13, VAR_13);
 VAR_12 = VAR_20.error;
 return VAR_23;
}
