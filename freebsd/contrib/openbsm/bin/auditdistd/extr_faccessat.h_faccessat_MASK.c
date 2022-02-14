
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, const char *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_8 == VAR_0) {
  VAR_4 = VAR_1;
  return (-1);
 }

 VAR_9 = FUNC_3(".", VAR_3 | VAR_2);
 if (VAR_9 == -1)
  return (-1);

 if (FUNC_2(VAR_5) == -1) {
  VAR_10 = VAR_4;
  (void)FUNC_1(VAR_9);
  VAR_4 = VAR_10;
  return (-1);
 }

 VAR_11 = FUNC_0(VAR_6, VAR_7);

 VAR_10 = VAR_4;
 (void)FUNC_2(VAR_9);
 (void)FUNC_1(VAR_9);
 VAR_4 = VAR_10;
 return (VAR_11);
}
