
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct terminal {int tm_emulator; struct tty* tm_tty; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,char const*,int ) ;

void
FUNC_6(struct terminal *VAR_0, unsigned int VAR_1)
{
 struct tty *VAR_2;
 const char *VAR_3;

 VAR_2 = VAR_0->tm_tty;
 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_1(&VAR_0->tm_emulator, VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_2);
 FUNC_5(VAR_2, VAR_3, FUNC_0(VAR_3));
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}
