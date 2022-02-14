
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {scalar_t__ wp; scalar_t__ wc; int* wbuf; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xencons_priv*) ;
 int FUNC_2 (struct xencons_priv*,int) ;
 int FUNC_3 (struct xencons_priv*) ;
 int FUNC_4 (struct xencons_priv*) ;

__attribute__((used)) static bool
FUNC_5(struct xencons_priv *VAR_1, int VAR_2, bool VAR_3)
{

 FUNC_1(VAR_1);
 if ((VAR_1->wp - VAR_1->wc) < VAR_0)
  VAR_1->wbuf[FUNC_0(VAR_1->wp++)] = VAR_2;
 FUNC_4(VAR_1);

 FUNC_2(VAR_1, VAR_3);

 return (FUNC_3(VAR_1));
}
