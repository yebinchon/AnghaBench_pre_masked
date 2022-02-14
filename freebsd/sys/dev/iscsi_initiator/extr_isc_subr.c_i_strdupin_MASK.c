
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (char*,char*,size_t,size_t*) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (size_t,int ,int ) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_2, size_t VAR_3)
{
     size_t VAR_4;
     char *VAR_5, *VAR_6;

     VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_1);
     if(FUNC_1(VAR_2, VAR_5, VAR_3, &VAR_4)) {
   FUNC_2(VAR_5, VAR_0);
   return ((void*)0);
     }
     VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_1);
     FUNC_0(VAR_5, VAR_6, VAR_4);
     FUNC_2(VAR_5, VAR_0);

     return VAR_6;
}
