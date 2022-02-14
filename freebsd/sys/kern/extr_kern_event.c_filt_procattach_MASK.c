
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_flag; int p_klist; } ;
struct TYPE_2__ {struct proc* p_proc; } ;
struct knote {int kn_sfflags; int kn_flags; int kn_fflags; int kn_sdata; int kn_data; TYPE_1__ kn_ptr; int kn_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct knote*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct proc*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct knote*,int) ;
 int FUNC_3 (int ,struct knote*,int) ;
 int FUNC_4 (int ,struct proc*) ;
 struct proc* FUNC_5 (int ) ;
 struct proc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct knote *VAR_10)
{
 struct proc *VAR_11;
 int VAR_12;
 bool VAR_13, VAR_14;

 VAR_13 = VAR_14 = 0;
 if (VAR_10->kn_sfflags & VAR_6)
  VAR_11 = FUNC_6(VAR_10->kn_id);
 else
  VAR_11 = FUNC_5(VAR_10->kn_id);
 if (VAR_11 == ((void*)0))
  return (VAR_0);
 if (VAR_11->p_flag & VAR_8)
  VAR_13 = 1;

 if ((VAR_12 = FUNC_4(VAR_9, VAR_11))) {
  FUNC_1(VAR_11);
  return (VAR_12);
 }

 VAR_10->kn_ptr.p_proc = VAR_11;
 VAR_10->kn_flags |= VAR_1;





 if (VAR_10->kn_flags & VAR_3) {
  VAR_10->kn_flags &= ~VAR_3;
  VAR_10->kn_data = VAR_10->kn_sdata;
  VAR_10->kn_fflags = VAR_4;
  VAR_10->kn_sfflags &= ~(VAR_6 | VAR_5 | VAR_7);
  VAR_14 = 1;
 }




 if (VAR_10->kn_flags & VAR_2) {
  VAR_10->kn_flags &= ~VAR_2;
 }

 FUNC_3(VAR_11->p_klist, VAR_10, 1);







 if (VAR_14 || (VAR_13 && FUNC_2(VAR_10, VAR_6)))
  FUNC_0(VAR_10, 0);

 FUNC_1(VAR_11);

 return (0);
}
