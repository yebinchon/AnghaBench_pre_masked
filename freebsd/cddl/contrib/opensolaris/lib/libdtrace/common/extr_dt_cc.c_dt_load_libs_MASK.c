
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dir_path; } ;
struct TYPE_8__ {int dt_cflags; TYPE_2__ dt_lib_path; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef TYPE_2__ dt_dirpath_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_1)
{
 dt_dirpath_t *VAR_2;

 if (VAR_1->dt_cflags & VAR_0)
  return (0);

 VAR_1->dt_cflags |= VAR_0;
 for (VAR_2 = FUNC_0(FUNC_0(&VAR_1->dt_lib_path));
     VAR_2 != ((void*)0); VAR_2 = FUNC_0(VAR_2)) {
  if (FUNC_1(VAR_1, VAR_2->dir_path) != 0) {
   VAR_1->dt_cflags &= ~VAR_0;
   return (-1);
  }
 }


 VAR_2 = FUNC_0(&VAR_1->dt_lib_path);
 if (FUNC_1(VAR_1, VAR_2->dir_path) != 0) {
  VAR_1->dt_cflags &= ~VAR_0;
  return (-1);
 }

 if (FUNC_2(VAR_1) < 0)
  return (-1);

 return (0);
}
