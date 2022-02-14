
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncs_global {struct tnc_if_imv* imv; } ;
struct tnc_if_imv {struct tnc_if_imv* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,size_t*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct tnc_if_imv* FUNC_3 (int ,char*,char*,int*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct tncs_global *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;
 struct tnc_if_imv *VAR_8, *VAR_9;
 int VAR_10 = 0;

 VAR_9 = ((void*)0);

 VAR_3 = FUNC_1(VAR_1, &VAR_7);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_0, "TNC: Could not open TNC configuration "
      "file '%s'", VAR_1);
  return -1;
 }

 VAR_4 = VAR_3 + VAR_7;
 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 = VAR_6 + 1) {
  VAR_6 = VAR_5;
  while (*VAR_6 != '\n' && *VAR_6 != '\r' &&
         VAR_6 < VAR_4)
   VAR_6++;
  *VAR_6 = '\0';

  if (FUNC_2(VAR_5, "IMV ", 4) == 0) {
   int VAR_11 = 0;

   VAR_8 = FUNC_3(VAR_10++, VAR_5 + 4, VAR_6, &VAR_11);
   if (VAR_11)
    return -1;
   if (VAR_8) {
    if (VAR_9 == ((void*)0))
     VAR_2->imv = VAR_8;
    else
     VAR_9->next = VAR_8;
    VAR_9 = VAR_8;
   }
  }
 }

 FUNC_0(VAR_3);

 return 0;
}
