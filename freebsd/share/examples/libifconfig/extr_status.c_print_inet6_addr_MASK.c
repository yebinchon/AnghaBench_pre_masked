
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ ia6t_expire; scalar_t__ ia6t_preferred; } ;
struct ifconfig_inet6_addr {int prefixlen; int flags; int vhid; TYPE_2__ lifetime; TYPE_1__* sin6; int * dstin6; } ;
struct ifaddrs {int ifa_name; } ;
typedef int ifconfig_handle_t ;
typedef int addr_buf ;
struct TYPE_3__ {int sin6_scope_id; int sin6_addr; int sin6_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (long,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,struct ifaddrs*,struct ifconfig_inet6_addr*) ;
 int FUNC_5 (int ,int *,char*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(ifconfig_handle_t *VAR_12, struct ifaddrs *VAR_13)
{
 struct ifconfig_inet6_addr VAR_14;
 char VAR_15[VAR_10];
 struct timespec VAR_16;


 if (FUNC_4(VAR_12, VAR_13->ifa_name, VAR_13, &VAR_14) != 0) {
  FUNC_2(1, "ifconfig_inet6_get_addrinfo");
 }
 if (0 != FUNC_3((struct sockaddr *)VAR_14.sin6, VAR_14.sin6->sin6_len,
     VAR_15, sizeof(VAR_15), ((void*)0), 0, VAR_11)) {
  FUNC_5(VAR_0, &VAR_14.sin6->sin6_addr, VAR_15,
      sizeof(VAR_15));
 }
 FUNC_6("\tinet6 %s", VAR_15);

 if (VAR_14.dstin6) {
  FUNC_5(VAR_0, VAR_14.dstin6, VAR_15, sizeof(VAR_15));
  FUNC_6(" --> %s", VAR_15);
 }


 FUNC_6(" prefixlen %d ", VAR_14.prefixlen);


 if (VAR_14.sin6->sin6_scope_id) {
  FUNC_6("scopeid 0x%x ", VAR_14.sin6->sin6_scope_id);
 }


 if ((VAR_14.flags & VAR_2) != 0) {
  FUNC_6("anycast ");
 }
 if ((VAR_14.flags & VAR_9) != 0) {
  FUNC_6("tentative ");
 }
 if ((VAR_14.flags & VAR_6) != 0) {
  FUNC_6("duplicated ");
 }
 if ((VAR_14.flags & VAR_5) != 0) {
  FUNC_6("detached ");
 }
 if ((VAR_14.flags & VAR_4) != 0) {
  FUNC_6("deprecated ");
 }
 if ((VAR_14.flags & VAR_3) != 0) {
  FUNC_6("autoconf ");
 }
 if ((VAR_14.flags & VAR_8) != 0) {
  FUNC_6("temporary ");
 }
 if ((VAR_14.flags & VAR_7) != 0) {
  FUNC_6("prefer_source ");
 }


 FUNC_1(VAR_1, &VAR_16);
 if (VAR_14.lifetime.ia6t_preferred || VAR_14.lifetime.ia6t_expire) {
  FUNC_6("pltime ");
  if (VAR_14.lifetime.ia6t_preferred) {
   FUNC_6("%ld ", FUNC_0(0l,
       VAR_14.lifetime.ia6t_preferred - VAR_16.tv_sec));
  } else {
   FUNC_6("infty ");
  }

  FUNC_6("vltime ");
  if (VAR_14.lifetime.ia6t_expire) {
   FUNC_6("%ld ", FUNC_0(0l,
       VAR_14.lifetime.ia6t_expire - VAR_16.tv_sec));
  } else {
   FUNC_6("infty ");
  }
 }


 if (VAR_14.vhid != 0) {
  FUNC_6("vhid %d ", VAR_14.vhid);
 }
 FUNC_6("\n");
}
