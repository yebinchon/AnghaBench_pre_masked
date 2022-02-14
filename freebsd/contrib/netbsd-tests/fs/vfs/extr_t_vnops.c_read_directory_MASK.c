
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;
typedef int atf_tc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int,char*,int,int ) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void
FUNC_8(const atf_tc_t *VAR_4, const char *VAR_5)
{
 char VAR_6[1024];
 int VAR_7, VAR_8;
 ssize_t VAR_9;

 FUNC_2();
 VAR_7 = FUNC_5(".", VAR_1 | VAR_2, 0777);
 FUNC_1(VAR_7 != -1);

 VAR_9 = FUNC_6(VAR_7, VAR_6, sizeof(VAR_6), 0);
 FUNC_0(VAR_9 != -1 || VAR_3 == VAR_0);
 VAR_9 = FUNC_7(VAR_7, VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_9 != -1 || VAR_3 == VAR_0);

 VAR_8 = FUNC_4(VAR_7);
 FUNC_1(VAR_8 != -1);
 FUNC_3();
}
