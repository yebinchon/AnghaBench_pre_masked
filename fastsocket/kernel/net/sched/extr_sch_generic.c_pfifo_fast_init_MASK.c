
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfifo_fast_priv {int dummy; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pfifo_fast_priv*,int) ;
 struct pfifo_fast_priv* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_1, struct nlattr *VAR_2)
{
 int VAR_3;
 struct pfifo_fast_priv *VAR_4 = FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(FUNC_0(VAR_4, VAR_3));

 return 0;
}
