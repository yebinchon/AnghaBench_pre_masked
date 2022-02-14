
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct procdesc {TYPE_2__ pd_selinfo; } ;
struct knote {TYPE_1__* kn_fp; } ;
struct TYPE_3__ {struct procdesc* f_data; } ;


 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct procdesc *VAR_1;

 VAR_1 = VAR_0->kn_fp->f_data;
 FUNC_0(&VAR_1->pd_selinfo.si_note, VAR_0, 0);
}
