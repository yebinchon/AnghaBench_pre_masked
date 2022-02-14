
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char,size_t) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(const atf_tc_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_1;

 FUNC_3(FUNC_7(VAR_3), "%s", VAR_3);

 VAR_5 = FUNC_5(VAR_4 + 1);
 FUNC_0(VAR_5);
 FUNC_6(VAR_5, 'a', VAR_4);
 VAR_5[VAR_4] = '\0';
 VAR_6 = FUNC_8(VAR_5, "afile");
 if (VAR_6 == -1) {
  FUNC_1(VAR_0, VAR_6);
 } else {
  FUNC_2(FUNC_9("afile"));
 }
 FUNC_4(VAR_5);

 FUNC_2(FUNC_7("/"));
}
