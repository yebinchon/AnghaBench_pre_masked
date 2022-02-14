
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct nmdmpart {struct tty* np_tty; struct nmdmpart* np_other; } ;


 int FUNC_0 (struct tty*) ;
 scalar_t__ FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 struct nmdmpart* FUNC_3 (struct tty*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_0)
{
 struct nmdmpart *VAR_1;
 struct nmdmpart *VAR_2;
 struct tty *VAR_3;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = VAR_1->np_other;
 VAR_3 = VAR_2->np_tty;


 if (FUNC_1(VAR_3))
  return;


 FUNC_2(VAR_0);


 FUNC_0(VAR_0);
 VAR_2 = VAR_1->np_other;
 if (VAR_2 == ((void*)0))
  return;
 VAR_3 = VAR_2->np_tty;
 FUNC_2(VAR_3);
 FUNC_0(VAR_0);
}
