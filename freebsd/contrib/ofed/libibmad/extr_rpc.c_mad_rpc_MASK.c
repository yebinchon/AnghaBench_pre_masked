
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ibmad_port {int * class_agents; int port_id; } ;
struct TYPE_5__ {int error; } ;
typedef TYPE_1__ ib_rpc_v1_t ;
struct TYPE_6__ {int mgtclass; int rstatus; int dataoffs; int datasz; int timeout; } ;
typedef TYPE_2__ ib_rpc_t ;
typedef int ib_portid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int *,int ,int,int ,int ,int*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,TYPE_2__*,int *,int ,void*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct ibmad_port const*) ;
 int FUNC_6 (struct ibmad_port const*,int ) ;
 int FUNC_7 (void*,int *,int ) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_8 ;
 int * FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ,char*,int *,int ) ;

void *FUNC_14(const struct ibmad_port *VAR_9, ib_rpc_t * VAR_10,
       ib_portid_t * VAR_11, void *VAR_12, void *VAR_13)
{
 int VAR_14, VAR_15;
 uint8_t VAR_16[1024], VAR_17[1024], *VAR_18;
 ib_rpc_v1_t *VAR_19 = (ib_rpc_v1_t *)VAR_10;
 int VAR_20 = 0;

 if ((VAR_10->mgtclass & VAR_3) == VAR_2)
  VAR_19->error = 0;
 do {
  VAR_15 = 0;
  FUNC_8(VAR_16, 0, FUNC_12() + VAR_4);

  if ((VAR_15 = FUNC_3(VAR_16, VAR_10, VAR_11, 0, VAR_12)) < 0)
   return ((void*)0);

  if ((VAR_15 = FUNC_2(VAR_9->port_id, VAR_16, VAR_17,
          VAR_9->class_agents[VAR_10->mgtclass & 0xff],
          VAR_15, FUNC_6(VAR_9, VAR_10->timeout),
          FUNC_5(VAR_9), &VAR_20)) < 0) {
   if ((VAR_10->mgtclass & VAR_3) ==
       VAR_2)
    VAR_19->error = VAR_20;
   FUNC_1("_do_madrpc failed; dport (%s)",
          FUNC_9(VAR_11));
   return ((void*)0);
  }

  VAR_18 = FUNC_11(VAR_17);
  VAR_14 = FUNC_4(VAR_18, 0, VAR_1);



  if (VAR_14 == VAR_5) {


   if (FUNC_10(VAR_11, VAR_18))
    break;
  } else
   break;
 } while (1);

 if ((VAR_10->mgtclass & VAR_3) == VAR_2)
  VAR_19->error = VAR_20;
 VAR_10->rstatus = VAR_14;

 if (VAR_14 != 0) {
  FUNC_0("MAD completed with error status 0x%x; dport (%s)",
       VAR_14, FUNC_9(VAR_11));
  VAR_6 = VAR_0;
  return ((void*)0);
 }

 if (VAR_7) {
  FUNC_1("data offs %d sz %d", VAR_10->dataoffs, VAR_10->datasz);
  FUNC_13(VAR_8, "mad data\n", VAR_18 + VAR_10->dataoffs, VAR_10->datasz);
 }

 if (VAR_13)
  FUNC_7(VAR_13, VAR_18 + VAR_10->dataoffs, VAR_10->datasz);

 return VAR_13;
}
