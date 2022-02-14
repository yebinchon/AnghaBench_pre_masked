
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_verify_hash {int * sha256_cert; int * sha256_server; int * sha256_client; int * sha1_cert; int * sha1_server; int * sha1_client; int * md5_cert; int * md5_server; int * md5_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct tls_verify_hash*) ;

int FUNC_2(struct tls_verify_hash *VAR_3)
{
 FUNC_1(VAR_3);
 VAR_3->md5_client = FUNC_0(VAR_0, ((void*)0), 0);
 VAR_3->md5_server = FUNC_0(VAR_0, ((void*)0), 0);
 VAR_3->md5_cert = FUNC_0(VAR_0, ((void*)0), 0);
 VAR_3->sha1_client = FUNC_0(VAR_1, ((void*)0), 0);
 VAR_3->sha1_server = FUNC_0(VAR_1, ((void*)0), 0);
 VAR_3->sha1_cert = FUNC_0(VAR_1, ((void*)0), 0);
 if (VAR_3->md5_client == ((void*)0) || VAR_3->md5_server == ((void*)0) ||
     VAR_3->md5_cert == ((void*)0) || VAR_3->sha1_client == ((void*)0) ||
     VAR_3->sha1_server == ((void*)0) || VAR_3->sha1_cert == ((void*)0)) {
  FUNC_1(VAR_3);
  return -1;
 }
 return 0;
}
