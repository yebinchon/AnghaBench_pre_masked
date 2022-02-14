
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ida*,unsigned int,int*) ;
 int FUNC_3 (struct ida*,int ) ;
 int FUNC_4 (struct ida*,int) ;

int
FUNC_5(struct ida *VAR_3, unsigned int VAR_4, unsigned int VAR_5,
    gfp_t VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9;

 FUNC_0((int)VAR_4 >= 0);
 FUNC_0((int)VAR_5 >= 0);

 if (VAR_5 == 0)
  VAR_9 = 0x80000000;
 else {
  FUNC_0(VAR_5 > VAR_4);
  VAR_9 = VAR_5 - 1;
 }
again:
 if (!FUNC_3(VAR_3, VAR_6))
  return (-VAR_1);

 if ((VAR_7 = FUNC_2(VAR_3, VAR_4, &VAR_8)) == 0) {
  if (VAR_8 > VAR_9) {
   FUNC_4(VAR_3, VAR_8);
   VAR_7 = -VAR_2;
  } else {
   VAR_7 = VAR_8;
  }
 }
 if (FUNC_1(VAR_7 == -VAR_0))
  goto again;

 return (VAR_7);
}
