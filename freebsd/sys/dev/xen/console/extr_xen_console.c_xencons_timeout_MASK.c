
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int callout; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct tty*) ;
 struct xencons_priv* FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct tty *VAR_2;
 struct xencons_priv *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_2))
  FUNC_0(&VAR_3->callout, VAR_0,
      FUNC_3, VAR_2);
}
