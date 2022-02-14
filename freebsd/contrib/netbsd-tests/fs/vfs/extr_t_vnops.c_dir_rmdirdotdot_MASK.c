
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pb ;
typedef int atf_tc_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (char*,int,char const*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(const atf_tc_t *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7;

 VAR_3;

 FUNC_1();
 FUNC_4(FUNC_7("test", 0777));
 FUNC_4(FUNC_6("test"));

 FUNC_4(FUNC_7("subtest", 0777));
 FUNC_4(FUNC_6("subtest"));

 FUNC_5(VAR_6, sizeof(VAR_6), VAR_5, "test/subtest");
 FUNC_4(FUNC_8(VAR_6));
 FUNC_5(VAR_6, sizeof(VAR_6), VAR_5, "test");
 FUNC_4(FUNC_8(VAR_6));

 if (FUNC_3(VAR_4))
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;
 FUNC_0(VAR_7, FUNC_6("..") == -1);
 FUNC_2();
}
