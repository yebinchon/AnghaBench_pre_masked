
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct ibmad_port {int dummy; } ;
struct TYPE_11__ {int recsz; int trid; int mask; int mod; int attrid; int method; } ;
typedef TYPE_2__ ib_sa_call_t ;
struct TYPE_10__ {int mod; int id; } ;
struct TYPE_12__ {unsigned int timeout; int recsz; int trid; int dataoffs; int datasz; int mask; TYPE_1__ attr; int method; int mgtclass; int member_0; } ;
typedef TYPE_3__ ib_rpc_t ;
struct TYPE_13__ {scalar_t__ lid; int qp; scalar_t__ qkey; } ;
typedef TYPE_4__ ib_portid_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (struct ibmad_port const*,TYPE_3__*,TYPE_4__*,int ,void*) ;
 int FUNC_3 (TYPE_4__*) ;

uint8_t *FUNC_4(const struct ibmad_port *VAR_4, void *VAR_5,
       ib_portid_t * VAR_6, ib_sa_call_t * VAR_7, unsigned VAR_8)
{
 ib_rpc_t VAR_9 = { 0 };
 uint8_t *VAR_10;

 FUNC_0("attr 0x%x mod 0x%x route %s", VAR_7->attrid, VAR_7->mod,
       FUNC_3(VAR_6));

 if (VAR_6->lid <= 0) {
  FUNC_1("only lid routes are supported");
  return ((void*)0);
 }

 VAR_9.mgtclass = VAR_1;
 VAR_9.method = VAR_7->method;
 VAR_9.attr.id = VAR_7->attrid;
 VAR_9.attr.mod = VAR_7->mod;
 VAR_9.mask = VAR_7->mask;
 VAR_9.timeout = VAR_8;
 VAR_9.datasz = VAR_3;
 VAR_9.dataoffs = VAR_2;
 VAR_9.trid = VAR_7->trid;

 VAR_6->qp = 1;
 if (!VAR_6->qkey)
  VAR_6->qkey = VAR_0;

 VAR_10 = FUNC_2(VAR_4, &VAR_9, VAR_6, 0 , VAR_5);

 VAR_7->recsz = VAR_9.recsz;

 return VAR_10;
}
