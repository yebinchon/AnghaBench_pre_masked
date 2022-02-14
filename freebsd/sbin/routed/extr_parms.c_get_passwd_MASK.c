
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int16_t ;
struct parm {struct auth* parm_auth; } ;
struct auth {scalar_t__ type; int keyid; scalar_t__ end; scalar_t__ start; scalar_t__ key; } ;
typedef int k ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct auth*,struct auth*,int) ;
 int FUNC_2 (struct auth*,int ,int) ;
 scalar_t__ FUNC_3 (char**,char*,char*,char*,int) ;
 char* FUNC_4 (scalar_t__*,char**,char*,char*,char*,int) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,char**,int ) ;

__attribute__((used)) static const char *
FUNC_7(char *VAR_4,
    char *VAR_5,
    struct parm *VAR_6,
    u_int16_t VAR_7,
    int VAR_8)
{
 static char VAR_9[80];
 char *VAR_10, *VAR_11, VAR_12;
 struct auth VAR_13, *VAR_14, *VAR_15;
 int VAR_16;
 u_long VAR_17;

 FUNC_0(VAR_5 != ((void*)0));
 if (!VAR_8)
  return "ignore unsafe password";

 for (VAR_14 = VAR_6->parm_auth, VAR_16 = 0;
      VAR_14->type != VAR_3; VAR_16++, VAR_14++) {
  if (VAR_16 >= VAR_1)
   return "too many passwords";
 }

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.type = VAR_7;
 VAR_13.end = -1-VAR_0;

 VAR_10 = VAR_5;
 if (0 > FUNC_3(&VAR_5, "| ,\n\r", &VAR_12,
       (char *)VAR_13.key, sizeof(VAR_13.key)))
  return VAR_4;

 if (VAR_12 != '|') {
  if (VAR_7 == VAR_2)
   return "missing Keyid";
 } else {
  VAR_10 = ++VAR_5;
  VAR_9[sizeof(VAR_9)-1] = '\0';
  if (0 > FUNC_3(&VAR_5, "| ,\n\r", &VAR_12, VAR_9,sizeof(VAR_9))
      || VAR_9[sizeof(VAR_9)-1] != '\0'
      || (VAR_17 = FUNC_6(VAR_9,&VAR_11,0)) > 255
      || *VAR_11 != '\0') {
   FUNC_5(VAR_9,"bad KeyID \"%.20s\"", VAR_10);
   return VAR_9;
  }
  for (VAR_15 = VAR_6->parm_auth; VAR_15 < VAR_14; VAR_15++) {
   if (VAR_15->keyid == VAR_17) {
    FUNC_5(VAR_9,"duplicate KeyID \"%.20s\"", VAR_10);
    return VAR_9;
   }
  }
  VAR_13.keyid = (int)VAR_17;

  if (VAR_12 == '|') {
   VAR_10 = ++VAR_5;
   if (((void*)0) != (VAR_11 = FUNC_4(&VAR_13.start,&VAR_5,VAR_10,&VAR_12,
        VAR_9,sizeof(VAR_9))))
    return VAR_11;
   if (VAR_12 != '|')
    return "missing second timestamp";
   VAR_10 = ++VAR_5;
   if (((void*)0) != (VAR_11 = FUNC_4(&VAR_13.end,&VAR_5,VAR_10,&VAR_12,
        VAR_9,sizeof(VAR_9))))
    return VAR_11;
   if ((u_long)VAR_13.start > (u_long)VAR_13.end) {
    FUNC_5(VAR_9,"out of order timestamp %.30s",
     VAR_10);
    return VAR_9;
   }
  }
 }
 if (VAR_12 != '\0')
  return VAR_4;

 FUNC_1(VAR_14, &VAR_13, sizeof(*VAR_14));
 return 0;
}
