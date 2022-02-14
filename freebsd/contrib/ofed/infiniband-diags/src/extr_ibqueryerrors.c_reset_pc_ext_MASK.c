
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct ibmad_port {int dummy; } ;
struct TYPE_7__ {scalar_t__ mod; int id; } ;
struct TYPE_8__ {unsigned int timeout; int dataoffs; int datasz; TYPE_1__ attr; int method; int mgtclass; int member_0; } ;
typedef TYPE_2__ ib_rpc_t ;
struct TYPE_9__ {int lid; int qp; scalar_t__ qkey; } ;
typedef TYPE_3__ ib_portid_t ;


 int FUNC_0 (char*,int,int,unsigned int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (struct ibmad_port const*,TYPE_2__*,TYPE_3__*,void*,void*) ;
 int FUNC_3 (void*,int ,int ,unsigned int) ;
 int FUNC_4 (void*,int ,int ) ;

uint8_t *FUNC_5(void *VAR_9, ib_portid_t * VAR_10,
        int VAR_11, unsigned VAR_12, unsigned VAR_13,
        const struct ibmad_port * VAR_14)
{
 ib_rpc_t VAR_15 = { 0 };
 int VAR_16 = VAR_10->lid;

 FUNC_0("lid %u port %d mask 0x%x", VAR_16, VAR_11, VAR_12);

 if (VAR_16 == -1) {
  FUNC_1("only lid routed is supported");
  return ((void*)0);
 }

 if (!VAR_12)
  VAR_12 = ~0;

 VAR_15.mgtclass = VAR_8;
 VAR_15.method = VAR_2;
 VAR_15.attr.id = VAR_1;

 FUNC_4(VAR_9, 0, VAR_3);


 FUNC_3(VAR_9, 0, VAR_7, VAR_11);
 FUNC_3(VAR_9, 0, VAR_6, VAR_12);
 VAR_15.attr.mod = 0;
 VAR_15.timeout = VAR_13;
 VAR_15.datasz = VAR_5;
 VAR_15.dataoffs = VAR_4;
 if (!VAR_10->qp)
  VAR_10->qp = 1;
 if (!VAR_10->qkey)
  VAR_10->qkey = VAR_0;

 return FUNC_2(VAR_14, &VAR_15, VAR_10, VAR_9, VAR_9);
}
