
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(int VAR_2, long *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 long VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5, 0);
 if (VAR_5 == VAR_0 || *VAR_5 != '\0') {
  FUNC_0(VAR_1,
      "The -%c option expects a numeric argument\n", VAR_2);
  FUNC_2();
 }
 *VAR_3 = VAR_6;
}
