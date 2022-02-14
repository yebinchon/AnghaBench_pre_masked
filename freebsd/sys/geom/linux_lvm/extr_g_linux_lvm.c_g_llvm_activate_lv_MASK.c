
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int mediasize; int name; struct g_llvm_lv* private; int sectorsize; } ;
struct g_llvm_vg {int vg_extentsize; int vg_sectorsize; int vg_name; struct g_geom* vg_geom; } ;
struct g_llvm_lv {scalar_t__ lv_sgactive; scalar_t__ lv_sgcount; struct g_provider* lv_gprov; scalar_t__ lv_extentcount; int lv_name; } ;
struct g_geom {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct g_provider*,int ) ;
 struct g_provider* FUNC_3 (struct g_geom*,char*,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct g_llvm_vg *VAR_0, struct g_llvm_lv *VAR_1)
{
 struct g_geom *VAR_2;
 struct g_provider *VAR_3;

 FUNC_4();

 FUNC_1(VAR_1->lv_sgactive == VAR_1->lv_sgcount, ("segment missing"));

 VAR_2 = VAR_0->vg_geom;
 VAR_3 = FUNC_3(VAR_2, "linux_lvm/%s-%s", VAR_0->vg_name, VAR_1->lv_name);
 VAR_3->mediasize = VAR_0->vg_extentsize * (off_t)VAR_1->lv_extentcount;
 VAR_3->sectorsize = VAR_0->vg_sectorsize;
 FUNC_2(VAR_3, 0);
 VAR_1->lv_gprov = VAR_3;
 VAR_3->private = VAR_1;

 FUNC_0(1, "Created %s, %juM", VAR_3->name,
     VAR_3->mediasize / (1024*1024));

 return (0);
}
