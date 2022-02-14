
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
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static void
FUNC_13(const atf_tc_t *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_3], VAR_7[VAR_3];
 int VAR_8;

 FUNC_2();


 FUNC_4(VAR_8 = FUNC_8("file", VAR_2|VAR_1, 0666));
 FUNC_6(VAR_6, 'D', VAR_3);
 FUNC_0(FUNC_12(VAR_8, VAR_6, VAR_3), VAR_3);
 FUNC_7(VAR_8);


 FUNC_1(VAR_0, FUNC_11(VAR_5, 0) == -1);

 FUNC_4(VAR_8 = FUNC_8("file", VAR_2));
 FUNC_4(FUNC_10("file"));

 FUNC_0(FUNC_9(VAR_8, VAR_7, VAR_3), VAR_3);
 FUNC_0(FUNC_5(VAR_6, VAR_7, VAR_3), 0);
 FUNC_7(VAR_8);

 FUNC_3();
}
