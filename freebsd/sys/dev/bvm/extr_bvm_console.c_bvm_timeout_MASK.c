
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct tty*) ;
 int VAR_2 ;
 int FUNC_2 (struct tty*,int ) ;
 int FUNC_3 (struct tty*,int,int ) ;
 int FUNC_4 (struct tty*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct tty *VAR_4;
 int VAR_5;

 VAR_4 = (struct tty *)VAR_3;

 FUNC_2(VAR_4, VAR_0);
 while ((VAR_5 = FUNC_0(((void*)0))) != -1)
  FUNC_3(VAR_4, VAR_5, 0);
 FUNC_4(VAR_4);

 FUNC_1(&VAR_1, VAR_2, FUNC_5, VAR_4);
}
