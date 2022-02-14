
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_pac {struct eap_teap_pac* next; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eap_teap_pac*,char**,char**,size_t*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,char const*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,int,char*,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,int,char const*) ;

int FUNC_7(struct eap_sm *VAR_2, struct eap_teap_pac *VAR_3,
        const char *VAR_4)
{
 struct eap_teap_pac *VAR_5;
 int VAR_6, VAR_7 = 0;
 char *VAR_8, *VAR_9;
 size_t VAR_10;

 if (!VAR_4)
  return -1;

 VAR_10 = 1024;
 VAR_9 = VAR_8 = FUNC_3(VAR_10);
 if (!VAR_8)
  return -1;

 VAR_6 = FUNC_4(VAR_9, VAR_8 + VAR_10 - VAR_9, "%s\n", VAR_1);
 if (FUNC_5(VAR_8 + VAR_10 - VAR_9, VAR_6)) {
  FUNC_2(VAR_8);
  return -1;
 }
 VAR_9 += VAR_6;

 VAR_5 = VAR_3;
 while (VAR_5) {
  if (FUNC_0(VAR_5, &VAR_8, &VAR_9, &VAR_10)) {
   FUNC_2(VAR_8);
   return -1;
  }
  VAR_7++;
  VAR_5 = VAR_5->next;
 }

 if (FUNC_1(VAR_2, VAR_4, VAR_8, VAR_9 - VAR_8)) {
  FUNC_2(VAR_8);
  return -1;
 }

 FUNC_6(VAR_0, "EAP-TEAP: Wrote %d PAC entries into '%s'",
     VAR_7, VAR_4);

 return 0;
}
