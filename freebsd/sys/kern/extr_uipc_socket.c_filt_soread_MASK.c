
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sb_ctl; int sb_state; scalar_t__ sb_lowat; } ;
struct socket {scalar_t__ sol_qlen; TYPE_2__ so_rcv; scalar_t__ so_error; int sol_comp; } ;
struct knote {scalar_t__ kn_data; int kn_sfflags; scalar_t__ kn_sdata; scalar_t__ kn_fflags; int kn_flags; TYPE_1__* kn_fp; } ;
struct TYPE_4__ {struct socket* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct socket*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(struct knote *VAR_4, long VAR_5)
{
 struct socket *VAR_6;

 VAR_6 = VAR_4->kn_fp->f_data;

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_6);
  VAR_4->kn_data = VAR_6->sol_qlen;
  if (VAR_6->so_error) {
   VAR_4->kn_flags |= VAR_0;
   VAR_4->kn_fflags = VAR_6->so_error;
   return (1);
  }
  return (!FUNC_3(&VAR_6->sol_comp));
 }

 FUNC_0(&VAR_6->so_rcv);

 VAR_4->kn_data = FUNC_5(&VAR_6->so_rcv) - VAR_6->so_rcv.sb_ctl;
 if (VAR_6->so_rcv.sb_state & VAR_3) {
  VAR_4->kn_flags |= VAR_0;
  VAR_4->kn_fflags = VAR_6->so_error;
  return (1);
 } else if (VAR_6->so_error)
  return (1);

 if (VAR_4->kn_sfflags & VAR_2) {
  if (VAR_4->kn_data >= VAR_4->kn_sdata)
   return (1);
 } else if (FUNC_5(&VAR_6->so_rcv) >= VAR_6->so_rcv.sb_lowat)
  return (1);


 return (FUNC_4(VAR_6, ((void*)0), VAR_1));
}
