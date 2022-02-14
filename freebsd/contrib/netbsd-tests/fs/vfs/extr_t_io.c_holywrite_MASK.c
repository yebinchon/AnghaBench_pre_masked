
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 () ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (char*,char,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (int,char*,size_t,int ) ;
 int FUNC_12 (int,char*,int,int) ;

__attribute__((used)) static void
FUNC_13(const atf_tc_t *VAR_3, const char *VAR_4)
{
 char VAR_5[1024];
 char *VAR_6, *VAR_7;
 size_t VAR_8 = FUNC_5()+1;
 int VAR_9;

 FUNC_1();

 FUNC_4(VAR_9 = FUNC_10("file", VAR_1|VAR_0|VAR_2, 0666));

 FUNC_8(VAR_5, 'A', sizeof(VAR_5));
 FUNC_4(FUNC_12(VAR_9, VAR_5, 1, FUNC_5()));

 FUNC_8(VAR_5, 'B', sizeof(VAR_5));
 FUNC_4(FUNC_12(VAR_9, VAR_5, 2, FUNC_5()-1));

 FUNC_3(VAR_6 = FUNC_6(2 * FUNC_5()), ((void*)0));
 FUNC_3(VAR_7 = FUNC_6(2 * FUNC_5()), ((void*)0));

 FUNC_4(FUNC_11(VAR_9, VAR_6, VAR_8, 0));

 FUNC_8(VAR_7, 0, VAR_8);
 FUNC_8(VAR_7 + FUNC_5() - 1, 'B', 2);

 FUNC_0(FUNC_7(VAR_6, VAR_7, VAR_8), 0);

 FUNC_9(VAR_9);
 FUNC_2();
}
