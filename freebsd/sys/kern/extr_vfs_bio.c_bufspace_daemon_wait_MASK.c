
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {scalar_t__ bd_bufspace; scalar_t__ bd_bufspacethresh; scalar_t__ bd_freebuffers; scalar_t__ bd_lofreebuffers; int bd_running; } ;


 int FUNC_0 (struct bufdomain*) ;
 int FUNC_1 (struct bufdomain*) ;
 int FUNC_2 (struct bufdomain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct bufdomain *VAR_3)
{






 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->bd_running, 0);
 if (VAR_3->bd_bufspace < VAR_3->bd_bufspacethresh &&
     VAR_3->bd_freebuffers > VAR_3->bd_lofreebuffers) {
  FUNC_4(&VAR_3->bd_running, FUNC_1(VAR_3), VAR_1|VAR_0,
      "-", VAR_2);
 } else {

  FUNC_3(&VAR_3->bd_running, 1);
  FUNC_2(VAR_3);
 }
}
