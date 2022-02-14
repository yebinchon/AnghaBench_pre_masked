
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqisrc_softstate {int intr_count; } ;
struct cam_sim {int dummy; } ;


 struct pqisrc_softstate* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct pqisrc_softstate*,int) ;

__attribute__((used)) static void FUNC_2(struct cam_sim *VAR_0)
{
 struct pqisrc_softstate *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->intr_count; VAR_2++ )
  FUNC_1(VAR_1, VAR_2);
}
