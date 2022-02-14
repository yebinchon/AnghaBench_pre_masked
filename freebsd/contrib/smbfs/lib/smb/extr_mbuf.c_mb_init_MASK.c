
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbdata {int dummy; } ;


 int FUNC_0 (size_t,struct mbuf**) ;
 int FUNC_1 (struct mbdata*,struct mbuf*) ;

int
FUNC_2(struct mbdata *VAR_0, size_t VAR_1)
{
 struct mbuf *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, &VAR_2)) != 0)
  return VAR_3;
 return FUNC_1(VAR_0, VAR_2);
}
