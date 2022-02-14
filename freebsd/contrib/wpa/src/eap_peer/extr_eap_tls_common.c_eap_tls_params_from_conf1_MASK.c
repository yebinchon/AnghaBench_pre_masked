
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int ca_cert_id; int cert_id; int key_id; int pin; int engine_id; int engine; int domain_match; int suffix_match; int check_cert_subject; int altsubject_match; int subject_match; int dh_file; int private_key_passwd; int private_key; int client_cert; int ca_path; int ca_cert; } ;
struct eap_peer_config {int phase1; int ca_cert_id; int cert_id; int key_id; int pin; int engine_id; int engine; int domain_match; int domain_suffix_match; int check_cert_subject; int altsubject_match; int subject_match; int dh_file; int private_key_passwd; int private_key; int client_cert; int ca_path; int ca_cert; } ;


 int FUNC_0 (struct tls_connection_params*,int ) ;

__attribute__((used)) static void FUNC_1(struct tls_connection_params *VAR_0,
          struct eap_peer_config *VAR_1)
{
 VAR_0->ca_cert = VAR_1->ca_cert;
 VAR_0->ca_path = VAR_1->ca_path;
 VAR_0->client_cert = VAR_1->client_cert;
 VAR_0->private_key = VAR_1->private_key;
 VAR_0->private_key_passwd = VAR_1->private_key_passwd;
 VAR_0->dh_file = VAR_1->dh_file;
 VAR_0->subject_match = VAR_1->subject_match;
 VAR_0->altsubject_match = VAR_1->altsubject_match;
 VAR_0->check_cert_subject = VAR_1->check_cert_subject;
 VAR_0->suffix_match = VAR_1->domain_suffix_match;
 VAR_0->domain_match = VAR_1->domain_match;
 VAR_0->engine = VAR_1->engine;
 VAR_0->engine_id = VAR_1->engine_id;
 VAR_0->pin = VAR_1->pin;
 VAR_0->key_id = VAR_1->key_id;
 VAR_0->cert_id = VAR_1->cert_id;
 VAR_0->ca_cert_id = VAR_1->ca_cert_id;
 FUNC_0(VAR_0, VAR_1->phase1);
}
