
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freebsd11_statfs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct freebsd11_statfs*) ;
 int FUNC_1 (struct freebsd11_statfs*,long,int) ;
 scalar_t__ FUNC_2 (long) ;

int
FUNC_3(struct freebsd11_statfs **VAR_1, int VAR_2)
{
 static struct freebsd11_statfs *VAR_3;
 static int VAR_4;
 static long VAR_5;

 if (VAR_4 <= 0 &&
     (VAR_4 = FUNC_1(0, 0, VAR_0)) < 0)
  return (0);
 if (VAR_5 > 0 &&
     (VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_2)) < 0)
  return (0);
 while (VAR_5 <= VAR_4 * sizeof(struct freebsd11_statfs)) {
  if (VAR_3)
   FUNC_0(VAR_3);
  VAR_5 = (VAR_4 + 1) * sizeof(struct freebsd11_statfs);
  if ((VAR_3 = (struct freebsd11_statfs *)FUNC_2(VAR_5)) == 0)
   return (0);
  if ((VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_2)) < 0)
   return (0);
 }
 *VAR_1 = VAR_3;
 return (VAR_4);
}
