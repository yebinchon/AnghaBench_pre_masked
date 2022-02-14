
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nodelist {int dummy; } ;


 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

 int VAR_2 ;

 int FUNC_2 () ;
 char* FUNC_3 (char const*,struct nodelist**,int ,int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char const*,char*,int ) ;
 char* FUNC_7 () ;

__attribute__((used)) static const char *
FUNC_8(const char *VAR_5, struct nodelist **restrict VAR_6,
    const char *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 const char *VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_1, ((void*)0));
 FUNC_0(VAR_3);
 VAR_12 = FUNC_7() + VAR_9;

 switch (VAR_8) {
 case 129:
  FUNC_6(VAR_7, VAR_12, 0);
  VAR_13 = VAR_12 - VAR_3;
  FUNC_1(VAR_13, VAR_3);
  return VAR_11;

 case 128:
  if (*VAR_5 != VAR_0) {
   FUNC_5(VAR_4, "%s\n", VAR_12);
   FUNC_4((char *)((void*)0));
  }
  FUNC_4("%.*s: parameter %snot set", (int)(VAR_5 - VAR_7 - 1),
        VAR_7, (VAR_10 & VAR_2) ? "null or " : "");

 default:
  FUNC_2();
 }
}
