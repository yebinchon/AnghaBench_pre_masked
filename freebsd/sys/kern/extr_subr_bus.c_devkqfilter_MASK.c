
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knote {scalar_t__ kn_filter; int * kn_fop; } ;
struct cdev {int dummy; } ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {TYPE_1__ sel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_4, struct knote *VAR_5)
{
 int VAR_6;

 if (VAR_5->kn_filter == VAR_1) {
  VAR_5->kn_fop = &VAR_2;
  FUNC_0(&VAR_3.sel.si_note, VAR_5, 0);
  VAR_6 = 0;
 } else
  VAR_6 = VAR_0;
 return (VAR_6);
}
