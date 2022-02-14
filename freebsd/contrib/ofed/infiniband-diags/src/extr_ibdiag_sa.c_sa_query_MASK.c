
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sa_query_result {int result_cnt; void* status; void* p_result_madw; } ;
struct TYPE_11__ {int gid; scalar_t__ grh_present; } ;
struct sa_handle {int fd; int agent; TYPE_7__ dport; } ;
typedef int rpc ;
struct TYPE_8__ {int mod; int id; } ;
struct TYPE_9__ {size_t datasz; int dataoffs; int mask; TYPE_1__ attr; scalar_t__ method; int mgtclass; } ;
typedef TYPE_2__ ib_rpc_t ;
struct TYPE_10__ {int grh_present; int gid; scalar_t__ traffic_class; scalar_t__ hop_limit; scalar_t__ gid_index; } ;
typedef TYPE_3__ ib_mad_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (void*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (void*,TYPE_2__*,TYPE_7__*,int *,void*) ;
 void* FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (void*,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 void* FUNC_9 (void*,scalar_t__) ;
 int VAR_12 ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (void*) ;
 TYPE_3__* FUNC_12 (void*) ;
 int FUNC_13 (int ,void*,int*,int ) ;
 int FUNC_14 (int ,int ,void*,int,int ,int ) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (void*) ;
 int FUNC_17 (int ,char*,void*,int) ;

int FUNC_18(struct sa_handle * VAR_13, uint8_t VAR_14,
      uint16_t VAR_15, uint32_t VAR_16, uint64_t VAR_17,
      uint64_t VAR_18, void *VAR_19, size_t VAR_20,
      struct sa_query_result *VAR_21)
{
 ib_rpc_t VAR_22;
 void *VAR_23, *VAR_24;
 int VAR_25, VAR_26, VAR_27 = 256;

 FUNC_8(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.mgtclass = VAR_5;
 VAR_22.method = VAR_14;
 VAR_22.attr.id = VAR_15;
 VAR_22.attr.mod = VAR_16;
 VAR_22.mask = VAR_17;
 VAR_22.datasz = VAR_20;
 VAR_22.dataoffs = VAR_6;

 VAR_23 = FUNC_2(1, VAR_27 + FUNC_15());
 if (!VAR_23)
  FUNC_0("cannot alloc mem for umad: %s\n", FUNC_10(VAR_9));

 FUNC_4(VAR_23, &VAR_22, &VAR_13->dport, ((void*)0), VAR_19);

 FUNC_6(FUNC_11(VAR_23), 0, VAR_8, VAR_18);

 if (VAR_11 > 1)
  FUNC_17(VAR_12, "SA Request:\n", FUNC_11(VAR_23), VAR_27);

 if (VAR_13->dport.grh_present) {
  ib_mad_addr_t *VAR_28 = FUNC_12(VAR_23);
  VAR_28->grh_present = 1;
  VAR_28->gid_index = 0;
  VAR_28->hop_limit = 0;
  VAR_28->traffic_class = 0;
  FUNC_7(VAR_28->gid, VAR_13->dport.gid, 16);
 }

 VAR_25 = FUNC_14(VAR_13->fd, VAR_13->agent, VAR_23, VAR_27, VAR_10, 0);
 if (VAR_25 < 0) {
  FUNC_1("umad_send failed: attr 0x%x: %s\n",
   VAR_15, FUNC_10(VAR_9));
  FUNC_3(VAR_23);
  return (-VAR_25);
 }

recv_mad:
 VAR_25 = FUNC_13(VAR_13->fd, VAR_23, &VAR_27, VAR_10);
 if (VAR_25 < 0) {
  if (VAR_9 == VAR_0) {
   VAR_23 = FUNC_9(VAR_23, FUNC_15() + VAR_27);
   goto recv_mad;
  }
  FUNC_1("umad_recv failed: attr 0x%x: %s\n", VAR_15,
   FUNC_10(VAR_9));
  FUNC_3(VAR_23);
  return (-VAR_25);
 }

 if ((VAR_25 = FUNC_16(VAR_23)))
  return VAR_25;

 VAR_24 = FUNC_11(VAR_23);

 if (VAR_11 > 1)
  FUNC_17(VAR_12, "SA Response:\n", VAR_24, VAR_27);

 VAR_14 = (uint8_t) FUNC_5(VAR_24, 0, VAR_1);
 VAR_26 = FUNC_5(VAR_24, 0, VAR_4);
 VAR_21->status = FUNC_5(VAR_24, 0, VAR_3);
 VAR_21->p_result_madw = VAR_24;
 if (VAR_21->status != VAR_7)
  VAR_21->result_cnt = 0;
 else if (VAR_14 != VAR_2)
  VAR_21->result_cnt = 1;
 else if (!VAR_26)
  VAR_21->result_cnt = 0;
 else
  VAR_21->result_cnt = (VAR_27 - VAR_6) / (VAR_26 << 3);

 return 0;
}
