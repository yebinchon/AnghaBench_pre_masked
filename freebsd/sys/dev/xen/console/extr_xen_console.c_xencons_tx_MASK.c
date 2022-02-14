
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int dummy; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty*,int ) ;
 struct xencons_priv* FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,char*,int) ;
 int FUNC_3 (struct xencons_priv*,char,int) ;
 scalar_t__ FUNC_4 (struct xencons_priv*) ;

__attribute__((used)) static bool
FUNC_5(struct tty *VAR_1)
{
 bool VAR_2;
 char VAR_3;
 struct xencons_priv *VAR_4;

 VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);





 if (FUNC_4(VAR_4))
  return (0);

 VAR_2 = 0;
 while (!VAR_2 && FUNC_2(VAR_1, &VAR_3, 1) == 1)
  VAR_2 = FUNC_3(VAR_4, VAR_3, 0);

 return (!VAR_2);
}
