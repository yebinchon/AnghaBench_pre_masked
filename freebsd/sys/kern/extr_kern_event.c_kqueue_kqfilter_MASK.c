
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct kqueue {TYPE_2__ kq_sel; } ;
struct knote {scalar_t__ kn_filter; int * kn_fop; int kn_status; TYPE_1__* kn_fp; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct kqueue* f_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct knote*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_4, struct knote *VAR_5)
{
 struct kqueue *VAR_6 = VAR_5->kn_fp->f_data;

 if (VAR_5->kn_filter != VAR_1)
  return (VAR_0);

 VAR_5->kn_status |= VAR_2;
 VAR_5->kn_fop = &VAR_3;
 FUNC_0(&VAR_6->kq_sel.si_note, VAR_5, 0);

 return (0);
}
