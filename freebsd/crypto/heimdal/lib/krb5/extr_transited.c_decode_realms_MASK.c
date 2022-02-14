
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {int dummy; } ;
typedef int krb5_context ;


 struct tr_realm* FUNC_0 (struct tr_realm*,struct tr_realm*) ;
 int FUNC_1 (struct tr_realm*) ;
 int FUNC_2 (struct tr_realm*) ;
 int FUNC_3 (int ) ;
 struct tr_realm* FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(krb5_context VAR_0,
       const char *VAR_1, int VAR_2, struct tr_realm **VAR_3)
{
    struct tr_realm *VAR_4 = ((void*)0);

    char *VAR_5;
    int VAR_6 = 0;
    const char *VAR_7 = VAR_1;
    int VAR_8;

    for(VAR_8 = 0; VAR_8 < VAR_2; VAR_8++){
 if(VAR_6){
     VAR_6 = 0;
     continue;
 }
 if(VAR_1[VAR_8] == '\\'){
     VAR_6 = 1;
     continue;
 }
 if(VAR_1[VAR_8] == ','){
     VAR_5 = FUNC_5(VAR_1 + VAR_8 - VAR_7 + 1);
     if(VAR_5 == ((void*)0))
  return FUNC_3(VAR_0);
     FUNC_6(VAR_5, VAR_7, VAR_1 + VAR_8 - VAR_7);
     VAR_5[VAR_1 + VAR_8 - VAR_7] = '\0';
     VAR_4 = FUNC_4(VAR_5);
     if(VAR_4 == ((void*)0)){
  FUNC_2(*VAR_3);
  return FUNC_3(VAR_0);
     }
     *VAR_3 = FUNC_0(*VAR_3, VAR_4);
     VAR_7 = VAR_1 + VAR_8 + 1;
 }
    }
    VAR_5 = FUNC_5(VAR_1 + VAR_8 - VAR_7 + 1);
    if(VAR_5 == ((void*)0)){
 FUNC_1(*VAR_3);
 return FUNC_3(VAR_0);
    }
    FUNC_6(VAR_5, VAR_7, VAR_1 + VAR_8 - VAR_7);
    VAR_5[VAR_1 + VAR_8 - VAR_7] = '\0';
    VAR_4 = FUNC_4(VAR_5);
    if(VAR_4 == ((void*)0)){
 FUNC_2(*VAR_3);
 return FUNC_3(VAR_0);
    }
    *VAR_3 = FUNC_0(*VAR_3, VAR_4);

    return 0;
}
