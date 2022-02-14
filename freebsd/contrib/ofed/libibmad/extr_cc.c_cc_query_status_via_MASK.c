
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct ibmad_port {int dummy; } ;
typedef int ib_rpc_t ;
struct TYPE_7__ {unsigned int id; unsigned int mod; } ;
struct TYPE_8__ {unsigned int timeout; int rstatus; int cckey; int mgtclass; int dataoffs; int datasz; TYPE_1__ attr; int method; int member_0; } ;
typedef TYPE_2__ ib_rpc_cc_t ;
struct TYPE_9__ {int qp; scalar_t__ qkey; } ;
typedef TYPE_3__ ib_portid_t ;


 int FUNC_0 (char*,unsigned int,unsigned int,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (struct ibmad_port const*,int *,TYPE_3__*,void*,void*) ;
 int FUNC_2 (TYPE_3__*) ;

void *FUNC_3(void *VAR_8, ib_portid_t * VAR_9,
     unsigned VAR_10, unsigned VAR_11, unsigned VAR_12,
     int *VAR_13, const struct ibmad_port * VAR_14,
     uint64_t VAR_15)
{
 ib_rpc_cc_t VAR_16 = { 0 };
 void *VAR_17;

 FUNC_0("attr 0x%x mod 0x%x route %s", VAR_10, VAR_11, FUNC_2(VAR_9));
 VAR_16.method = VAR_7;
 VAR_16.attr.id = VAR_10;
 VAR_16.attr.mod = VAR_11;
 VAR_16.timeout = VAR_12;
 if (VAR_10 == VAR_0) {
  VAR_16.datasz = VAR_5;
  VAR_16.dataoffs = VAR_4;
 }
 else {
  VAR_16.datasz = VAR_3;
  VAR_16.dataoffs = VAR_2;
 }
 VAR_16.mgtclass = VAR_1;
 VAR_16.cckey = VAR_15;

 VAR_9->qp = 1;
 if (!VAR_9->qkey)
  VAR_9->qkey = VAR_6;

 VAR_17 = FUNC_1(VAR_14, (ib_rpc_t *)&VAR_16, VAR_9, VAR_8, VAR_8);
 if (VAR_13)
  *VAR_13 = VAR_16.rstatus;

 return VAR_17;
}
