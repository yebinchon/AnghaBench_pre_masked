
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mode_t ;
struct TYPE_5__ {int gateway_ports; int streamlocal_bind_unlink; scalar_t__ streamlocal_bind_mask; } ;
struct TYPE_6__ {int forward_agent; int forward_x11; int forward_x11_trusted; int forward_x11_timeout; int clear_forwardings; int exit_on_forward_failure; int pubkey_authentication; int challenge_response_authentication; int gss_authentication; int gss_deleg_creds; int password_authentication; int kbd_interactive_authentication; int hostbased_authentication; int batch_mode; int check_host_ip; int strict_host_key_checking; int compression; int tcp_keep_alive; int port; int address_family; int connection_attempts; int connection_timeout; int number_of_password_prompts; int jump_port; int escape_char; int enable_ssh_keysign; int no_host_authentication_for_localhost; int identities_only; int rekey_limit; int rekey_interval; int verify_host_key_dns; int server_alive_interval; int server_alive_count_max; int control_master; int control_persist; int hash_known_hosts; int tun_open; int tun_local; int tun_remote; int permit_local_command; int add_keys_to_agent; int visual_host_key; int ip_qos_interactive; int ip_qos_bulk; int request_tty; int proxy_use_fdpass; int canonicalize_max_dots; int canonicalize_fallback_local; int canonicalize_hostname; int fingerprint_hash; int update_hostkeys; int * pubkey_key_types; int * hostbased_key_types; int * revoked_host_keys; scalar_t__ num_permitted_cnames; scalar_t__ num_canonical_domains; int * ignored_unknown; int * identity_agent; int * remote_command; int * local_command; scalar_t__ control_persist_timeout; int * control_path; scalar_t__ num_setenv; int * setenv; scalar_t__ num_send_env; int * send_env; int * pkcs11_provider; int * bind_interface; int * bind_address; int * preferred_authentications; int log_level; int log_facility; scalar_t__ num_remote_forwards; int * remote_forwards; scalar_t__ num_local_forwards; int * local_forwards; scalar_t__ num_user_hostfiles; scalar_t__ num_system_hostfiles; int * user; int * jump_extra; int * jump_host; int * jump_user; int * proxy_command; int * host_key_alias; int * hostname; scalar_t__ num_certificate_files; scalar_t__ num_identity_files; int * hostkeyalgorithms; int * kex_algorithms; int * macs; int * ciphers; int * kbd_interactive_devices; TYPE_1__ fwd_opts; int * xauth_location; scalar_t__ stdio_forward_port; int * stdio_forward_host; int * version_addendum; } ;
typedef TYPE_2__ Options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char,int) ;

