
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int first; } ;
struct TYPE_3__ {int first; } ;
struct config_file {struct config_file* cachedb_secret; struct config_file* cachedb_backend; int ipsecmod_whitelist; struct config_file* ipsecmod_hook; int ratelimit_below_domain; int ratelimit_for_domain; struct config_file* dnstap_version; struct config_file* dnstap_identity; struct config_file* dnstap_socket_path; int dns64_ignore_aaaa; struct config_file* dns64_prefix; struct config_file* control_cert_file; struct config_file* control_key_file; struct config_file* server_cert_file; struct config_file* server_key_file; TYPE_2__ control_ifs; int acl_tag_datas; int acl_tag_actions; int respip_tags; int acl_tags; int local_zone_tags; int num_tags; int tagname; int local_zone_overrides; int local_data; int local_zones_nodefault; int local_zones; struct config_file* val_nsec3_key_iterations; int tcp_connection_limits; int acls; int dlv_anchor_list; struct config_file* dlv_anchor_file; int domain_insecure; int trust_anchor_list; int trusted_keys_file_list; int trust_anchor_file_list; int auto_trust_anchor_file_list; int private_domain; int private_address; int caps_whitelist; struct config_file* python_script; struct config_file* outgoing_avail_ports; struct config_file* module_conf; struct config_file* version; struct config_file* identity; int client_subnet_zone; int client_subnet; int root_hints; int donotqueryaddrs; int views; int auths; int forwards; int stubs; int num_out_ifs; int out_ifs; int num_ifs; int ifs; struct config_file* log_identity; struct config_file* tls_ciphersuites; struct config_file* tls_ciphers; TYPE_1__ tls_session_ticket_keys; int tls_additional_port; struct config_file* tls_cert_bundle; struct config_file* ssl_service_pem; struct config_file* ssl_service_key; struct config_file* target_fetch_policy; struct config_file* pidfile; struct config_file* logfile; struct config_file* directory; struct config_file* chrootdir; struct config_file* username; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct config_file*) ;

void
FUNC_9(struct config_file* VAR_0)
{
 if(!VAR_0) return;
 FUNC_8(VAR_0->username);
 FUNC_8(VAR_0->chrootdir);
 FUNC_8(VAR_0->directory);
 FUNC_8(VAR_0->logfile);
 FUNC_8(VAR_0->pidfile);
 FUNC_8(VAR_0->target_fetch_policy);
 FUNC_8(VAR_0->ssl_service_key);
 FUNC_8(VAR_0->ssl_service_pem);
 FUNC_8(VAR_0->tls_cert_bundle);
 FUNC_4(VAR_0->tls_additional_port);
 FUNC_4(VAR_0->tls_session_ticket_keys.first);
 FUNC_8(VAR_0->tls_ciphers);
 FUNC_8(VAR_0->tls_ciphersuites);
 FUNC_8(VAR_0->log_identity);
 FUNC_0(VAR_0->ifs, VAR_0->num_ifs);
 FUNC_0(VAR_0->out_ifs, VAR_0->num_out_ifs);
 FUNC_5(VAR_0->stubs);
 FUNC_5(VAR_0->forwards);
 FUNC_2(VAR_0->auths);
 FUNC_7(VAR_0->views);
 FUNC_4(VAR_0->donotqueryaddrs);
 FUNC_4(VAR_0->root_hints);




 FUNC_8(VAR_0->identity);
 FUNC_8(VAR_0->version);
 FUNC_8(VAR_0->module_conf);
 FUNC_8(VAR_0->outgoing_avail_ports);
 FUNC_8(VAR_0->python_script);
 FUNC_4(VAR_0->caps_whitelist);
 FUNC_4(VAR_0->private_address);
 FUNC_4(VAR_0->private_domain);
 FUNC_4(VAR_0->auto_trust_anchor_file_list);
 FUNC_4(VAR_0->trust_anchor_file_list);
 FUNC_4(VAR_0->trusted_keys_file_list);
 FUNC_4(VAR_0->trust_anchor_list);
 FUNC_4(VAR_0->domain_insecure);
 FUNC_8(VAR_0->dlv_anchor_file);
 FUNC_4(VAR_0->dlv_anchor_list);
 FUNC_3(VAR_0->acls);
 FUNC_3(VAR_0->tcp_connection_limits);
 FUNC_8(VAR_0->val_nsec3_key_iterations);
 FUNC_3(VAR_0->local_zones);
 FUNC_4(VAR_0->local_zones_nodefault);
 FUNC_4(VAR_0->local_data);
 FUNC_6(VAR_0->local_zone_overrides);
 FUNC_0(VAR_0->tagname, VAR_0->num_tags);
 FUNC_1(VAR_0->local_zone_tags);
 FUNC_1(VAR_0->acl_tags);
 FUNC_1(VAR_0->respip_tags);
 FUNC_6(VAR_0->acl_tag_actions);
 FUNC_6(VAR_0->acl_tag_datas);
 FUNC_4(VAR_0->control_ifs.first);
 FUNC_8(VAR_0->server_key_file);
 FUNC_8(VAR_0->server_cert_file);
 FUNC_8(VAR_0->control_key_file);
 FUNC_8(VAR_0->control_cert_file);
 FUNC_8(VAR_0->dns64_prefix);
 FUNC_4(VAR_0->dns64_ignore_aaaa);
 FUNC_8(VAR_0->dnstap_socket_path);
 FUNC_8(VAR_0->dnstap_identity);
 FUNC_8(VAR_0->dnstap_version);
 FUNC_3(VAR_0->ratelimit_for_domain);
 FUNC_3(VAR_0->ratelimit_below_domain);
 FUNC_8(VAR_0);
}
