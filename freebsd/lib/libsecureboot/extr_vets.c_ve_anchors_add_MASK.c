
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int br_x509_trust_anchor ;
typedef int br_x509_certificate ;
typedef int anchor_list ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char*,char const*) ;
 char* FUNC_3 (int *,char*,int) ;

__attribute__((used)) static size_t
FUNC_4(br_x509_certificate *VAR_1, size_t VAR_2, anchor_list *VAR_3,
    const char *VAR_4)
{
 br_x509_trust_anchor VAR_5;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (FUNC_1(&VAR_5, &VAR_1[VAR_6]) < 0) {
   break;
  }
  FUNC_0(*VAR_3, VAR_5);
  if (VAR_0 && VAR_4) {
   char VAR_7[64];
   char *VAR_8;

   VAR_8 = FUNC_3(&VAR_1[VAR_6], VAR_7, sizeof(VAR_7));
   if (VAR_8) {
    FUNC_2("x509_anchor(%s) %s\n", VAR_8, VAR_4);
   }
  }
 }
 return (VAR_6);
}
