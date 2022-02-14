
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int severity ;
typedef int krb5_context ;
typedef int facility ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (char const*,char*,int*,char*,int*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char const**,char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_8(krb5_context VAR_1, const char *VAR_2, char *VAR_3)
{

    int VAR_4 = 0, VAR_5 = -1, VAR_6;
    char VAR_7;
    const char *VAR_8 = VAR_3;

    VAR_6 = FUNC_2(VAR_8, "%d%c%d/", &VAR_4, &VAR_7, &VAR_5);
    if(VAR_6 == 2){
 if(VAR_7 == '/') {
     if(VAR_4 < 0){
  VAR_5 = -VAR_4;
  VAR_4 = 0;
     }else{
  VAR_5 = VAR_4;
     }
 }
    }
    if(VAR_6){
 VAR_8 = FUNC_3(VAR_8, '/');
 if(VAR_8 == ((void*)0)) {
     FUNC_1(VAR_1, "%s: failed to parse \"%s\"", VAR_2, VAR_3);
     return 1;
 }
 VAR_8++;
    }
    if(FUNC_4(VAR_8, "STDERR") == 0 ||
       FUNC_4(VAR_8, "CONSOLE") == 0 ||
       (FUNC_6(VAR_8, "FILE", 4) == 0 && (VAR_8[4] == ':' || VAR_8[4] == '=')) ||
       (FUNC_6(VAR_8, "DEVICE", 6) == 0 && VAR_8[6] == '='))
 return 0;
    if(FUNC_6(VAR_8, "SYSLOG", 6) == 0){
 int VAR_9 = 0;
 char VAR_10[128] = "";
 char VAR_11[128] = "";
 VAR_8 += 6;
 if(*VAR_8 != '\0')
     VAR_8++;
 if(FUNC_7(&VAR_8, ":", VAR_10, sizeof(VAR_10)) != -1)
     FUNC_7(&VAR_8, ":", VAR_11, sizeof(VAR_11));
 if(*VAR_10 == '\0')
     FUNC_5(VAR_10, "ERR", sizeof(VAR_10));
  if(*VAR_11 == '\0')
     FUNC_5(VAR_11, "AUTH", sizeof(VAR_11));
 if(FUNC_0(VAR_10, VAR_0) == -1) {
     FUNC_1(VAR_1, "%s: unknown syslog facility \"%s\"",
         VAR_2, VAR_11);
     VAR_9++;
 }
 if(FUNC_0(VAR_10, VAR_0) == -1) {
     FUNC_1(VAR_1, "%s: unknown syslog severity \"%s\"",
         VAR_2, VAR_10);
     VAR_9++;
 }
 return VAR_9;
    }else{
 FUNC_1(VAR_1, "%s: unknown log type: \"%s\"", VAR_2, VAR_3);
 return 1;
    }
}
