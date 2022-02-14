
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_device {int comps_used; int * pd; int * mr; struct iser_comp* comps; int event_handler; } ;
struct iser_comp {int * cq; int tq; } ;


 int VAR_0 ;
 int FUNC_0 (struct iser_comp*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct iser_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->comps_used; VAR_2++) {
  struct iser_comp *VAR_3 = &VAR_1->comps[VAR_2];

  FUNC_4(VAR_3->tq);
  FUNC_2(VAR_3->cq);
  VAR_3->cq = ((void*)0);
 }

 (void)FUNC_3(&VAR_1->event_handler);
 (void)FUNC_1(VAR_1->pd);

 FUNC_0(VAR_1->comps, VAR_0);
 VAR_1->comps = ((void*)0);

 VAR_1->mr = ((void*)0);
 VAR_1->pd = ((void*)0);
}
