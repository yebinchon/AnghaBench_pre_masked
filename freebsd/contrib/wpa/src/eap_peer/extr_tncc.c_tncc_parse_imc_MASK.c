
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {int imcID; void* path; struct tnc_if_imc* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tnc_if_imc*) ;
 void* FUNC_1 (char*) ;
 struct tnc_if_imc* FUNC_2 (int) ;
 struct tnc_if_imc** VAR_3 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static struct tnc_if_imc * FUNC_4(char *VAR_4, char *VAR_5, int *VAR_6)
{
 struct tnc_if_imc *VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_3[VAR_10] == ((void*)0))
   break;
 }
 if (VAR_10 >= VAR_2) {
  FUNC_3(VAR_0, "TNC: Too many IMCs");
  return ((void*)0);
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  *VAR_6 = 1;
  return ((void*)0);
 }

 VAR_7->imcID = VAR_10;

 VAR_8 = VAR_4;
 FUNC_3(VAR_0, "TNC: Configured IMC: %s", VAR_8);
 if (VAR_8 + 1 >= VAR_5 || *VAR_8 != '"') {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMC line '%s' "
      "(no starting quotation mark)", VAR_4);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_8++;
 VAR_9 = VAR_8;
 while (VAR_9 < VAR_5 && *VAR_9 != '"')
  VAR_9++;
 if (VAR_9 >= VAR_5) {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMC line '%s' "
      "(no ending quotation mark)", VAR_4);
  FUNC_0(VAR_7);
  return ((void*)0);
 }
 *VAR_9 = '\0';
 FUNC_3(VAR_0, "TNC: Name: '%s'", VAR_8);
 VAR_7->name = FUNC_1(VAR_8);

 VAR_8 = VAR_9 + 1;
 if (VAR_8 >= VAR_5 || *VAR_8 != ' ') {
  FUNC_3(VAR_1, "TNC: Ignoring invalid IMC line '%s' "
      "(no space after name)", VAR_4);
  FUNC_0(VAR_7->name);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_8++;
 FUNC_3(VAR_0, "TNC: IMC file: '%s'", VAR_8);
 VAR_7->path = FUNC_1(VAR_8);
 VAR_3[VAR_7->imcID] = VAR_7;

 return VAR_7;
}
