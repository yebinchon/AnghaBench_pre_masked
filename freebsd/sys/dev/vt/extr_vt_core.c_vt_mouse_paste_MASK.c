
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char term_char_t ;
struct TYPE_6__ {TYPE_1__* vd_curwindow; } ;
struct TYPE_5__ {int vw_terminal; } ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ,char) ;

__attribute__((used)) static void
FUNC_3()
{
 term_char_t *VAR_1;
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 VAR_3 /= sizeof(term_char_t);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1[VAR_2] == '\0')
   continue;
  FUNC_2(VAR_0->vd_curwindow->vw_terminal,
      VAR_1[VAR_2]);
 }
}
