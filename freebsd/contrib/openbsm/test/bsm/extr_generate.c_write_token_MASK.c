
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,size_t*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int,int *,size_t,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const char *VAR_3, token_t *VAR_4)
{
 u_char VAR_5[VAR_1];
 size_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_1;
 if (FUNC_0(VAR_4, VAR_5, &VAR_6) < 0)
  FUNC_2(VAR_0, "au_close_token");
 VAR_7 = FUNC_3(VAR_2, VAR_3);
 FUNC_4(VAR_7, VAR_5, VAR_6, VAR_3);
 FUNC_1(VAR_7);
}
