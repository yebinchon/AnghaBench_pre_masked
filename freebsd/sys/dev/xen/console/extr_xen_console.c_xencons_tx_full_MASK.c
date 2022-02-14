
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {unsigned int wp; unsigned int wc; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct xencons_priv*) ;
 int FUNC_1 (struct xencons_priv*) ;

__attribute__((used)) static bool
FUNC_2(struct xencons_priv *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->wp - VAR_1->wc;
 FUNC_1(VAR_1);

 return (VAR_2 >= VAR_0);
}
