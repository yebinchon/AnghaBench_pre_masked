
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_port {int dummy; } ;
struct config_file {int port; int do_ip4; int do_ip6; int do_tcp; scalar_t__ incoming_num_tcp; int num_ifs; char** ifs; int dnscrypt_port; int use_systemd; int ip_freebind; int tcp_mss; int ip_transparent; int tls_additional_port; int ssl_port; int so_sndbuf; int so_rcvbuf; int do_udp; scalar_t__ if_automatic; } ;
struct addrinfo {void* ai_family; int ai_flags; } ;
typedef int portbuf ;
typedef int hints ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct listen_port*) ;
 int FUNC_1 (struct addrinfo*,int ,int) ;
 int FUNC_2 (char*,int,int ,int,struct addrinfo*,char*,struct listen_port**,int ,int ,int ,int ,int*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;

struct listen_port*
FUNC_5(struct config_file* VAR_5, int* VAR_6)
{
 struct listen_port* VAR_7 = ((void*)0);
 struct addrinfo VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 char VAR_14[32];
 FUNC_3(VAR_14, sizeof(VAR_14), "%d", VAR_5->port);
 VAR_10 = VAR_5->do_ip4;
 VAR_11 = VAR_5->do_ip6;
 VAR_12 = VAR_5->do_tcp;
 VAR_13 = VAR_5->if_automatic && VAR_5->do_udp;
 if(VAR_5->incoming_num_tcp == 0)
  VAR_12 = 0;


 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_flags = VAR_4;

 if(VAR_5->num_ifs > 0)
  VAR_8.ai_flags |= VAR_3;
 VAR_8.ai_family = VAR_2;

 VAR_11 = 0;

 if(!VAR_10 && !VAR_11) {
  return ((void*)0);
 }

 if(VAR_13 || VAR_5->num_ifs == 0) {
  if(VAR_11) {
   VAR_8.ai_family = VAR_1;
   if(!FUNC_2(VAR_13?"::0":"::1",
    VAR_13, VAR_5->do_udp, VAR_12,
    &VAR_8, VAR_14, &VAR_7,
    VAR_5->so_rcvbuf, VAR_5->so_sndbuf,
    VAR_5->ssl_port, VAR_5->tls_additional_port,
    VAR_6, VAR_5->ip_transparent,
    VAR_5->tcp_mss, VAR_5->ip_freebind, VAR_5->use_systemd,
    VAR_5->dnscrypt_port)) {
    FUNC_0(VAR_7);
    return ((void*)0);
   }
  }
  if(VAR_10) {
   VAR_8.ai_family = VAR_0;
   if(!FUNC_2(VAR_13?"0.0.0.0":"127.0.0.1",
    VAR_13, VAR_5->do_udp, VAR_12,
    &VAR_8, VAR_14, &VAR_7,
    VAR_5->so_rcvbuf, VAR_5->so_sndbuf,
    VAR_5->ssl_port, VAR_5->tls_additional_port,
    VAR_6, VAR_5->ip_transparent,
    VAR_5->tcp_mss, VAR_5->ip_freebind, VAR_5->use_systemd,
    VAR_5->dnscrypt_port)) {
    FUNC_0(VAR_7);
    return ((void*)0);
   }
  }
 } else for(VAR_9 = 0; VAR_9<VAR_5->num_ifs; VAR_9++) {
  if(FUNC_4(VAR_5->ifs[VAR_9])) {
   if(!VAR_11)
    continue;
   VAR_8.ai_family = VAR_1;
   if(!FUNC_2(VAR_5->ifs[VAR_9], 0, VAR_5->do_udp,
    VAR_12, &VAR_8, VAR_14, &VAR_7,
    VAR_5->so_rcvbuf, VAR_5->so_sndbuf,
    VAR_5->ssl_port, VAR_5->tls_additional_port,
    VAR_6, VAR_5->ip_transparent,
    VAR_5->tcp_mss, VAR_5->ip_freebind, VAR_5->use_systemd,
    VAR_5->dnscrypt_port)) {
    FUNC_0(VAR_7);
    return ((void*)0);
   }
  } else {
   if(!VAR_10)
    continue;
   VAR_8.ai_family = VAR_0;
   if(!FUNC_2(VAR_5->ifs[VAR_9], 0, VAR_5->do_udp,
    VAR_12, &VAR_8, VAR_14, &VAR_7,
    VAR_5->so_rcvbuf, VAR_5->so_sndbuf,
    VAR_5->ssl_port, VAR_5->tls_additional_port,
    VAR_6, VAR_5->ip_transparent,
    VAR_5->tcp_mss, VAR_5->ip_freebind, VAR_5->use_systemd,
    VAR_5->dnscrypt_port)) {
    FUNC_0(VAR_7);
    return ((void*)0);
   }
  }
 }
 return VAR_7;
}
