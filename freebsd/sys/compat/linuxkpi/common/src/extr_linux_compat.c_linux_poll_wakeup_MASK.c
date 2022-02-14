
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct linux_file {int f_kqflags; int f_kqlock; TYPE_1__ f_selinfo; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct linux_file *VAR_2)
{

 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(&VAR_2->f_selinfo);

 FUNC_2(&VAR_2->f_kqlock);
 VAR_2->f_kqflags |= VAR_0 |
     VAR_1;


 FUNC_0(&VAR_2->f_selinfo.si_note, 1);
 FUNC_3(&VAR_2->f_kqlock);
}
