
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct procdesc {TYPE_1__ pd_selinfo; } ;
struct knote {int kn_filter; int kn_flags; int * kn_fop; } ;
struct file {struct procdesc* f_data; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,struct knote*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_3, struct knote *VAR_4)
{
 struct procdesc *VAR_5;

 VAR_5 = VAR_3->f_data;
 switch (VAR_4->kn_filter) {
 case 128:
  VAR_4->kn_fop = &VAR_2;
  VAR_4->kn_flags |= VAR_1;
  FUNC_0(&VAR_5->pd_selinfo.si_note, VAR_4, 0);
  return (0);
 default:
  return (VAR_0);
 }
}
