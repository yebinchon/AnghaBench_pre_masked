
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {scalar_t__ rp; scalar_t__ rc; scalar_t__* rbuf; } ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct xencons_priv*) ;
 int FUNC_2 (struct xencons_priv*) ;

__attribute__((used)) static int
FUNC_3(struct xencons_priv *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);
 if (VAR_0->rp != VAR_0->rc) {

  VAR_1 = (int)VAR_0->rbuf[FUNC_0(VAR_0->rc)];
  VAR_0->rc++;
 } else {
  VAR_1 = -1;
 }

 FUNC_2(VAR_0);

 return (VAR_1);
}
