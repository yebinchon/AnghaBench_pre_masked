
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {int imvID; void* path; void* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tnc_if_imv*) ;
 void* FUNC_1 (char*) ;
 struct tnc_if_imv* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static struct tnc_if_imv * FUNC_4(int VAR_3, char *VAR_4, char *VAR_5,
       int *VAR_6)
{
 struct tnc_if_imv *VAR_7;
 char *VAR_8, *VAR_9;

 if (VAR_3 >= VAR_2) {
  FUNC_3(VAR_0, "TNC: Too many IMVs");
  return ((void*)0);
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  *VAR_6 = 1;
  return ((void*)0);
 }

 VAR_7->imvID = VAR_3;

 VAR_8 = VAR_4;
 FUNC_3(VAR_0, "TNC: Configured IMV: %s", VAR_8);
 if (VAR_8 + 1 >= VAR_5 || *VAR_8 != '"') {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMV line '%s' "
      "(no starting quotation mark)", VAR_4);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_8++;
 VAR_9 = VAR_8;
 while (VAR_9 < VAR_5 && *VAR_9 != '"')
  VAR_9++;
 if (VAR_9 >= VAR_5) {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMV line '%s' "
      "(no ending quotation mark)", VAR_4);
  FUNC_0(VAR_7);
  return ((void*)0);
 }
 *VAR_9 = '\0';
 FUNC_3(VAR_0, "TNC: Name: '%s'", VAR_8);
 VAR_7->name = FUNC_1(VAR_8);

 VAR_8 = VAR_9 + 1;
 if (VAR_8 >= VAR_5 || *VAR_8 != ' ') {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMV line '%s' "
      "(no space after name)", VAR_4);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_8++;
 FUNC_3(VAR_0, "TNC: IMV file: '%s'", VAR_8);
 VAR_7->path = FUNC_1(VAR_8);

 return VAR_7;
}
