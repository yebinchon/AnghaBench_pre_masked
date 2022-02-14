
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int altbrk; int opened; } ;
struct tty {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct tty*) ;
 struct xencons_priv* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,int ) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct xencons_priv*) ;
 int FUNC_7 (struct xencons_priv*) ;
 int FUNC_8 (struct xencons_priv*,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 struct tty *VAR_2;
 struct xencons_priv *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = FUNC_2(VAR_2);




 if (VAR_0)
  return;




 if (!VAR_3->opened)
  return;

 FUNC_7(VAR_3);

 FUNC_1(VAR_2);
 while ((VAR_4 = FUNC_6(VAR_3)) != -1) {



  FUNC_4(VAR_2, VAR_4, 0);
 }
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);


 FUNC_8(VAR_3, 0);
}
