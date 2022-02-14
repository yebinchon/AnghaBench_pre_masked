
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int buf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*,int,char const*,int ) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, int VAR_1, const char *VAR_2, va_list VAR_3)
{
 char VAR_4[1024];
 size_t VAR_5;

 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
 else
  VAR_4[0] = '\0';

 if (VAR_1 >= 0) {
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 < sizeof(VAR_4) - 3) {
   FUNC_1(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, ": %s",
       FUNC_3(VAR_1));
  }
 }

 FUNC_0(VAR_0, VAR_4);
}
