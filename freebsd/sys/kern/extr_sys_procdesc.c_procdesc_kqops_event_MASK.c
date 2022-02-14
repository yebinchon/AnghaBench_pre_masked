
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct procdesc {int pd_flags; int pd_xstat; } ;
struct knote {int kn_sfflags; int kn_fflags; int kn_flags; int kn_data; TYPE_1__* kn_fp; } ;
struct TYPE_2__ {struct procdesc* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_6, long VAR_7)
{
 struct procdesc *VAR_8;
 u_int VAR_9;

 VAR_8 = VAR_6->kn_fp->f_data;
 if (VAR_7 == 0) {




  VAR_9 = VAR_8->pd_flags & VAR_5 ? VAR_3 : 0;
 } else {

  VAR_9 = (u_int)VAR_7 & VAR_4;
 }


 if (VAR_6->kn_sfflags & VAR_9)
  VAR_6->kn_fflags |= VAR_9;


 if (VAR_9 == VAR_3) {
  VAR_6->kn_flags |= VAR_1 | VAR_2;
  if (VAR_6->kn_fflags & VAR_3)
   VAR_6->kn_data = VAR_8->pd_xstat;
  if (VAR_6->kn_fflags == 0)
   VAR_6->kn_flags |= VAR_0;
  return (1);
 }

 return (VAR_6->kn_fflags != 0);
}
