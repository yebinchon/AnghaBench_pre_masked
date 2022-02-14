
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void
FUNC_10(const atf_tc_t *VAR_8, const char *VAR_9)
{
 int VAR_10;
 char VAR_11[VAR_3+1];
 int VAR_12;

 if (FUNC_5(VAR_8))
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_2;

 FUNC_3();
 FUNC_6(VAR_10 = FUNC_8(VAR_0, VAR_5));
 FUNC_0(FUNC_9(VAR_10, VAR_11, VAR_3), VAR_3);
 VAR_11[VAR_3] = '\0';
 FUNC_2(VAR_11, VAR_4);
 FUNC_6(FUNC_7(VAR_10));

 FUNC_1(VAR_12, FUNC_8(VAR_0, VAR_7) == -1);
 FUNC_1(VAR_12, FUNC_8(VAR_0, VAR_6) == -1);
 FUNC_4();
}
