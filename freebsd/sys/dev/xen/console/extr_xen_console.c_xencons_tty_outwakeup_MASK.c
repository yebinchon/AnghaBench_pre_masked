
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int callout; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct tty*) ;
 int FUNC_1 (int *) ;
 struct xencons_priv* FUNC_2 (struct tty*) ;
 int VAR_1 ;
 int FUNC_3 (struct tty*) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_2)
{
 struct xencons_priv *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->callout);

 if (!FUNC_3(VAR_2))
  FUNC_0(&VAR_3->callout, VAR_0,
      VAR_1, VAR_2);
}
