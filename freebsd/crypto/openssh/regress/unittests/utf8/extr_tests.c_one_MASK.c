
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int*,char*,char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(int VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3,
    int VAR_4, int VAR_5, const char *VAR_6)
{
 char VAR_7[16];
 int *VAR_8;
 int VAR_9;

 if (VAR_5 == -2)
  VAR_5 = FUNC_7(VAR_6);
 (void)FUNC_6(VAR_7, VAR_0 ? "utf8_" : "c_", sizeof(VAR_7));
 (void)FUNC_5(VAR_7, VAR_1, sizeof(VAR_7));
 FUNC_3(VAR_7);
 VAR_8 = VAR_4 == -2 ? ((void*)0) : &VAR_3;
 VAR_9 = FUNC_4(VAR_7, sizeof(VAR_7), VAR_8, "%s", VAR_2);
 FUNC_0(VAR_9, VAR_5);
 FUNC_1(VAR_7, VAR_6);
 FUNC_0(VAR_3, VAR_4);
 FUNC_2();
}
