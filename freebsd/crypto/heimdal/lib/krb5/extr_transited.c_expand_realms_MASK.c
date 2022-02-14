
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {char const* realm; int leading_space; scalar_t__ leading_slash; scalar_t__ trailing_dot; struct tr_realm* next; } ;
typedef int krb5_context ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct tr_realm*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char const*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(krb5_context VAR_0,
       struct tr_realm *VAR_1, const char *VAR_2)
{
    struct tr_realm *VAR_3;
    const char *VAR_4 = ((void*)0);
    for(VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next){
 if(VAR_3->trailing_dot){
     char *VAR_5;
     size_t VAR_6;

     if(VAR_4 == ((void*)0))
  VAR_4 = VAR_2;

     VAR_6 = FUNC_7(VAR_3->realm) + FUNC_7(VAR_4) + 1;

     VAR_5 = FUNC_4(VAR_3->realm, VAR_6);
     if(VAR_5 == ((void*)0)){
  FUNC_1(VAR_1);
  return FUNC_2(VAR_0);
     }
     VAR_3->realm = VAR_5;
     FUNC_5(VAR_3->realm, VAR_4, VAR_6);
 }else if(VAR_3->leading_slash && !VAR_3->leading_space && VAR_4){


     char *VAR_7;
     size_t VAR_8 = FUNC_7(VAR_3->realm) + FUNC_7(VAR_4) + 1;

     VAR_7 = FUNC_3(VAR_8);
     if(VAR_7 == ((void*)0)){
  FUNC_1(VAR_1);
  return FUNC_2(VAR_0);
     }
     FUNC_6(VAR_7, VAR_4, VAR_8);
     FUNC_5(VAR_7, VAR_3->realm, VAR_8);
     FUNC_0(VAR_3->realm);
     VAR_3->realm = VAR_7;
 }
 VAR_4 = VAR_3->realm;
    }
    return 0;
}
