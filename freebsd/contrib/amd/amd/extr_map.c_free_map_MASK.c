
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* am_fd; scalar_t__ am_autofs_fh; int ** am_alarray; int * am_al; int ** am_transp; int ** am_pref; int ** am_path; int ** am_name; int ** am_link; } ;
typedef TYPE_1__ am_node ;
typedef int am_loc ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int **) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(am_node *VAR_1)
{
  FUNC_5(VAR_1);

  if (VAR_1->am_fd[1] != -1)
    FUNC_4(VAR_0, "free_map: called prior to notifying the child for %s.",
 VAR_1->am_path);

  FUNC_0(VAR_1->am_link);
  FUNC_0(VAR_1->am_name);
  FUNC_0(VAR_1->am_path);
  FUNC_0(VAR_1->am_pref);
  FUNC_0(VAR_1->am_transp);

  if (VAR_1->am_al)
    FUNC_3(VAR_1->am_al);

  if (VAR_1->am_alarray) {
    am_loc **VAR_2;
    for (VAR_2 = VAR_1->am_alarray; *VAR_2; VAR_2++)
      FUNC_3(*VAR_2);
    FUNC_0(VAR_1->am_alarray);
  }






  FUNC_2(VAR_1);
}
