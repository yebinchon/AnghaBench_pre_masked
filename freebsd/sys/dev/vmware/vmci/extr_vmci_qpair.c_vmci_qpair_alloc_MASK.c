
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_privilege_flags ;
typedef int vmci_id ;
typedef int * vmci_event_release_cb ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vmci_handle {int dummy; } ;
struct vmci_qpair {int flags; struct vmci_handle handle; int priv_flags; int peer; scalar_t__ consume_q_size; int consume_q; scalar_t__ produce_q_size; int produce_q; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vmci_qpair* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vmci_qpair*,int) ;
 int FUNC_3 (struct vmci_handle*,int *,scalar_t__,int *,scalar_t__,int ,int,int ) ;

int
FUNC_4(struct vmci_qpair **VAR_7, struct vmci_handle *VAR_8,
    uint64_t VAR_9, uint64_t VAR_10, vmci_id VAR_11,
    uint32_t VAR_12, vmci_privilege_flags VAR_13)
{
 struct vmci_qpair *VAR_14;
 vmci_event_release_cb VAR_15;
 void *VAR_16;
 int VAR_17;
 if (VAR_9 + VAR_10 <
     FUNC_0(VAR_9, VAR_10) ||
     VAR_9 + VAR_10 > VAR_3)
  return (VAR_2);

 if (VAR_12 & VAR_5)
  return (VAR_0);

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return (VAR_1);

 VAR_14->produce_q_size = VAR_9;
 VAR_14->consume_q_size = VAR_10;
 VAR_14->peer = VAR_11;
 VAR_14->flags = VAR_12;
 VAR_14->priv_flags = VAR_13;

 VAR_16 = ((void*)0);
 VAR_15 = ((void*)0);

 VAR_17 = FUNC_3(VAR_8, &VAR_14->produce_q,
     VAR_14->produce_q_size, &VAR_14->consume_q,
     VAR_14->consume_q_size, VAR_14->peer, VAR_14->flags,
     VAR_14->priv_flags);

 if (VAR_17 < VAR_6) {
  FUNC_2(VAR_14, sizeof(*VAR_14));
  return (VAR_17);
 }

 *VAR_7 = VAR_14;
 VAR_14->handle = *VAR_8;

 return (VAR_17);
}
