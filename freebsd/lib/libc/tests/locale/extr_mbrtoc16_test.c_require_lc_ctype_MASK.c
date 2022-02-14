
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int ) ;
 int VAR_1 ;
 char* FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1("setlocale(LC_CTYPE, \"%s\") failed; errno=%d",
      VAR_2, VAR_1);

 FUNC_0(FUNC_3(VAR_3, VAR_2) == 0);
}
