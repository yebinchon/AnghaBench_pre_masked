
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {char* realm; struct tr_realm* next; } ;
typedef int krb5_context ;


 int VAR_0 ;
 struct tr_realm* FUNC_0 (int,int) ;
 int FUNC_1 (struct tr_realm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_11(krb5_context VAR_1, struct tr_realm *VAR_2,
   const char *VAR_3, const char *VAR_4)
{
    struct tr_realm *VAR_5;
    const char *VAR_6;

    if(FUNC_9(VAR_3) < FUNC_9(VAR_4)){
 const char *VAR_7;
 VAR_7 = VAR_3;
 VAR_3 = VAR_4;
 VAR_4 = VAR_7;
    }

    if(FUNC_7(VAR_3 + FUNC_9(VAR_3) - FUNC_9(VAR_4), VAR_4) == 0){
 VAR_6 = VAR_3;
 while(1){
     VAR_6 = FUNC_6(VAR_6, '.');
     if(VAR_6 == ((void*)0)) {
  FUNC_2 (VAR_1);
  return VAR_0;
     }
     VAR_6++;
     if(FUNC_7(VAR_6, VAR_4) == 0)
  break;
     VAR_5 = FUNC_0(1, sizeof(*VAR_5));
     if(VAR_5 == ((void*)0))
  return FUNC_3(VAR_1);
     VAR_5->next = VAR_2->next;
     VAR_2->next = VAR_5;
     VAR_5->realm = FUNC_8(VAR_6);
     if(VAR_5->realm == ((void*)0)){
  VAR_2->next = VAR_5->next;
  FUNC_1(VAR_5);
  return FUNC_3(VAR_1);
     }
 }
    }else if(FUNC_10(VAR_3, VAR_4, FUNC_9(VAR_4)) == 0){
 VAR_6 = VAR_3 + FUNC_9(VAR_3);
 while(1){
     while(VAR_6 >= VAR_3 && *VAR_6 != '/') VAR_6--;
     if(VAR_6 == VAR_3)
  return VAR_0;

     if(FUNC_10(VAR_4, VAR_3, VAR_6 - VAR_3) == 0)
  break;
     VAR_5 = FUNC_0(1, sizeof(*VAR_5));
     if(VAR_5 == ((void*)0))
  return FUNC_3(VAR_1);
     VAR_5->next = VAR_2->next;
     VAR_2->next = VAR_5;
     VAR_5->realm = FUNC_4(VAR_6 - VAR_3 + 1);
     if(VAR_5->realm == ((void*)0)){
  VAR_2->next = VAR_5->next;
  FUNC_1(VAR_5);
  return FUNC_3(VAR_1);
     }
     FUNC_5(VAR_5->realm, VAR_3, VAR_6 - VAR_3);
     VAR_5->realm[VAR_6 - VAR_3] = '\0';
     VAR_6--;
 }
    } else {
 FUNC_2 (VAR_1);
 return VAR_0;
    }

    return 0;
}
