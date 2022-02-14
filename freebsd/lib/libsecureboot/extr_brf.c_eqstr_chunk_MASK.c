
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4, *VAR_5;

 VAR_4 = VAR_0 + VAR_1;
 VAR_5 = VAR_2 + VAR_3;
 for (;;) {
  int VAR_6, VAR_7;

  VAR_6 = FUNC_0(&VAR_0, VAR_4);
  VAR_7 = FUNC_0(&VAR_2, VAR_5);
  if (VAR_6 != VAR_7) {
   return (0);
  }
  if (VAR_6 == 0) {
   return (1);
  }
 }
}
