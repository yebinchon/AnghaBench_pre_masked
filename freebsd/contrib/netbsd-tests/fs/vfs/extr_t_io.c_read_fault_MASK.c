
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int,int *,int) ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static void
FUNC_9(const atf_tc_t *VAR_6, const char *VAR_7)
{
 char VAR_8 = 123;
 int VAR_9;

 FUNC_2();
 FUNC_4(VAR_9 = FUNC_6("file", VAR_1 | VAR_3, 0777));
 FUNC_0(FUNC_8(VAR_9, &VAR_8, 1), 1);
 FUNC_4(FUNC_5(VAR_9));
 FUNC_4(VAR_9 = FUNC_6("file", VAR_2 | VAR_5 | VAR_4));
 FUNC_1(VAR_0, FUNC_7(VAR_9, ((void*)0), 1) == -1);
 FUNC_4(FUNC_5(VAR_9));
 FUNC_3();
}
