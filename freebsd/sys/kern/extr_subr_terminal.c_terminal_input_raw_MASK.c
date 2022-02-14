
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct terminal {struct tty* tm_tty; } ;


 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,char,int ) ;
 int FUNC_3 (struct tty*) ;

void
FUNC_4(struct terminal *VAR_0, char VAR_1)
{
 struct tty *VAR_2;

 VAR_2 = VAR_0->tm_tty;
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_1, 0);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
}
