
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char const*,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 char VAR_6[VAR_2];
 token_t *VAR_7;

 VAR_7 = FUNC_1(FUNC_0(VAR_5), -1);
 if (VAR_7 == ((void*)0))
  FUNC_2(VAR_1, "au_to_return32");
 (void)FUNC_3(VAR_6, VAR_2, "%s_record", VAR_4);
 FUNC_4(VAR_3, VAR_6, VAR_7, VAR_0);
}
