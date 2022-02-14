
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_service_curve {int m2; int d; int m1; } ;
struct internal_sc {void* ism2; void* sm2; void* sm1; int dx; int dy; void* ism1; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static void
FUNC_4(struct tc_service_curve *VAR_0, struct internal_sc *VAR_1)
{
 VAR_1->sm1 = FUNC_2(VAR_0->m1);
 VAR_1->ism1 = FUNC_1(VAR_0->m1);
 VAR_1->dx = FUNC_0(VAR_0->d);
 VAR_1->dy = FUNC_3(VAR_1->dx, VAR_1->sm1);
 VAR_1->sm2 = FUNC_2(VAR_0->m2);
 VAR_1->ism2 = FUNC_1(VAR_0->m2);
}
