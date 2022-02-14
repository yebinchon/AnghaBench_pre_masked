
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,size_t,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_4(SCR *VAR_1, CHAR_T *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 CHAR_T *VAR_5;

 FUNC_1(VAR_1, VAR_5, VAR_4, VAR_3 + 1);
 VAR_5[VAR_3] = '\0';
 FUNC_2(VAR_5, VAR_2, VAR_3);
 FUNC_3(VAR_1, VAR_0, VAR_5, "098|The %s command is unknown");
 FUNC_0(VAR_1, VAR_5, VAR_4);

alloc_err:
 return;
}
