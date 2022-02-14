
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tty {TYPE_1__ t_inpoll; } ;
struct knote {struct tty* kn_hook; } ;


 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_0)
{
 struct tty *VAR_1 = VAR_0->kn_hook;

 FUNC_0(&VAR_1->t_inpoll.si_note, VAR_0, 0);
}
