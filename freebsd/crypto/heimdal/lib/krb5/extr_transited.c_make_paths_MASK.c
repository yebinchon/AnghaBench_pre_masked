
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {char* realm; struct tr_realm* next; } ;
typedef int krb5_context ;


 int FUNC_0 (struct tr_realm*) ;
 int FUNC_1 (int ,struct tr_realm*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(krb5_context VAR_0,
    struct tr_realm *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
    struct tr_realm *VAR_4;
    int VAR_5;
    const char *VAR_6 = VAR_2;
    const char *VAR_7 = ((void*)0);
    for(VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next){



 if(VAR_4->realm[0] == '\0'){
     while(VAR_4->next && VAR_4->next->realm[0] == '\0')
  VAR_4 = VAR_4->next;
     if(VAR_4->next)
  VAR_7 = VAR_4->next->realm;
     else
  VAR_7 = VAR_3;
     VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_6, VAR_7);
     if(VAR_5){
  FUNC_0(VAR_1);
  return VAR_5;
     }
 }
 VAR_6 = VAR_4->realm;
    }
    return 0;
}
