
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, const char *VAR_6, int VAR_7, int *VAR_8,
    int VAR_9)
{
 int VAR_10;




 if (VAR_9 == 0) {
  if (FUNC_3(VAR_5, VAR_6) >= 0) {
   *VAR_8 = VAR_7;
   return (0);
  } else if (VAR_4 != VAR_0)
   return (-1);







  if (FUNC_4(VAR_6) < 0)
   return (-1);
 }

 if ((VAR_10 = FUNC_2(VAR_6, VAR_1 | VAR_2 | VAR_3, 0755)) < 0)
  return (-1);

 if (FUNC_1(VAR_7, VAR_10) < 0)
  return (-1);





 if (FUNC_4(VAR_5) < 0)
  return (-1);

 (void) FUNC_0(VAR_7);




 *VAR_8 = VAR_10;

 return (0);
}
