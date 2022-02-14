
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct timerfd {TYPE_1__ tfd_sel; } ;
struct knote {scalar_t__ kn_filter; struct timerfd* kn_hook; int * kn_fop; } ;
struct file {scalar_t__ f_type; struct timerfd* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct knote*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_4, struct knote *VAR_5)
{
 struct timerfd *VAR_6;

 VAR_6 = VAR_4->f_data;
 if (VAR_4->f_type != VAR_0 || VAR_6 == ((void*)0))
  return (VAR_1);

 if (VAR_5->kn_filter == VAR_2)
  VAR_5->kn_fop = &VAR_3;
 else
  return (VAR_1);

 VAR_5->kn_hook = VAR_6;
 FUNC_0(&VAR_6->tfd_sel.si_note, VAR_5, 0);

 return (0);
}
