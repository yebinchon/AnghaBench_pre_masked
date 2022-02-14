
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_sec; } ;
struct sockaddr {int dummy; } ;
struct evdns_base {int global_max_nameserver_timeout; int global_max_retransmits; int global_randomize_case; int global_outgoing_addrlen; int global_nameserver_probe_initial_timeout; int global_outgoing_address; int global_getaddrinfo_allow_skew; int global_timeout; TYPE_1__* global_search_state; } ;
struct TYPE_2__ {int ndots; } ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct evdns_base*,int const) ;
 int FUNC_2 (char const*,struct timeval*) ;
 scalar_t__ FUNC_3 (char const*,struct sockaddr*,int*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,struct timeval*,int) ;
 TYPE_1__* FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int,int) ;

__attribute__((used)) static int
FUNC_10(struct evdns_base *VAR_4,
    const char *VAR_5, const char *VAR_6, int VAR_7)
{
 FUNC_0(VAR_4);
 if (FUNC_7(VAR_5, "ndots:")) {
  const int VAR_8 = FUNC_8(VAR_6);
  if (VAR_8 == -1) return -1;
  if (!(VAR_7 & VAR_2)) return 0;
  FUNC_4(VAR_3, "Setting ndots to %d", VAR_8);
  if (!VAR_4->global_search_state) VAR_4->global_search_state = FUNC_6();
  if (!VAR_4->global_search_state) return -1;
  VAR_4->global_search_state->ndots = VAR_8;
 } else if (FUNC_7(VAR_5, "timeout:")) {
  struct timeval VAR_9;
  if (FUNC_2(VAR_6, &VAR_9) == -1) return -1;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting timeout to %s", VAR_6);
  FUNC_5(&VAR_4->global_timeout, &VAR_9, sizeof(struct timeval));
 } else if (FUNC_7(VAR_5, "getaddrinfo-allow-skew:")) {
  struct timeval VAR_10;
  if (FUNC_2(VAR_6, &VAR_10) == -1) return -1;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting getaddrinfo-allow-skew to %s",
      VAR_6);
  FUNC_5(&VAR_4->global_getaddrinfo_allow_skew, &VAR_10,
      sizeof(struct timeval));
 } else if (FUNC_7(VAR_5, "max-timeouts:")) {
  const int VAR_11 = FUNC_9(VAR_6, 1, 255);
  if (VAR_11 == -1) return -1;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting maximum allowed timeouts to %d",
   VAR_11);
  VAR_4->global_max_nameserver_timeout = VAR_11;
 } else if (FUNC_7(VAR_5, "max-inflight:")) {
  const int VAR_12 = FUNC_9(VAR_6, 1, 65000);
  if (VAR_12 == -1) return -1;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting maximum inflight requests to %d",
   VAR_12);
  FUNC_1(VAR_4, VAR_12);
 } else if (FUNC_7(VAR_5, "attempts:")) {
  int VAR_13 = FUNC_8(VAR_6);
  if (VAR_13 == -1) return -1;
  if (VAR_13 > 255) VAR_13 = 255;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting retries to %d", VAR_13);
  VAR_4->global_max_retransmits = VAR_13;
 } else if (FUNC_7(VAR_5, "randomize-case:")) {
  int VAR_14 = FUNC_8(VAR_6);
  if (!(VAR_7 & VAR_0)) return 0;
  VAR_4->global_randomize_case = VAR_14;
 } else if (FUNC_7(VAR_5, "bind-to:")) {


  int VAR_15 = sizeof(VAR_4->global_outgoing_address);
  if (!(VAR_7 & VAR_1)) return 0;
  if (FUNC_3(VAR_6,
   (struct sockaddr*)&VAR_4->global_outgoing_address, &VAR_15))
   return -1;
  VAR_4->global_outgoing_addrlen = VAR_15;
 } else if (FUNC_7(VAR_5, "initial-probe-timeout:")) {
  struct timeval VAR_16;
  if (FUNC_2(VAR_6, &VAR_16) == -1) return -1;
  if (VAR_16.tv_sec > 3600)
   VAR_16.tv_sec = 3600;
  if (!(VAR_7 & VAR_0)) return 0;
  FUNC_4(VAR_3, "Setting initial probe timeout to %s",
      VAR_6);
  FUNC_5(&VAR_4->global_nameserver_probe_initial_timeout, &VAR_16,
      sizeof(VAR_16));
 }
 return 0;
}
