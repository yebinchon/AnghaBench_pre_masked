
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int ca_cert_id; int cert_id; int key_id; int pin; int engine_id; int engine; int domain_match; int suffix_match; int check_cert_subject; int altsubject_match; int subject_match; int dh_file; int private_key_passwd; int private_key; int client_cert; int ca_path; int ca_cert; } ;
struct eap_peer_config {int phase2; int ca_cert2_id; int cert2_id; int key2_id; int pin2; int engine2_id; int engine2; int domain_match2; int domain_suffix_match2; int check_cert_subject2; int altsubject_match2; int subject_match2; int dh_file2; int private_key2_passwd; int private_key2; int client_cert2; int ca_path2; int ca_cert2; } ;


 int FUNC_0 (struct tls_connection_params*,int ) ;

__attribute__((used)) static void FUNC_1(struct tls_connection_params *VAR_0,
          struct eap_peer_config *VAR_1)
{
 VAR_0->ca_cert = VAR_1->ca_cert2;
 VAR_0->ca_path = VAR_1->ca_path2;
 VAR_0->client_cert = VAR_1->client_cert2;
 VAR_0->private_key = VAR_1->private_key2;
 VAR_0->private_key_passwd = VAR_1->private_key2_passwd;
 VAR_0->dh_file = VAR_1->dh_file2;
 VAR_0->subject_match = VAR_1->subject_match2;
 VAR_0->altsubject_match = VAR_1->altsubject_match2;
 VAR_0->check_cert_subject = VAR_1->check_cert_subject2;
 VAR_0->suffix_match = VAR_1->domain_suffix_match2;
 VAR_0->domain_match = VAR_1->domain_match2;
 VAR_0->engine = VAR_1->engine2;
 VAR_0->engine_id = VAR_1->engine2_id;
 VAR_0->pin = VAR_1->pin2;
 VAR_0->key_id = VAR_1->key2_id;
 VAR_0->cert_id = VAR_1->cert2_id;
 VAR_0->ca_cert_id = VAR_1->ca_cert2_id;
 FUNC_0(VAR_0, VAR_1->phase2);
}
