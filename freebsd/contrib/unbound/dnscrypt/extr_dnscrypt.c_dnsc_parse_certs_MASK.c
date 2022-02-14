
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnsc_env {unsigned int signed_certs_count; unsigned int rotated_certs_count; void* signed_certs; void** rotated_certs; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* dnscrypt_provider_cert_rotated; struct config_strlist* dnscrypt_provider_cert; } ;
struct SignedCert {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct config_file*,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 void* FUNC_3 (unsigned int,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct dnsc_env *VAR_2, struct config_file *VAR_3)
{
 struct config_strlist *VAR_4, *VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 char *VAR_8;

 VAR_2->signed_certs_count = 0U;
 VAR_2->rotated_certs_count = 0U;
 for (VAR_4 = VAR_3->dnscrypt_provider_cert; VAR_4; VAR_4 = VAR_4->next) {
  VAR_2->signed_certs_count++;
 }
 for (VAR_4 = VAR_3->dnscrypt_provider_cert_rotated; VAR_4; VAR_4 = VAR_4->next) {
  VAR_2->rotated_certs_count++;
 }
 VAR_2->signed_certs = FUNC_3(VAR_2->signed_certs_count,
            sizeof *VAR_2->signed_certs);

 VAR_2->rotated_certs = FUNC_3(VAR_2->rotated_certs_count,
            sizeof VAR_2->signed_certs);
 VAR_6 = 0U;
 VAR_7 = 0U;
 for(VAR_4 = VAR_3->dnscrypt_provider_cert; VAR_4; VAR_4 = VAR_4->next, VAR_6++) {
  VAR_8 = FUNC_0(VAR_3, VAR_4->str);
  if(FUNC_1(
    VAR_8,
    (char *)(VAR_2->signed_certs + VAR_6),
    sizeof(struct SignedCert)) != 0) {
   FUNC_2("dnsc_parse_certs: failed to load %s: %s", VAR_4->str, FUNC_5(VAR_1));
  }
  for(VAR_5 = VAR_3->dnscrypt_provider_cert_rotated; VAR_5; VAR_5 = VAR_5->next) {
   if(FUNC_4(VAR_4->str, VAR_5->str) == 0) {
    *(VAR_2->rotated_certs + VAR_7) = VAR_2->signed_certs + VAR_6;
    VAR_7++;
    FUNC_6(VAR_0, "Cert %s is rotated and will not be distributed via DNS", VAR_4->str);
    break;
   }
  }
  FUNC_6(VAR_0, "Loaded cert %s", VAR_4->str);
 }
 return VAR_6;
}
