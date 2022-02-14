
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dnsc_env {unsigned int keypairs_count; unsigned int signed_certs_count; TYPE_1__* signed_certs; TYPE_2__* certs; TYPE_3__* keypairs; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* dnscrypt_secret_key; } ;
struct TYPE_5__ {int* magic_query; int* es_version; TYPE_3__* keypair; } ;
typedef TYPE_2__ dnsccert ;
struct TYPE_6__ {int crypt_publickey; scalar_t__ crypt_secretkey; } ;
struct TYPE_4__ {int version_major; int magic_query; int server_publickey; } ;
typedef TYPE_3__ KeyPair ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 char* FUNC_1 (struct config_file*,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int*,int ,int) ;
 void* FUNC_8 (unsigned int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_11(struct dnsc_env *VAR_4, struct config_file *VAR_5)
{
 struct config_strlist *VAR_6;
 size_t VAR_7, VAR_8;
 size_t VAR_9;
 char *VAR_10;

 VAR_4->keypairs_count = 0U;
 for (VAR_6 = VAR_5->dnscrypt_secret_key; VAR_6; VAR_6 = VAR_6->next) {
  VAR_4->keypairs_count++;
 }

 VAR_4->keypairs = FUNC_8(VAR_4->keypairs_count,
  sizeof *VAR_4->keypairs);
 VAR_4->certs = FUNC_8(VAR_4->signed_certs_count,
  sizeof *VAR_4->certs);

 VAR_7 = 0U;
 VAR_8 = 0U;
 for(VAR_6 = VAR_5->dnscrypt_secret_key; VAR_6; VAR_6 = VAR_6->next, VAR_8++) {
  char VAR_11[80];
  int VAR_12 = 0;
  KeyPair *VAR_13 = &VAR_4->keypairs[VAR_8];
  VAR_10 = FUNC_1(VAR_5, VAR_6->str);
  if(FUNC_3(
    VAR_10,
    (char *)(VAR_13->crypt_secretkey),
    VAR_2) != 0) {
   FUNC_4("dnsc_parse_keys: failed to load %s: %s", VAR_6->str, FUNC_9(VAR_3));
  }
  FUNC_10(VAR_0, "Loaded key %s", VAR_6->str);
  if (FUNC_0(VAR_13->crypt_publickey,
   VAR_13->crypt_secretkey) != 0) {
   FUNC_4("dnsc_parse_keys: could not generate public key from %s", VAR_6->str);
  }
  FUNC_2(VAR_11, VAR_13->crypt_publickey);
  FUNC_10(VAR_0, "Crypt public key fingerprint for %s: %s", VAR_6->str, VAR_11);

  for(VAR_9 = 0; VAR_9 < VAR_4->signed_certs_count; VAR_9++) {
   if(FUNC_6(VAR_13->crypt_publickey,
    VAR_4->signed_certs[VAR_9].server_publickey,
    VAR_1) == 0) {
    dnsccert *VAR_14 = &VAR_4->certs[VAR_7++];
    VAR_12 = 1;
    VAR_14->keypair = VAR_13;
    FUNC_7(VAR_14->magic_query,
           VAR_4->signed_certs[VAR_9].magic_query,
     sizeof VAR_4->signed_certs[VAR_9].magic_query);
    FUNC_7(VAR_14->es_version,
           VAR_4->signed_certs[VAR_9].version_major,
           sizeof VAR_4->signed_certs[VAR_9].version_major
    );
    FUNC_2(VAR_11,
       VAR_14->keypair->crypt_publickey);
    FUNC_10(VAR_0, "Crypt public key fingerprint for %s: %s",
     VAR_6->str, VAR_11);
    FUNC_10(VAR_0, "Using %s",
     FUNC_5(VAR_14->es_version));

    if (VAR_14->es_version[1] == 0x02) {
        FUNC_4("Certificate for XChacha20 but libsodium does not support it.");
    }


              }
         }
  if (!VAR_12) {
      FUNC_4("dnsc_parse_keys: could not match certificate for key "
          "%s. Unable to determine ES version.",
          VAR_6->str);
  }
 }
 return VAR_7;
}
