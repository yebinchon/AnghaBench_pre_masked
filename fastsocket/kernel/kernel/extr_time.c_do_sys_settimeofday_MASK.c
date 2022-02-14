
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec const*) ;
 int FUNC_1 (struct timespec const*,struct timezone const*) ;
 struct timezone VAR_1 ;
 int FUNC_2 (struct timespec const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(const struct timespec *VAR_2, const struct timezone *VAR_3)
{
 static int VAR_4 = 1;
 int VAR_5 = 0;

 if (VAR_2 && !FUNC_2(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_3) {

  VAR_1 = *VAR_3;
  FUNC_3();
  if (VAR_4) {
   VAR_4 = 0;
   if (!VAR_2)
    FUNC_4();
  }
 }
 if (VAR_2)
 {



  return FUNC_0(VAR_2);
 }
 return 0;
}
