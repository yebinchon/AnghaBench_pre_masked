
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int bufsiz_wanted ;
typedef int bufsiz_current ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int ,int*,int*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(void)
{
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 socklen_t VAR_13;

 if ((VAR_9 = FUNC_3(VAR_1, VAR_3, VAR_2)) < 0) {
  FUNC_0(FUNC_4(VAR_8));
  return -1;
 }






 VAR_11 = 128 * 1024;
 VAR_13 = sizeof(VAR_10);
 VAR_12 = FUNC_1(VAR_9, VAR_4, VAR_6,
  &VAR_10, &VAR_13);
 if ((VAR_12 < 0) || (VAR_10 < VAR_11))
  (void)FUNC_2(VAR_9, VAR_4, VAR_6,
   &VAR_11, sizeof(VAR_11));


 VAR_11 = 2 * 1024 * 1024;
 VAR_13 = sizeof(VAR_10);
 VAR_12 = FUNC_1(VAR_9, VAR_4, VAR_5,
  &VAR_10, &VAR_13);
 if (VAR_12 < 0)
  VAR_10 = 128 * 1024;

 for (; VAR_11 > VAR_10; VAR_11 /= 2) {
  if (FUNC_2(VAR_9, VAR_4, VAR_5,
    &VAR_11, sizeof(VAR_11)) == 0)
   break;
 }

 VAR_7 = VAR_0;
 return VAR_9;
}
