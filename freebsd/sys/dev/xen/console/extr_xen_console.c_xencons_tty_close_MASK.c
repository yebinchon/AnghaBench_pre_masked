
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {int opened; } ;
struct tty {int dummy; } ;


 struct xencons_priv* FUNC_0 (struct tty*) ;

__attribute__((used)) static void
FUNC_1(struct tty *VAR_0)
{
 struct xencons_priv *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 VAR_1->opened = 0;
}
