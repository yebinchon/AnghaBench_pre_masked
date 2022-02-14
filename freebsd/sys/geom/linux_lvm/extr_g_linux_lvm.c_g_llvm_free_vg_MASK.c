
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_llvm_vg {int lv_segs; int vg_lvs; int vg_pvs; } ;
struct g_llvm_segment {int lv_segs; int vg_lvs; int vg_pvs; } ;
struct g_llvm_pv {int lv_segs; int vg_lvs; int vg_pvs; } ;
struct g_llvm_lv {int lv_segs; int vg_lvs; int vg_pvs; } ;


 struct g_llvm_vg* FUNC_0 (int *) ;
 int FUNC_1 (struct g_llvm_vg*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct g_llvm_vg*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct g_llvm_vg *VAR_5)
{
 struct g_llvm_pv *VAR_6;
 struct g_llvm_lv *VAR_7;
 struct g_llvm_segment *VAR_8;


 while ((VAR_6 = FUNC_0(&VAR_5->vg_pvs)) != ((void*)0)) {
  FUNC_1(VAR_6, VAR_2);
  FUNC_2(VAR_6, VAR_0);
 }
 while ((VAR_7 = FUNC_0(&VAR_5->vg_lvs)) != ((void*)0)) {
  while ((VAR_8 = FUNC_0(&VAR_7->lv_segs)) != ((void*)0)) {
   FUNC_1(VAR_8, VAR_3);
   FUNC_2(VAR_8, VAR_0);
  }
  FUNC_1(VAR_7, VAR_1);
  FUNC_2(VAR_7, VAR_0);
 }
 FUNC_1(VAR_5, VAR_4);
 FUNC_2(VAR_5, VAR_0);
}
