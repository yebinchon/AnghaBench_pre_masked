
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct statfs*,long,int) ;
 struct statfs* FUNC_1 (struct statfs*,long) ;

int
FUNC_2(struct statfs **VAR_3, int VAR_4)
{
 static struct statfs *VAR_5;
 static int VAR_6;
 static long VAR_7;
 unsigned VAR_8 = 0;

 if (VAR_6 <= 0 && (VAR_6 = FUNC_0(0, 0, VAR_1)) < 0)
  return (0);
 if (VAR_7 > 0 && (VAR_6 = FUNC_0(VAR_5, VAR_7, VAR_4)) < 0)
  return (0);
 while (VAR_8++ < VAR_0 && VAR_7 <= VAR_6 * sizeof(*VAR_5)) {
  VAR_7 = (VAR_6 * VAR_2) * sizeof(*VAR_5);
  if ((VAR_5 = FUNC_1(VAR_5, VAR_7)) == ((void*)0))
   return (0);
  if ((VAR_6 = FUNC_0(VAR_5, VAR_7, VAR_4)) < 0)
   return (0);
 }
 *VAR_3 = VAR_5;
 if (VAR_6 > (VAR_7 / sizeof(*VAR_5)))
  return (VAR_7 / sizeof(*VAR_5));
 return (VAR_6);
}
