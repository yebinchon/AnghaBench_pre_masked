
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int kn_filter; struct eventfd* kn_hook; int * kn_fop; } ;
struct file {scalar_t__ f_type; struct eventfd* f_data; } ;
struct TYPE_2__ {int si_note; } ;
struct eventfd {int efd_lock; TYPE_1__ efd_sel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct knote*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_4, struct knote *VAR_5)
{
 struct eventfd *VAR_6;

 VAR_6 = VAR_4->f_data;
 if (VAR_4->f_type != VAR_0 || VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_1(&VAR_6->efd_lock);
 switch (VAR_5->kn_filter) {
 case 129:
  VAR_5->kn_fop = &VAR_2;
  break;
 case 128:
  VAR_5->kn_fop = &VAR_3;
  break;
 default:
  FUNC_2(&VAR_6->efd_lock);
  return (VAR_1);
 }

 VAR_5->kn_hook = VAR_6;
 FUNC_0(&VAR_6->efd_sel.si_note, VAR_5, 1);
 FUNC_2(&VAR_6->efd_lock);

 return (0);
}
