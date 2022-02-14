
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sb_flags; } ;
struct TYPE_5__ {int si_note; } ;
struct socket {TYPE_3__ so_snd; TYPE_2__ so_wrsel; } ;
struct knote {TYPE_1__* kn_fp; } ;
struct TYPE_4__ {struct socket* f_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct knote*,int) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

__attribute__((used)) static void
FUNC_5(struct knote *VAR_1)
{
 struct socket *VAR_2 = VAR_1->kn_fp->f_data;

 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->so_wrsel.si_note, VAR_1, 1);
 if (!FUNC_0(VAR_2) && FUNC_1(&VAR_2->so_wrsel.si_note))
  VAR_2->so_snd.sb_flags &= ~VAR_0;
 FUNC_4(VAR_2);
}
