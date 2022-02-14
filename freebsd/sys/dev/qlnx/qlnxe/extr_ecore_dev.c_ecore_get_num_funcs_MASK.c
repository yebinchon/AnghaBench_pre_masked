
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int abs_pf_id; int num_funcs_on_engine; void* enabled_func_idx; void* rel_pf_id; struct ecore_dev* p_dev; } ;
struct ecore_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,void*,int,void*,int) ;
 scalar_t__ FUNC_3 (struct ecore_dev*) ;
 scalar_t__ FUNC_4 (struct ecore_dev*) ;
 int FUNC_5 (struct ecore_dev*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_8(struct ecore_hwfn *VAR_4,
    struct ecore_ptt *VAR_5)
{
 u8 VAR_6, VAR_7 = VAR_4->rel_pf_id;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 struct ecore_dev *VAR_12 = VAR_4->p_dev;

 VAR_6 = FUNC_3(VAR_12) ? VAR_2 : VAR_1;
 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_3);

 if (VAR_8 & 0x1) {
  if (FUNC_4(VAR_12)) {
   if (FUNC_6(VAR_4) && !FUNC_5(VAR_12)) {
    VAR_6 = 0;
    VAR_10 = 0xaaaa;
   } else {
    VAR_6 = 1;
    VAR_10 = 0x5554;
   }
  } else {
   VAR_6 = 1;
   VAR_10 = 0xfffe;
  }


  VAR_9 = (VAR_8 ^ 0xffffffff) & VAR_10;
  while (VAR_9) {
   if (VAR_9 & 0x1)
    VAR_6++;
   VAR_9 >>= 0x1;
  }


  VAR_11 = (0x1 << VAR_4->abs_pf_id) - 1;
  VAR_9 = VAR_8 & VAR_10 & VAR_11;
  while (VAR_9) {
   if (VAR_9 & 0x1)
    VAR_7--;
   VAR_9 >>= 0x1;
  }
 }

 VAR_4->num_funcs_on_engine = VAR_6;
 VAR_4->enabled_func_idx = VAR_7;


 if (FUNC_0(VAR_12)) {
  FUNC_1(VAR_4, 0,
     "FPGA: Limit number of PFs to 4 [would affect resource allocation, needed for IOV]\n");
  VAR_4->num_funcs_on_engine = 4;
 }


 FUNC_2(VAR_4, VAR_0,
     "PF [rel_id %d, abs_id %d] occupies index %d within the %d enabled functions on the engine\n",
     VAR_4->rel_pf_id, VAR_4->abs_pf_id,
     VAR_4->enabled_func_idx, VAR_4->num_funcs_on_engine);
}
