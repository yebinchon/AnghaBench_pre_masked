
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xencons_priv {char* rbuf; int rp; TYPE_1__* ops; } ;
typedef int buf ;
struct TYPE_2__ {int (* read ) (struct xencons_priv*,char*,int) ;} ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct xencons_priv*,char*,int) ;
 int FUNC_2 (struct xencons_priv*) ;
 int FUNC_3 (struct xencons_priv*) ;

__attribute__((used)) static void
FUNC_4(struct xencons_priv *VAR_0)
{
 char VAR_1[16];
 int VAR_2;

 FUNC_2(VAR_0);
 while ((VAR_2 = VAR_0->ops->read(VAR_0, VAR_1, sizeof(VAR_1))) > 0) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   VAR_0->rbuf[FUNC_0(VAR_0->rp++)] = VAR_1[VAR_3];
 }
 FUNC_3(VAR_0);
}
