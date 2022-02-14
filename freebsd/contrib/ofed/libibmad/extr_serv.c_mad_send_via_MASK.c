
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ibmad_port {int * class_agents; int port_id; } ;
struct TYPE_4__ {int dataoffs; int mgtclass; int timeout; int datasz; } ;
typedef TYPE_1__ ib_rpc_t ;
typedef int ib_rmpp_hdr_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*,int *,void*) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (void*,TYPE_1__*,int *,int *,void*) ;
 int FUNC_3 (struct ibmad_port*,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,int ,void*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,char*,char*,int ) ;

int FUNC_10(ib_rpc_t * VAR_4, ib_portid_t * VAR_5, ib_rmpp_hdr_t * VAR_6,
   void *VAR_7, struct ibmad_port *VAR_8)
{
 uint8_t VAR_9[1024];
 void *VAR_10 = VAR_9;

 FUNC_4(VAR_9, 0, FUNC_8() + VAR_0);

 FUNC_0("rmpp %p data %p", VAR_6, VAR_7);

 if (FUNC_2(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7) < 0)
  return -1;

 if (VAR_2) {
  FUNC_1("data offs %d sz %d", VAR_4->dataoffs, VAR_4->datasz);
  FUNC_9(VAR_3, "mad send data\n",
        (char *)FUNC_6(VAR_10) + VAR_4->dataoffs, VAR_4->datasz);
 }

 if (FUNC_7(VAR_8->port_id, VAR_8->class_agents[VAR_4->mgtclass & 0xff],
        VAR_10, VAR_0, FUNC_3(VAR_8, VAR_4->timeout),
        0) < 0) {
  FUNC_1("send failed; %s", FUNC_5(VAR_1));
  return -1;
 }

 return 0;
}
