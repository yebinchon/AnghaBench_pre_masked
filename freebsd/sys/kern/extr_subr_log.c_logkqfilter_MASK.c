
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knote {scalar_t__ kn_filter; int * kn_hook; int * kn_fop; } ;
struct cdev {int dummy; } ;
struct TYPE_3__ {int si_note; } ;
struct TYPE_4__ {TYPE_1__ sc_selp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct knote*,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_5, struct knote *VAR_6)
{

 if (VAR_6->kn_filter != VAR_1)
  return (VAR_0);

 VAR_6->kn_fop = &VAR_2;
 VAR_6->kn_hook = ((void*)0);

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_3.sc_selp.si_note, VAR_6, 1);
 FUNC_2(&VAR_4);
 return (0);
}
