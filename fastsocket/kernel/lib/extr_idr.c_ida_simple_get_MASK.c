
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ida*,unsigned int,int*) ;
 int FUNC_2 (struct ida*,int ) ;
 int FUNC_3 (struct ida*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ida *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
     gfp_t VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 FUNC_0((int)VAR_5 < 0);
 FUNC_0((int)VAR_6 < 0);

 if (VAR_6 == 0)
  VAR_10 = 0x80000000;
 else {
  FUNC_0(VAR_6 < VAR_5);
  VAR_10 = VAR_6 - 1;
 }

again:
 if (!FUNC_2(VAR_4, VAR_7))
  return -VAR_1;

 FUNC_4(&VAR_3);
 VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_9);
 if (!VAR_8) {
  if (VAR_9 > VAR_10) {
   FUNC_3(VAR_4, VAR_9);
   VAR_8 = -VAR_2;
  } else {
   VAR_8 = VAR_9;
  }
 }
 FUNC_5(&VAR_3);

 if (FUNC_6(VAR_8 == -VAR_0))
  goto again;

 return VAR_8;
}
