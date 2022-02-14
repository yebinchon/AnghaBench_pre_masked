
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccb_hdr {int dummy; } ;
struct cam_doneq {int cam_doneq_mtx; int cam_doneq; } ;
struct TYPE_2__ {int stqe; } ;


 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct cam_doneq* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct ccb_hdr*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct ccb_hdr *VAR_3;
 struct cam_doneq *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_0[VAR_5];
  FUNC_2(&VAR_4->cam_doneq_mtx);
  while ((VAR_3 = FUNC_0(&VAR_4->cam_doneq)) != ((void*)0)) {
   FUNC_1(&VAR_4->cam_doneq, VAR_2.stqe);
   FUNC_3(&VAR_4->cam_doneq_mtx);
   FUNC_4(VAR_3);
   FUNC_2(&VAR_4->cam_doneq_mtx);
  }
  FUNC_3(&VAR_4->cam_doneq_mtx);
 }
}
