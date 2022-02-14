
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbdata {int dummy; } ;


 int FUNC_0 (struct mbdata*,char const*,int) ;
 int FUNC_1 (struct mbdata*,int) ;
 int FUNC_2 (char const*) ;

int
FUNC_3(struct mbdata *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 > 255) {
  VAR_3 = 255;
 }
 if ((VAR_2 = FUNC_1(VAR_0, VAR_3)) != 0)
  return VAR_2;
 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
