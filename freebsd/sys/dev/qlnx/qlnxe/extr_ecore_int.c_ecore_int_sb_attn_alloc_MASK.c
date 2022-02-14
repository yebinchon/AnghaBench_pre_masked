
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_sb_attn_info {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_sb_attn_info* p_sb_attn; struct ecore_dev* p_dev; } ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ecore_dev*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ecore_sb_attn_info* FUNC_1 (struct ecore_dev*,int ,int) ;
 void* FUNC_2 (struct ecore_dev*,int *,int ) ;
 int FUNC_3 (struct ecore_dev*,struct ecore_sb_attn_info*) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,void*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_3,
          struct ecore_ptt *VAR_4)
{
 struct ecore_dev *VAR_5 = VAR_3->p_dev;
 struct ecore_sb_attn_info *VAR_6;
 dma_addr_t VAR_7 = 0;
 void *VAR_8;


 VAR_6 = FUNC_1(VAR_5, VAR_2, sizeof(*VAR_6));
 if (!VAR_6) {
  FUNC_0(VAR_5, 0, "Failed to allocate `struct ecore_sb_attn_info'\n");
  return VAR_0;
 }


 VAR_8 = FUNC_2(VAR_5, &VAR_7,
      FUNC_4(VAR_3));
 if (!VAR_8) {
  FUNC_0(VAR_5, 0, "Failed to allocate status block (attentions)\n");
  FUNC_3(VAR_5, VAR_6);
  return VAR_0;
 }


 VAR_3->p_sb_attn = VAR_6;
 FUNC_5(VAR_3, VAR_4, VAR_8, VAR_7);

 return VAR_1;
}
