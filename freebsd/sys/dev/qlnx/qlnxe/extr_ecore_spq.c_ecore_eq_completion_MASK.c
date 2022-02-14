
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct event_ring_entry {scalar_t__ protocol_id; int data; int fw_return_code; int echo; int flags; int reserved0; int opcode; } ;
struct ecore_hwfn {TYPE_1__* p_spq; } ;
struct ecore_chain {int dummy; } ;
struct ecore_eq {int * p_fw_cons; struct ecore_chain chain; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (struct ecore_hwfn*,struct event_ring_entry*) ;
 struct event_ring_entry* FUNC_6 (struct ecore_chain*) ;
 int FUNC_7 (struct ecore_chain*) ;
 int FUNC_8 (struct ecore_chain*) ;
 scalar_t__ FUNC_9 (struct ecore_chain*) ;
 int FUNC_10 (struct ecore_chain*) ;
 int FUNC_11 (struct ecore_chain*) ;
 int FUNC_12 (struct ecore_hwfn*,int ) ;
 int FUNC_13 (struct ecore_hwfn*,struct event_ring_entry*) ;
 scalar_t__ FUNC_14 (struct ecore_hwfn*,int ,int ,int *) ;
 int FUNC_15 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_16(struct ecore_hwfn *VAR_4,
      void *VAR_5)

{
 struct ecore_eq *VAR_6 = VAR_5;
 struct ecore_chain *VAR_7 = &VAR_6->chain;
 enum _ecore_status_t VAR_8 = 0;


 u16 VAR_9 = FUNC_2(*VAR_6->p_fw_cons);

 FUNC_0(VAR_4, VAR_1, "fw_cons_idx %x\n", VAR_9);




 if ((VAR_9 & FUNC_10(VAR_7)) ==
     FUNC_10(VAR_7)) {
  VAR_9 += FUNC_9(VAR_7);
 }


 while (VAR_9 != FUNC_7(VAR_7)) {
  struct event_ring_entry *VAR_10 = FUNC_6(VAR_7);
  if (!VAR_10) {
   VAR_8 = VAR_0;
   break;
  }

  FUNC_0(VAR_4,
      VAR_1,
      "op %x prot %x res0 %x echo %x fwret %x flags %x\n",
      VAR_10->opcode,
      VAR_10->protocol_id,
      VAR_10->reserved0,
      FUNC_2(VAR_10->echo),


      VAR_10->fw_return_code,


      VAR_10->flags);

  if (VAR_10->protocol_id == VAR_3)
   FUNC_13(VAR_4, VAR_10);


  if (FUNC_1(VAR_10->flags, VAR_2)) {
   if (FUNC_5(VAR_4, VAR_10))
    VAR_8 = VAR_0;
  } else if (FUNC_14(VAR_4,
      VAR_10->echo,
      VAR_10->fw_return_code,
      &VAR_10->data)) {
   VAR_8 = VAR_0;
  }

  FUNC_11(VAR_7);
 }

 FUNC_12(VAR_4, FUNC_8(VAR_7));


 FUNC_3(&VAR_4->p_spq->lock);
 VAR_8 = FUNC_15(VAR_4);
 FUNC_4(&VAR_4->p_spq->lock);

 return VAR_8;
}
