
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
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_2(".", VAR_2 | VAR_1);
 if (VAR_7 == -1)
  return (-1);

 if (FUNC_1(VAR_4) == -1) {
  VAR_8 = VAR_3;
  (void)FUNC_0(VAR_7);
  VAR_3 = VAR_8;
  return (-1);
 }

 if (VAR_6 == VAR_0)
  VAR_9 = FUNC_3(VAR_5);
 else
  VAR_9 = FUNC_4(VAR_5);

 VAR_8 = VAR_3;
 (void)FUNC_1(VAR_7);
 (void)FUNC_0(VAR_7);
 VAR_3 = VAR_8;
 return (VAR_9);
}
