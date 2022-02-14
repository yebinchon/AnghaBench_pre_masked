
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct module_env {int scratch_buffer; int worker_base; int outnet; int rnd; TYPE_2__* cfg; } ;
struct auth_xfer {TYPE_3__* task_probe; int name; } ;
struct auth_master {int host; scalar_t__ http; scalar_t__ allow_notify; } ;
typedef int socklen_t ;
typedef int as ;
struct TYPE_6__ {int cp_is_ip6; int timeout; scalar_t__ timer; int * cp; scalar_t__ id; TYPE_1__* scan_addr; } ;
struct TYPE_5__ {scalar_t__ ssl_port; int port; } ;
struct TYPE_4__ {int addr; int addrlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (struct sockaddr_storage*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,struct sockaddr_storage*,int *,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,struct sockaddr*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,struct auth_xfer*) ;
 int FUNC_6 (scalar_t__,struct timeval*) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct sockaddr_storage*,int *,int ) ;
 scalar_t__ FUNC_11 (void*) ;
 int * FUNC_12 (int ,int ,struct auth_xfer*,struct sockaddr_storage*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,char*,char*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_15 (struct auth_xfer*,int ,scalar_t__) ;
 struct auth_master* FUNC_16 (struct auth_xfer*) ;

__attribute__((used)) static int
FUNC_17(struct auth_xfer* VAR_7, struct module_env* VAR_8,
 int VAR_9)
{
 struct sockaddr_storage VAR_10;
 socklen_t VAR_11 = 0;
 struct timeval VAR_12;

 struct auth_master* VAR_13 = FUNC_16(VAR_7);
 char *VAR_14 = ((void*)0);
 if(!VAR_13) return 0;
 if(VAR_13->allow_notify) return 0;
 if(VAR_13->http) return 0;



 if(VAR_7->task_probe->scan_addr) {
  VAR_11 = VAR_7->task_probe->scan_addr->addrlen;
  FUNC_10(&VAR_10, &VAR_7->task_probe->scan_addr->addr, VAR_11);
 } else {
  if(!FUNC_2(VAR_13->host, &VAR_10, &VAR_11, &VAR_14)) {



   char VAR_15[255+1];
   FUNC_7(VAR_7->name, VAR_15);
   FUNC_9("%s: failed lookup, cannot probe to master %s",
    VAR_15, VAR_13->host);
   return 0;
  }
  if (VAR_14 != ((void*)0)) {
   if (VAR_10.ss_family == VAR_0
   && FUNC_11(((struct sockaddr_in *)&VAR_10)->sin_port)
              == VAR_8->cfg->ssl_port)
    ((struct sockaddr_in *)&VAR_10)->sin_port
     = FUNC_8(VAR_8->cfg->port);
   else if (VAR_10.ss_family == VAR_1
   && FUNC_11(((struct sockaddr_in6 *)&VAR_10)->sin6_port)
              == VAR_8->cfg->ssl_port)
                         ((struct sockaddr_in6 *)&VAR_10)->sin6_port
     = FUNC_8(VAR_8->cfg->port);
  }
 }




 if(VAR_9 == VAR_2)
  VAR_7->task_probe->id = (uint16_t)(FUNC_13(VAR_8->rnd)&0xffff);
 FUNC_15(VAR_7, VAR_8->scratch_buffer,
  VAR_7->task_probe->id);

 if(VAR_7->task_probe->cp &&
  ((VAR_7->task_probe->cp_is_ip6 && !FUNC_0(&VAR_10, VAR_11)) ||
  (!VAR_7->task_probe->cp_is_ip6 && FUNC_0(&VAR_10, VAR_11)))
  ) {
  FUNC_3(VAR_7->task_probe->cp);
  VAR_7->task_probe->cp = ((void*)0);
 }
 if(!VAR_7->task_probe->cp) {
  if(FUNC_0(&VAR_10, VAR_11))
   VAR_7->task_probe->cp_is_ip6 = 1;
  else VAR_7->task_probe->cp_is_ip6 = 0;
  VAR_7->task_probe->cp = FUNC_12(VAR_8->outnet,
   VAR_5, VAR_7, &VAR_10, VAR_11);
  if(!VAR_7->task_probe->cp) {
   char VAR_16[255+1], VAR_17[256];
   FUNC_7(VAR_7->name, VAR_16);
   FUNC_1(&VAR_10, VAR_11, VAR_17, sizeof(VAR_17));
   FUNC_14(VAR_3, "cannot create udp cp for "
    "probe %s to %s", VAR_16, VAR_17);
   return 0;
  }
 }
 if(!VAR_7->task_probe->timer) {
  VAR_7->task_probe->timer = FUNC_5(VAR_8->worker_base,
   VAR_4, VAR_7);
  if(!VAR_7->task_probe->timer) {
   FUNC_9("malloc failure");
   return 0;
  }
 }


 if(!FUNC_4(VAR_7->task_probe->cp, VAR_8->scratch_buffer,
  (struct sockaddr*)&VAR_10, VAR_11)) {
  char VAR_18[255+1], VAR_19[256];
  FUNC_7(VAR_7->name, VAR_18);
  FUNC_1(&VAR_10, VAR_11, VAR_19, sizeof(VAR_19));
  FUNC_14(VAR_3, "failed to send soa probe for %s to %s",
   VAR_18, VAR_19);
  return 0;
 }
 if(VAR_6 >= VAR_3) {
  char VAR_20[255+1], VAR_21[256];
  FUNC_7(VAR_7->name, VAR_20);
  FUNC_1(&VAR_10, VAR_11, VAR_21, sizeof(VAR_21));
  FUNC_14(VAR_3, "auth zone %s soa probe sent to %s", VAR_20,
   VAR_21);
 }
 VAR_7->task_probe->timeout = VAR_9;

 VAR_12.tv_sec = VAR_9/1000;
 VAR_12.tv_usec = (VAR_9%1000)*1000;

 FUNC_6(VAR_7->task_probe->timer, &VAR_12);

 return 1;
}
