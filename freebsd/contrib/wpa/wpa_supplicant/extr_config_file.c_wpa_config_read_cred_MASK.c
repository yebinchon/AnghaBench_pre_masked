
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {int id; int sim_num; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 struct wpa_cred* FUNC_2 (int) ;
 int FUNC_3 (struct wpa_cred*) ;
 scalar_t__ FUNC_4 (char*,int,int *,int*,char**) ;
 scalar_t__ FUNC_5 (struct wpa_cred*,char*,char*,int) ;
 int FUNC_6 (int ,char*,int,...) ;

__attribute__((used)) static struct wpa_cred * FUNC_7(FILE *VAR_3, int *VAR_4, int VAR_5)
{
 struct wpa_cred *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 char VAR_9[256], *VAR_10, *VAR_11;

 FUNC_6(VAR_2, "Line: %d - start of a new cred block", *VAR_4);
 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->id = VAR_5;
 VAR_6->sim_num = VAR_0;

 while (FUNC_4(VAR_9, sizeof(VAR_9), VAR_3, VAR_4, &VAR_10)) {
  if (FUNC_1(VAR_10, "}") == 0) {
   VAR_8 = 1;
   break;
  }

  VAR_11 = FUNC_0(VAR_10, '=');
  if (VAR_11 == ((void*)0)) {
   FUNC_6(VAR_1, "Line %d: Invalid cred line "
       "'%s'.", *VAR_4, VAR_10);
   VAR_7++;
   continue;
  }

  *VAR_11++ = '\0';
  if (*VAR_11 == '"') {
   if (FUNC_0(VAR_11 + 1, '"') == ((void*)0)) {
    FUNC_6(VAR_1, "Line %d: invalid "
        "quotation '%s'.", *VAR_4, VAR_11);
    VAR_7++;
    continue;
   }
  }

  if (FUNC_5(VAR_6, VAR_10, VAR_11, *VAR_4) < 0)
   VAR_7++;
 }

 if (!VAR_8) {
  FUNC_6(VAR_1, "Line %d: cred block was not "
      "terminated properly.", *VAR_4);
  VAR_7++;
 }

 if (VAR_7) {
  FUNC_3(VAR_6);
  VAR_6 = ((void*)0);
 }

 return VAR_6;
}
