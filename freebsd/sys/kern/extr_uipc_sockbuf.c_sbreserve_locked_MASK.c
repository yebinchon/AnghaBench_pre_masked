
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct socket {TYPE_1__* so_cred; } ;
struct sockbuf {scalar_t__ sb_hiwat; scalar_t__ sb_lowat; int sb_mbmax; } ;
typedef int rlim_t ;
struct TYPE_2__ {int cr_uidinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (int ,scalar_t__*,int,int ) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_4(struct sockbuf *VAR_5, u_long VAR_6, struct socket *VAR_7,
    struct thread *VAR_8)
{
 rlim_t VAR_9;

 FUNC_0(VAR_5);
 if (VAR_6 > VAR_4)
  return (0);
 if (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_8, VAR_0);
 } else
  VAR_9 = VAR_1;
 if (!FUNC_1(VAR_7->so_cred->cr_uidinfo, &VAR_5->sb_hiwat, VAR_6,
     VAR_9))
  return (0);
 VAR_5->sb_mbmax = FUNC_3(VAR_6 * VAR_2, VAR_3);
 if (VAR_5->sb_lowat > VAR_5->sb_hiwat)
  VAR_5->sb_lowat = VAR_5->sb_hiwat;
 return (1);
}
