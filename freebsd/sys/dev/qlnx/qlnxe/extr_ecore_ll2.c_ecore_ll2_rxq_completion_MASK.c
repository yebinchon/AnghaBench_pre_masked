
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union core_rx_cqe_union {TYPE_1__ rx_cqe_sp; } ;
typedef scalar_t__ u16 ;
struct ecore_ll2_rx_queue {int lock; int rcq_chain; int * p_fw_cons; } ;
struct ecore_ll2_info {struct ecore_ll2_rx_queue rx_queue; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;





 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 union core_rx_cqe_union* VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ll2_info*,union core_rx_cqe_union*,unsigned long*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ll2_info*,union core_rx_cqe_union*,unsigned long*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_8(struct ecore_hwfn *VAR_4,
           void *VAR_5)
{
 struct ecore_ll2_info *VAR_6 = (struct ecore_ll2_info*)VAR_5;
 struct ecore_ll2_rx_queue *VAR_7 = &VAR_6->rx_queue;
 union core_rx_cqe_union *VAR_8 = VAR_3;
 u16 VAR_9 = 0, VAR_10 = 0;
 unsigned long VAR_11 = 0;
 enum _ecore_status_t VAR_12 = VAR_2;

 FUNC_2(&VAR_7->lock, VAR_11);
 VAR_9 = FUNC_1(*VAR_7->p_fw_cons);
 VAR_10 = FUNC_5(&VAR_7->rcq_chain);

 while (VAR_9 != VAR_10) {
  bool VAR_13 = (VAR_9 == VAR_10);

  VAR_8 = (union core_rx_cqe_union *)FUNC_4(&VAR_7->rcq_chain);
  VAR_10 = FUNC_5(&VAR_7->rcq_chain);

  FUNC_0(VAR_4, VAR_1,
      "LL2 [sw. cons %04x, fw. at %04x] - Got Packet of type %02x\n",
      VAR_10, VAR_9, VAR_8->rx_cqe_sp.type);

  switch (VAR_8->rx_cqe_sp.type) {
  case 128:
   VAR_12 = FUNC_6(VAR_4, VAR_6,
             VAR_8, &VAR_11);
   break;
  case 130:
  case 129:
   VAR_12 = FUNC_7(VAR_4, VAR_6,
            VAR_8, &VAR_11,
            VAR_13);
   break;
  default:
   VAR_12 = VAR_0;
  }
 }

 FUNC_3(&VAR_7->lock, VAR_11);
 return VAR_12;
}
