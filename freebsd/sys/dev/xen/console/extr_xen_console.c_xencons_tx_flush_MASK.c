
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xencons_priv {scalar_t__ wc; scalar_t__ wp; int * wbuf; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct xencons_priv*,int *,int) ;} ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xencons_priv*,int *,int) ;
 int FUNC_4 (struct xencons_priv*) ;
 int FUNC_5 (struct xencons_priv*) ;

__attribute__((used)) static void
FUNC_6(struct xencons_priv *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_1);
 while (VAR_1->wc != VAR_1->wp) {
  int VAR_4;
  VAR_3 = VAR_1->wp - VAR_1->wc;
  if (VAR_3 > (VAR_0 - FUNC_0(VAR_1->wc)))
   VAR_3 = VAR_0 - FUNC_0(VAR_1->wc);
  VAR_4 = VAR_1->ops->write(VAR_1, &VAR_1->wbuf[FUNC_0(VAR_1->wc)],
      VAR_3);





  if (FUNC_1(VAR_4 < 0))
   break;





  if (VAR_4 == 0 && FUNC_2(!VAR_2))
   break;

  VAR_1->wc += VAR_4;
 }
 FUNC_5(VAR_1);
}
