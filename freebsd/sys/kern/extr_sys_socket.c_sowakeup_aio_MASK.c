
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockbuf {int sb_flags; int sb_aiotask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*) ;

void
FUNC_3(struct socket *VAR_2, struct sockbuf *VAR_3)
{

 FUNC_0(VAR_3);
 VAR_3->sb_flags &= ~VAR_0;
 if (VAR_3->sb_flags & VAR_1)
  return;
 VAR_3->sb_flags |= VAR_1;
 FUNC_2(VAR_2);
 FUNC_1(&VAR_3->sb_aiotask);
}
