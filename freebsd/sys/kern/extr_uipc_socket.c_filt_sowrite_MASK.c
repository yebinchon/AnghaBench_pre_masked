
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sb_state; scalar_t__ sb_lowat; } ;
struct socket {int so_state; TYPE_3__ so_snd; TYPE_2__* so_proto; scalar_t__ so_error; } ;
struct knote {scalar_t__ kn_data; int kn_sfflags; scalar_t__ kn_sdata; scalar_t__ kn_fflags; int kn_flags; TYPE_1__* kn_fp; } ;
struct TYPE_6__ {int pr_flags; } ;
struct TYPE_5__ {struct socket* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_5 ;
 int FUNC_2 (struct socket*,struct knote*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(struct knote *VAR_6, long VAR_7)
{
 struct socket *VAR_8;

 VAR_8 = VAR_6->kn_fp->f_data;

 if (FUNC_1(VAR_8))
  return (0);

 FUNC_0(&VAR_8->so_snd);
 VAR_6->kn_data = FUNC_3(&VAR_8->so_snd);

 FUNC_2(VAR_8, VAR_6, VAR_1);

 if (VAR_8->so_snd.sb_state & VAR_4) {
  VAR_6->kn_flags |= VAR_0;
  VAR_6->kn_fflags = VAR_8->so_error;
  return (1);
 } else if (VAR_8->so_error)
  return (1);
 else if (((VAR_8->so_state & VAR_5) == 0) &&
     (VAR_8->so_proto->pr_flags & VAR_3))
  return (0);
 else if (VAR_6->kn_sfflags & VAR_2)
  return (VAR_6->kn_data >= VAR_6->kn_sdata);
 else
  return (VAR_6->kn_data >= VAR_8->so_snd.sb_lowat);
}