void
FUNC_1(Options * VAR_2)
{
 FUNC_0(VAR_2, 'X', sizeof(*VAR_2));
 VAR_2->version_addendum = ((void*)0);
 VAR_2->forward_agent = -1;
 VAR_2->forward_x11 = -1;
 VAR_2->forward_x11_trusted = -1;
 VAR_2->forward_x11_timeout = -1;
 VAR_2->stdio_forward_host = ((void*)0);
 VAR_2->stdio_forward_port = 0;
 VAR_2->clear_forwardings = -1;
 VAR_2->exit_on_forward_failure = -1;
 VAR_2->xauth_location = ((void*)0);
 VAR_2->fwd_opts.gateway_ports = -1;
 VAR_2->fwd_opts.streamlocal_bind_mask = (mode_t)-1;
 VAR_2->fwd_opts.streamlocal_bind_unlink = -1;
 VAR_2->pubkey_authentication = -1;
 VAR_2->challenge_response_authentication = -1;
 VAR_2->gss_authentication = -1;
 VAR_2->gss_deleg_creds = -1;
 VAR_2->password_authentication = -1;
 VAR_2->kbd_interactive_authentication = -1;
 VAR_2->kbd_interactive_devices = ((void*)0);
 VAR_2->hostbased_authentication = -1;
 VAR_2->batch_mode = -1;
 VAR_2->check_host_ip = -1;
 VAR_2->strict_host_key_checking = -1;
 VAR_2->compression = -1;
 VAR_2->tcp_keep_alive = -1;
 VAR_2->port = -1;
 VAR_2->address_family = -1;
 VAR_2->connection_attempts = -1;
 VAR_2->connection_timeout = -1;
 VAR_2->number_of_password_prompts = -1;
 VAR_2->ciphers = ((void*)0);
 VAR_2->macs = ((void*)0);
 VAR_2->kex_algorithms = ((void*)0);
 VAR_2->hostkeyalgorithms = ((void*)0);
 VAR_2->num_identity_files = 0;
 VAR_2->num_certificate_files = 0;
 VAR_2->hostname = ((void*)0);
 VAR_2->host_key_alias = ((void*)0);
 VAR_2->proxy_command = ((void*)0);
 VAR_2->jump_user = ((void*)0);
 VAR_2->jump_host = ((void*)0);
 VAR_2->jump_port = -1;
 VAR_2->jump_extra = ((void*)0);
 VAR_2->user = ((void*)0);
 VAR_2->escape_char = -1;
 VAR_2->num_system_hostfiles = 0;
 VAR_2->num_user_hostfiles = 0;
 VAR_2->local_forwards = ((void*)0);
 VAR_2->num_local_forwards = 0;
 VAR_2->remote_forwards = ((void*)0);
 VAR_2->num_remote_forwards = 0;
 VAR_2->log_facility = VAR_0;
 VAR_2->log_level = VAR_1;
 VAR_2->preferred_authentications = ((void*)0);
 VAR_2->bind_address = ((void*)0);
 VAR_2->bind_interface = ((void*)0);
 VAR_2->pkcs11_provider = ((void*)0);
 VAR_2->enable_ssh_keysign = - 1;
 VAR_2->no_host_authentication_for_localhost = - 1;
 VAR_2->identities_only = - 1;
 VAR_2->rekey_limit = - 1;
 VAR_2->rekey_interval = -1;
 VAR_2->verify_host_key_dns = -1;
 VAR_2->server_alive_interval = -1;
 VAR_2->server_alive_count_max = -1;
 VAR_2->send_env = ((void*)0);
 VAR_2->num_send_env = 0;
 VAR_2->setenv = ((void*)0);
 VAR_2->num_setenv = 0;
 VAR_2->control_path = ((void*)0);
 VAR_2->control_master = -1;
 VAR_2->control_persist = -1;
 VAR_2->control_persist_timeout = 0;
 VAR_2->hash_known_hosts = -1;
 VAR_2->tun_open = -1;
 VAR_2->tun_local = -1;
 VAR_2->tun_remote = -1;
 VAR_2->local_command = ((void*)0);
 VAR_2->permit_local_command = -1;
 VAR_2->remote_command = ((void*)0);
 VAR_2->add_keys_to_agent = -1;
 VAR_2->identity_agent = ((void*)0);
 VAR_2->visual_host_key = -1;
 VAR_2->ip_qos_interactive = -1;
 VAR_2->ip_qos_bulk = -1;
 VAR_2->request_tty = -1;
 VAR_2->proxy_use_fdpass = -1;
 VAR_2->ignored_unknown = ((void*)0);
 VAR_2->num_canonical_domains = 0;
 VAR_2->num_permitted_cnames = 0;
 VAR_2->canonicalize_max_dots = -1;
 VAR_2->canonicalize_fallback_local = -1;
 VAR_2->canonicalize_hostname = -1;
 VAR_2->revoked_host_keys = ((void*)0);
 VAR_2->fingerprint_hash = -1;
 VAR_2->update_hostkeys = -1;
 VAR_2->hostbased_key_types = ((void*)0);
 VAR_2->pubkey_key_types = ((void*)0);
}
