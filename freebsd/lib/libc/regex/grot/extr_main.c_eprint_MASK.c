
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;
typedef int epbuf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int,int *,char*,int) ;

__attribute__((used)) static char *
FUNC_2(int VAR_1)
{
 static char VAR_2[100];
 size_t VAR_3;

 VAR_3 = FUNC_1(VAR_0|VAR_1, (regex_t *)((void*)0), VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_3 <= sizeof(VAR_2));
 return(VAR_2);
}
