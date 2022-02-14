
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct proc {int p_xsig; int p_xexit; } ;
struct TYPE_2__ {struct proc* p_proc; } ;
struct knote {int kn_sfflags; int kn_fflags; int kn_flags; int kn_data; TYPE_1__ kn_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_5, long VAR_6)
{
 struct proc *VAR_7;
 u_int VAR_8;

 VAR_7 = VAR_5->kn_ptr.p_proc;
 if (VAR_7 == ((void*)0))
  return (0);


 VAR_8 = (u_int)VAR_6 & VAR_4;


 if (VAR_5->kn_sfflags & VAR_8)
  VAR_5->kn_fflags |= VAR_8;


 if (VAR_8 == VAR_3) {
  VAR_5->kn_flags |= VAR_1 | VAR_2;
  VAR_5->kn_ptr.p_proc = ((void*)0);
  if (VAR_5->kn_fflags & VAR_3)
   VAR_5->kn_data = FUNC_0(VAR_7->p_xexit, VAR_7->p_xsig);
  if (VAR_5->kn_fflags == 0)
   VAR_5->kn_flags |= VAR_0;
  return (1);
 }

 return (VAR_5->kn_fflags != 0);
}
