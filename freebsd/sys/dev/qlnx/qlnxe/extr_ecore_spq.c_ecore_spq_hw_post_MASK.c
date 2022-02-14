
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {void* echo; } ;
struct slow_path_element {TYPE_2__ hdr; } ;
struct ecore_spq_entry {struct slow_path_element elem; } ;
struct core_db_data {int agg_flags; int params; void* spq_prod; } ;
struct ecore_spq {int cid; int db_addr_offset; struct core_db_data db_data; } ;
struct ecore_hwfn {int p_dev; TYPE_1__* p_spq; } ;
struct ecore_chain {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {struct ecore_chain chain; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_chain*) ;
 struct slow_path_element* FUNC_6 (struct ecore_chain*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_7(struct ecore_hwfn *VAR_3,
           struct ecore_spq *VAR_4,
           struct ecore_spq_entry *VAR_5)
{
 struct ecore_chain *VAR_6 = &VAR_3->p_spq->chain;
 struct core_db_data *VAR_7 = &VAR_4->db_data;
 u16 VAR_8 = FUNC_5(VAR_6);
 struct slow_path_element *VAR_9;

 VAR_5->elem.hdr.echo = FUNC_3(VAR_8);
 VAR_9 = FUNC_6(VAR_6);
 if (!VAR_9) {
  FUNC_1(VAR_3, 1, "Failed to produce from SPQ chain\n");
  return VAR_0;
 }

 *VAR_9 = VAR_5->elem;

 VAR_7->spq_prod =
  FUNC_3(FUNC_5(VAR_6));


 FUNC_4(VAR_3->p_dev);

 FUNC_0(VAR_3, VAR_4->db_addr_offset, *(u32 *)VAR_7);


 FUNC_4(VAR_3->p_dev);

 FUNC_2(VAR_3, VAR_1,
     "Doorbelled [0x%08x, CID 0x%08x] with Flags: %02x agg_params: %02x, prod: %04x\n",
     VAR_4->db_addr_offset, VAR_4->cid, VAR_7->params,
     VAR_7->agg_flags, FUNC_5(VAR_6));

 return VAR_2;
}
