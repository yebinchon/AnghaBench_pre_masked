
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match {int dummy; } ;


 int FUNC_0 (struct xt_match*) ;
 int FUNC_1 (struct xt_match*,unsigned int) ;

int
FUNC_2(struct xt_match *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_0[VAR_2]);
  if (VAR_3)
   goto err;
 }
 return VAR_3;

err:
 if (VAR_2 > 0)
  FUNC_1(VAR_0, VAR_2);
 return VAR_3;
}
