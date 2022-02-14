
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_spq_entry {int dummy; } ;
struct ecore_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct ecore_ll2_tx_queue {int db_msg; int doorbell_addr; } ;
struct ecore_ll2_info {int cid; struct ecore_ll2_tx_queue tx_queue; } ;
struct TYPE_2__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int p_dev; } ;
typedef int init_data ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_sp_init_data*,int ,int) ;
 struct ecore_spq_entry* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_spq_entry**,int ,int ,struct ecore_sp_init_data*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_spq_entry*,struct ecore_spq_entry*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_6,
             struct ecore_ll2_info *VAR_7)
{
 struct ecore_ll2_tx_queue *VAR_8 = &VAR_7->tx_queue;
 struct ecore_spq_entry *VAR_9 = VAR_4;
 struct ecore_sp_init_data VAR_10;
 enum _ecore_status_t VAR_11 = VAR_1;

 FUNC_1(VAR_6->p_dev, VAR_8->doorbell_addr,
         &VAR_8->db_msg);


 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_7->cid;
 VAR_10.opaque_fid = VAR_6->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_2;

 VAR_11 = FUNC_2(VAR_6, &VAR_9,
       VAR_0,
       VAR_5, &VAR_10);
 if (VAR_11 != VAR_3)
  return VAR_11;

 return FUNC_3(VAR_6, VAR_9, VAR_4);
}
