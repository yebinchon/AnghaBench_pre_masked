
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, const char *VAR_5, int VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (VAR_4 != VAR_6) {
  VAR_3 = VAR_0;
  return (-1);
 }

 VAR_8 = FUNC_2(".", VAR_2 | VAR_1);
 if (VAR_8 == -1)
  return (-1);

 if (FUNC_1(VAR_4) == -1) {
  VAR_9 = VAR_3;
  (void)FUNC_0(VAR_8);
  VAR_3 = VAR_9;
  return (-1);
 }

 VAR_10 = FUNC_3(VAR_5, VAR_7);

 VAR_9 = VAR_3;
 (void)FUNC_1(VAR_8);
 (void)FUNC_0(VAR_8);
 VAR_3 = VAR_9;
 return (VAR_10);
}
