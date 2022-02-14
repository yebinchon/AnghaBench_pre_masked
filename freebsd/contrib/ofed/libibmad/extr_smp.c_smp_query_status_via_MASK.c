
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct ibmad_port {int smp_mkey; } ;
struct TYPE_9__ {unsigned int id; unsigned int mod; } ;
struct TYPE_11__ {unsigned int timeout; int rstatus; int mgtclass; int mkey; int dataoffs; int datasz; TYPE_1__ attr; int method; int member_0; } ;
typedef TYPE_3__ ib_rpc_t ;
struct TYPE_10__ {int drslid; int drdlid; } ;
struct TYPE_12__ {scalar_t__ lid; scalar_t__ qp; scalar_t__ sl; TYPE_2__ drpath; } ;
typedef TYPE_4__ ib_portid_t ;


 int FUNC_0 (char*,unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (struct ibmad_port const*,TYPE_3__*,TYPE_4__*,void*,void*) ;
 int FUNC_2 (TYPE_4__*) ;

uint8_t *FUNC_3(void *VAR_5, ib_portid_t * VAR_6,
         unsigned VAR_7, unsigned VAR_8, unsigned VAR_9,
         int *VAR_10, const struct ibmad_port * VAR_11)
{
 ib_rpc_t VAR_12 = { 0 };
 uint8_t *VAR_13;

 FUNC_0("attr 0x%x mod 0x%x route %s", VAR_7, VAR_8, FUNC_2(VAR_6));
 VAR_12.method = VAR_0;
 VAR_12.attr.id = VAR_7;
 VAR_12.attr.mod = VAR_8;
 VAR_12.timeout = VAR_9;
 VAR_12.datasz = VAR_4;
 VAR_12.dataoffs = VAR_3;
 VAR_12.mkey = VAR_11->smp_mkey;

 if ((VAR_6->lid <= 0) ||
     (VAR_6->drpath.drslid == 0xffff) ||
     (VAR_6->drpath.drdlid == 0xffff))
  VAR_12.mgtclass = VAR_2;
 else
  VAR_12.mgtclass = VAR_1;

 VAR_6->sl = 0;
 VAR_6->qp = 0;

 VAR_13 = FUNC_1(VAR_11, &VAR_12, VAR_6, VAR_5, VAR_5);
 if (VAR_10)
  *VAR_10 = VAR_12.rstatus;
 return VAR_13;
}
