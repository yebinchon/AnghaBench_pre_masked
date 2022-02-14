
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int umad ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ib_user_mad {int dummy; } ;
struct TYPE_14__ {int smps_on_wire; int umad_fd; } ;
typedef TYPE_3__ smp_engine_t ;
struct TYPE_12__ {scalar_t__ id; int mod; } ;
struct TYPE_13__ {TYPE_1__ attr; } ;
struct TYPE_15__ {int (* cb ) (TYPE_3__*,TYPE_4__*,int *,int ) ;int cb_data; TYPE_2__ rpc; int path; } ;
typedef TYPE_4__ ibnd_smp_t ;
typedef int cl_map_item_t ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int *,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int ,int *,int*,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(smp_engine_t * VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 ibnd_smp_t *VAR_7;
 uint8_t *VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10[sizeof(struct ib_user_mad) + VAR_2];
 int VAR_11 = FUNC_14() + VAR_2;

 FUNC_6(VAR_10, 0, sizeof(VAR_10));


 if ((VAR_5 = FUNC_13(VAR_4->umad_fd, VAR_10, &VAR_11,
       -1)) < 0) {
  FUNC_0("umad_recv failed: %d\n", VAR_5);
  return -1;
 }

 VAR_8 = FUNC_12(VAR_10);
 VAR_9 = (uint32_t) FUNC_5(VAR_8, 0, VAR_3);

 VAR_7 = (ibnd_smp_t *) FUNC_2(&VAR_4->smps_on_wire, VAR_9);
 if ((cl_map_item_t *) VAR_7 == FUNC_1(&VAR_4->smps_on_wire)) {
  FUNC_0("Failed to find matching smp for trid (%x)\n", VAR_9);
  return -1;
 }

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5)
  goto error;

 if ((VAR_6 = FUNC_15(VAR_10))) {
  FUNC_0("umad (%s Attr 0x%x:%u) bad status %d; %s\n",
      FUNC_8(&VAR_7->path), VAR_7->rpc.attr.id,
      VAR_7->rpc.attr.mod, VAR_6, FUNC_10(VAR_6));
  if (VAR_7->rpc.attr.id == VAR_0)
   VAR_5 = FUNC_7(VAR_4, VAR_7, VAR_8,
          VAR_7->cb_data);
 } else if ((VAR_6 = FUNC_4(VAR_8, 0, VAR_1))) {
  FUNC_0("mad (%s Attr 0x%x:%u) bad status 0x%x\n",
      FUNC_8(&VAR_7->path), VAR_7->rpc.attr.id,
      VAR_7->rpc.attr.mod, VAR_6);
  if (VAR_7->rpc.attr.id == VAR_0)
   VAR_5 = FUNC_7(VAR_4, VAR_7, VAR_8,
          VAR_7->cb_data);
 } else
  VAR_5 = VAR_7->cb(VAR_4, VAR_7, VAR_8, VAR_7->cb_data);

error:
 FUNC_3(VAR_7);
 return VAR_5;
}
