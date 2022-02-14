
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct runtime_sc {int ism2; int sm2; int dy; int dx; int ism1; int sm1; void* y; void* x; } ;
struct internal_sc {int ism2; int sm2; int dy; int dx; int ism1; int sm1; } ;



__attribute__((used)) static void
FUNC_0(struct runtime_sc *VAR_0, struct internal_sc *VAR_1, u64 VAR_2, u64 VAR_3)
{
 VAR_0->x = VAR_2;
 VAR_0->y = VAR_3;
 VAR_0->sm1 = VAR_1->sm1;
 VAR_0->ism1 = VAR_1->ism1;
 VAR_0->dx = VAR_1->dx;
 VAR_0->dy = VAR_1->dy;
 VAR_0->sm2 = VAR_1->sm2;
 VAR_0->ism2 = VAR_1->ism2;
}
