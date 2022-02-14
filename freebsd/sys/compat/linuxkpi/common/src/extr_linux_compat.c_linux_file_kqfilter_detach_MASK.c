
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct linux_file {int f_kqlock; TYPE_1__ f_selinfo; } ;
struct knote {struct linux_file* kn_hook; } ;


 int FUNC_0 (int *,struct knote*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 struct linux_file *VAR_1 = VAR_0->kn_hook;

 FUNC_1(&VAR_1->f_kqlock);
 FUNC_0(&VAR_1->f_selinfo.si_note, VAR_0, 1);
 FUNC_2(&VAR_1->f_kqlock);
}
