
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,short,int *,size_t*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int,int *,size_t,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, const char *VAR_3, token_t *VAR_4,
    short VAR_5)
{
 u_char VAR_6[VAR_1];
 size_t VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1();
 if (VAR_8 < 0)
  FUNC_4(VAR_0, "au_open");
 if (FUNC_2(VAR_8, VAR_4) < 0)
  FUNC_4(VAR_0, "au_write");
 VAR_7 = VAR_1;
 if (FUNC_0(VAR_8, VAR_5, VAR_6, &VAR_7) < 0)
  FUNC_4(VAR_0, "au_close_buffer");
 VAR_9 = FUNC_5(VAR_2, VAR_3);
 FUNC_6(VAR_9, VAR_6, VAR_7, VAR_3);
 FUNC_3(VAR_9);
}
