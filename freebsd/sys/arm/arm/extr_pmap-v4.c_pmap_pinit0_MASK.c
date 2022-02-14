
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct pmap {int pm_mtx; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pmap*) ;
 int FUNC_2 (int ,struct pmap*,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(struct pmap *VAR_1)
{
 FUNC_0(1, FUNC_4("pmap_pinit0: pmap = %08x\n", (u_int32_t) VAR_1));

 FUNC_2(VAR_0, VAR_1, sizeof(*VAR_1));
 FUNC_3(&VAR_1->pm_mtx, sizeof(VAR_1->pm_mtx));
 FUNC_1(VAR_1);
}
