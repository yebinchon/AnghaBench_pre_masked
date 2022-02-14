
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*,char*,char*,int ) ;
 scalar_t__ FUNC_5 (char**,char const*,int ) ;
 int FUNC_6 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, const char *VAR_4, va_list VAR_5)
{
 char *VAR_6;

 if (FUNC_5(&VAR_6, VAR_4, VAR_5) > 0) {
  int VAR_7;

  FUNC_2(&VAR_2);
  VAR_7 = FUNC_4(VAR_3, VAR_6, "Press any key...", 0);
  FUNC_3(&VAR_2);
  FUNC_1(VAR_6);
  return VAR_7;
 }

 FUNC_0(VAR_1, "%s\n", VAR_3);
 FUNC_6(VAR_1, VAR_4, VAR_5);
 return VAR_0;
}
