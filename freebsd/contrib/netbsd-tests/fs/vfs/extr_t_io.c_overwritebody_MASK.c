
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int atf_tc_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int,char*,int ) ;

__attribute__((used)) static void
FUNC_10(const atf_tc_t *VAR_2, off_t VAR_3, bool VAR_4)
{
 char *VAR_5;
 int VAR_6;

 FUNC_3(VAR_5 = FUNC_5(VAR_3), ((void*)0));
 FUNC_1();
 FUNC_4(VAR_6 = FUNC_8("testi", VAR_0 | VAR_1, 0666));
 FUNC_0(FUNC_9(VAR_6, VAR_5, VAR_3), VAR_3);
 FUNC_4(FUNC_6(VAR_6));

 FUNC_4(VAR_6 = FUNC_8("testi", VAR_1));
 if (VAR_4)
  FUNC_4(FUNC_7(VAR_6, 0));
 FUNC_0(FUNC_9(VAR_6, VAR_5, VAR_3), VAR_3);
 FUNC_4(FUNC_6(VAR_6));
 FUNC_2();
}
