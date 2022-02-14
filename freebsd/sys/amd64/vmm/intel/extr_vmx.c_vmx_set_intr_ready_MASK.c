
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
typedef int u_int ;
struct vlapic_vtx {int pending_prio; struct pir_desc* pir_desc; } ;
struct vlapic {int vcpuid; int vm; } ;
struct pir_desc {int pending; int * pir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct pir_desc*,int,int,int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int*,int const) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct vlapic *VAR_1, int VAR_2, bool VAR_3)
{
 struct vlapic_vtx *VAR_4;
 struct pir_desc *VAR_5;
 uint64_t VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_4 = (struct vlapic_vtx *)VAR_1;
 VAR_5 = VAR_4->pir_desc;






 VAR_7 = VAR_2 / 64;
 VAR_6 = 1UL << (VAR_2 % 64);
 FUNC_4(&VAR_5->pir[VAR_7], VAR_6);
 if (FUNC_2(&VAR_5->pending, 0, 1) != 0) {
  VAR_8 = 1;
  VAR_4->pending_prio = 0;
 } else {
  const u_int VAR_9 = VAR_4->pending_prio;
  const u_int VAR_10 = FUNC_1(VAR_2 & VAR_0);

  if ((VAR_9 & VAR_10) == 0 && VAR_10 > VAR_9) {
   FUNC_3(&VAR_4->pending_prio, VAR_10);
   VAR_8 = 1;
  }
 }

 FUNC_0(VAR_1->vm, VAR_1->vcpuid, VAR_5, VAR_8, VAR_2,
     VAR_3, "vmx_set_intr_ready");
 return (VAR_8);
}
