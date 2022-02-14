
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct tty {struct winsize t_winsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct winsize*,struct winsize const*,int) ;
 int FUNC_1 (struct tty*,int ) ;

void
FUNC_2(struct tty *VAR_1, const struct winsize *VAR_2)
{

 if (FUNC_0(&VAR_1->t_winsize, VAR_2, sizeof(*VAR_2)) == 0)
  return;
 VAR_1->t_winsize = *VAR_2;
 FUNC_1(VAR_1, VAR_0);
}
