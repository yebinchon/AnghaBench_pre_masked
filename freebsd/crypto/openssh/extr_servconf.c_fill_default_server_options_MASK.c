
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
typedef int mode_t ;
struct TYPE_7__ {int gateway_ports; int streamlocal_bind_mask; int streamlocal_bind_unlink; } ;
struct TYPE_8__ {int use_pam; scalar_t__ num_host_key_files; scalar_t__ num_ports; int address_family; int login_grace_time; scalar_t__ permit_root_login; int ignore_rhosts; int ignore_user_known_hosts; int print_motd; int print_lastlog; int x11_forwarding; int x11_display_offset; int x11_use_localhost; int permit_tty; int permit_user_rc; int strict_modes; int tcp_keep_alive; scalar_t__ log_facility; scalar_t__ log_level; int hostbased_authentication; int hostbased_uses_name_from_packet_only; int pubkey_authentication; int kerberos_authentication; int kerberos_or_local_passwd; int kerberos_ticket_cleanup; int kerberos_get_afs_token; int gss_authentication; int gss_cleanup_creds; int gss_strict_acceptor; int password_authentication; int kbd_interactive_authentication; int challenge_response_authentication; int permit_empty_passwd; int permit_user_env; int compression; int rekey_limit; int rekey_interval; int allow_tcp_forwarding; int allow_streamlocal_forwarding; int allow_agent_forwarding; int max_startups; int max_startups_rate; int max_startups_begin; int max_authtries; int max_sessions; int use_dns; int client_alive_interval; int client_alive_count_max; scalar_t__ num_authkeys_files; int permit_tun; int ip_qos_interactive; int ip_qos_bulk; int fingerprint_hash; int disable_forwarding; int expose_userauth_info; int use_blacklist; size_t num_host_cert_files; int num_auth_methods; int ** auth_methods; int ** host_cert_files; int ** host_key_files; int * routing_domain; int * chroot_directory; int * adm_forced_command; int * authorized_principals_file; int * revoked_keys_file; int * trusted_user_ca_keys; int * banner; int * xauth_location; int * pid_file; TYPE_1__ fwd_opts; int * version_addendum; int authorized_keys_files; int * permit_user_env_whitelist; int * listen_addrs; int * ports; } ;
typedef TYPE_2__ ServerOptions ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_2 (int ,int ,char*,int *,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_27 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int VAR_28 ;
 void* FUNC_9 (int ) ;

void
FUNC_10(ServerOptions *VAR_29)
{
 u_int VAR_30;


 if (VAR_29->use_pam == -1)
  VAR_29->use_pam = 1;


 if (VAR_29->num_host_key_files == 0) {

  FUNC_7(VAR_27, 0, VAR_29,
      VAR_21);
  FUNC_7(VAR_27, 0, VAR_29,
      VAR_18);




  FUNC_7(VAR_27, 0, VAR_29,
      VAR_20);




 }
 if (VAR_29->num_host_key_files == 0)
  FUNC_5("No host key files found");

 if (VAR_29->num_ports == 0)
  VAR_29->ports[VAR_29->num_ports++] = VAR_10;
 if (VAR_29->address_family == -1)
  VAR_29->address_family = VAR_0;
 if (VAR_29->listen_addrs == ((void*)0))
  FUNC_1(VAR_29, ((void*)0), ((void*)0), 0);
 if (VAR_29->pid_file == ((void*)0))
  VAR_29->pid_file = FUNC_9(VAR_23);
 if (VAR_29->login_grace_time == -1)
  VAR_29->login_grace_time = 120;
 if (VAR_29->permit_root_login == VAR_8)
  VAR_29->permit_root_login = VAR_7;
 if (VAR_29->ignore_rhosts == -1)
  VAR_29->ignore_rhosts = 1;
 if (VAR_29->ignore_user_known_hosts == -1)
  VAR_29->ignore_user_known_hosts = 0;
 if (VAR_29->print_motd == -1)
  VAR_29->print_motd = 1;
 if (VAR_29->print_lastlog == -1)
  VAR_29->print_lastlog = 1;
 if (VAR_29->x11_forwarding == -1)
  VAR_29->x11_forwarding = 1;
 if (VAR_29->x11_display_offset == -1)
  VAR_29->x11_display_offset = 10;
 if (VAR_29->x11_use_localhost == -1)
  VAR_29->x11_use_localhost = 1;
 if (VAR_29->xauth_location == ((void*)0))
  VAR_29->xauth_location = FUNC_9(VAR_26);
 if (VAR_29->permit_tty == -1)
  VAR_29->permit_tty = 1;
 if (VAR_29->permit_user_rc == -1)
  VAR_29->permit_user_rc = 1;
 if (VAR_29->strict_modes == -1)
  VAR_29->strict_modes = 1;
 if (VAR_29->tcp_keep_alive == -1)
  VAR_29->tcp_keep_alive = 1;
 if (VAR_29->log_facility == VAR_15)
  VAR_29->log_facility = VAR_14;
 if (VAR_29->log_level == VAR_17)
  VAR_29->log_level = VAR_16;
 if (VAR_29->hostbased_authentication == -1)
  VAR_29->hostbased_authentication = 0;
 if (VAR_29->hostbased_uses_name_from_packet_only == -1)
  VAR_29->hostbased_uses_name_from_packet_only = 0;
 if (VAR_29->pubkey_authentication == -1)
  VAR_29->pubkey_authentication = 1;
 if (VAR_29->kerberos_authentication == -1)
  VAR_29->kerberos_authentication = 0;
 if (VAR_29->kerberos_or_local_passwd == -1)
  VAR_29->kerberos_or_local_passwd = 1;
 if (VAR_29->kerberos_ticket_cleanup == -1)
  VAR_29->kerberos_ticket_cleanup = 1;
 if (VAR_29->kerberos_get_afs_token == -1)
  VAR_29->kerberos_get_afs_token = 0;
 if (VAR_29->gss_authentication == -1)
  VAR_29->gss_authentication = 0;
 if (VAR_29->gss_cleanup_creds == -1)
  VAR_29->gss_cleanup_creds = 1;
 if (VAR_29->gss_strict_acceptor == -1)
  VAR_29->gss_strict_acceptor = 1;
 if (VAR_29->password_authentication == -1)
  VAR_29->password_authentication = 0;
 if (VAR_29->kbd_interactive_authentication == -1)
  VAR_29->kbd_interactive_authentication = 0;
 if (VAR_29->challenge_response_authentication == -1)
  VAR_29->challenge_response_authentication = 1;
 if (VAR_29->permit_empty_passwd == -1)
  VAR_29->permit_empty_passwd = 0;
 if (VAR_29->permit_user_env == -1) {
  VAR_29->permit_user_env = 0;
  VAR_29->permit_user_env_whitelist = ((void*)0);
 }
 if (VAR_29->compression == -1)
  VAR_29->compression = VAR_1;
 if (VAR_29->rekey_limit == -1)
  VAR_29->rekey_limit = 0;
 if (VAR_29->rekey_interval == -1)
  VAR_29->rekey_interval = 0;
 if (VAR_29->allow_tcp_forwarding == -1)
  VAR_29->allow_tcp_forwarding = VAR_4;
 if (VAR_29->allow_streamlocal_forwarding == -1)
  VAR_29->allow_streamlocal_forwarding = VAR_4;
 if (VAR_29->allow_agent_forwarding == -1)
  VAR_29->allow_agent_forwarding = 1;
 if (VAR_29->fwd_opts.gateway_ports == -1)
  VAR_29->fwd_opts.gateway_ports = 0;
 if (VAR_29->max_startups == -1)
  VAR_29->max_startups = 100;
 if (VAR_29->max_startups_rate == -1)
  VAR_29->max_startups_rate = 30;
 if (VAR_29->max_startups_begin == -1)
  VAR_29->max_startups_begin = 10;
 if (VAR_29->max_authtries == -1)
  VAR_29->max_authtries = VAR_2;
 if (VAR_29->max_sessions == -1)
  VAR_29->max_sessions = VAR_3;
 if (VAR_29->use_dns == -1)
  VAR_29->use_dns = 1;
 if (VAR_29->client_alive_interval == -1)
  VAR_29->client_alive_interval = 0;
 if (VAR_29->client_alive_count_max == -1)
  VAR_29->client_alive_count_max = 3;
 if (VAR_29->num_authkeys_files == 0) {
  FUNC_2(VAR_27, 0, "AuthorizedKeysFiles",
      &VAR_29->authorized_keys_files,
      &VAR_29->num_authkeys_files,
      VAR_24);
  FUNC_2(VAR_27, 0, "AuthorizedKeysFiles",
      &VAR_29->authorized_keys_files,
      &VAR_29->num_authkeys_files,
      VAR_25);
 }
 if (VAR_29->permit_tun == -1)
  VAR_29->permit_tun = VAR_12;
 if (VAR_29->ip_qos_interactive == -1)
  VAR_29->ip_qos_interactive = VAR_5;
 if (VAR_29->ip_qos_bulk == -1)
  VAR_29->ip_qos_bulk = VAR_6;
 if (VAR_29->version_addendum == ((void*)0))
  VAR_29->version_addendum = FUNC_9(VAR_13);
 if (VAR_29->fwd_opts.streamlocal_bind_mask == (mode_t)-1)
  VAR_29->fwd_opts.streamlocal_bind_mask = 0177;
 if (VAR_29->fwd_opts.streamlocal_bind_unlink == -1)
  VAR_29->fwd_opts.streamlocal_bind_unlink = 0;
 if (VAR_29->fingerprint_hash == -1)
  VAR_29->fingerprint_hash = VAR_11;
 if (VAR_29->disable_forwarding == -1)
  VAR_29->disable_forwarding = 0;
 if (VAR_29->expose_userauth_info == -1)
  VAR_29->expose_userauth_info = 0;
 if (VAR_29->use_blacklist == -1)
  VAR_29->use_blacklist = 0;

 FUNC_3(VAR_29);


 if (VAR_28 == -1)
  VAR_28 = VAR_9;
 do { if (FUNC_0(VAR_29->pid_file)) { FUNC_6(VAR_29->pid_file); VAR_29->pid_file = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->xauth_location)) { FUNC_6(VAR_29->xauth_location); VAR_29->xauth_location = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->banner)) { FUNC_6(VAR_29->banner); VAR_29->banner = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->trusted_user_ca_keys)) { FUNC_6(VAR_29->trusted_user_ca_keys); VAR_29->trusted_user_ca_keys = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->revoked_keys_file)) { FUNC_6(VAR_29->revoked_keys_file); VAR_29->revoked_keys_file = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->authorized_principals_file)) { FUNC_6(VAR_29->authorized_principals_file); VAR_29->authorized_principals_file = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->adm_forced_command)) { FUNC_6(VAR_29->adm_forced_command); VAR_29->adm_forced_command = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->chroot_directory)) { FUNC_6(VAR_29->chroot_directory); VAR_29->chroot_directory = ((void*)0); } } while(0);
 do { if (FUNC_0(VAR_29->routing_domain)) { FUNC_6(VAR_29->routing_domain); VAR_29->routing_domain = ((void*)0); } } while(0);
 for (VAR_30 = 0; VAR_30 < VAR_29->num_host_key_files; VAR_30++)
  do { if (FUNC_0(VAR_29->host_key_files[VAR_30])) { FUNC_6(VAR_29->host_key_files[VAR_30]); VAR_29->host_key_files[VAR_30] = ((void*)0); } } while(0);
 for (VAR_30 = 0; VAR_30 < VAR_29->num_host_cert_files; VAR_30++)
  do { if (FUNC_0(VAR_29->host_cert_files[VAR_30])) { FUNC_6(VAR_29->host_cert_files[VAR_30]); VAR_29->host_cert_files[VAR_30] = ((void*)0); } } while(0);



 if (VAR_29->num_auth_methods == 1 &&
     FUNC_8(VAR_29->auth_methods[0], "any") == 0) {
  FUNC_6(VAR_29->auth_methods[0]);
  VAR_29->auth_methods[0] = ((void*)0);
  VAR_29->num_auth_methods = 0;
 }


 if (VAR_28 && VAR_29->compression == 1) {
  FUNC_4("This platform does not support both privilege "
      "separation and compression");
  FUNC_4("Compression disabled");
  VAR_29->compression = 0;
 }


}
