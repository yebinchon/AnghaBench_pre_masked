
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct terminal {int tm_winsize; struct tty* tm_tty; } ;


 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*,int *) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static void
FUNC_3(struct terminal *VAR_0)
{
 struct tty *VAR_1;

 VAR_1 = VAR_0->tm_tty;
 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, &VAR_0->tm_winsize);
 FUNC_2(VAR_1);
}
