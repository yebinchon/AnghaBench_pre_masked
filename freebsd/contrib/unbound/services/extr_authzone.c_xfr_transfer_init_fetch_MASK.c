
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct module_env {int scratch_buffer; int outnet; int rnd; int worker_base; } ;
struct auth_xfer {TYPE_2__* task_transfer; int name; } ;
struct auth_master {int file; int host; int ssl; int port; scalar_t__ http; scalar_t__ allow_notify; } ;
typedef int socklen_t ;
typedef int as ;
struct TYPE_4__ {scalar_t__ on_ixfr; scalar_t__ timer; int * cp; scalar_t__ id; TYPE_1__* scan_addr; struct auth_master* master; } ;
struct TYPE_3__ {int addr; int addrlen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_storage*,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct sockaddr_storage*,int *,char**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,struct auth_xfer*) ;
 int FUNC_4 (scalar_t__,struct timeval*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sockaddr_storage*,int *,int ) ;
 int * FUNC_8 (int ,int ,struct auth_xfer*,struct sockaddr_storage*,int ,int,int ,int ,int ) ;
 int * FUNC_9 (int ,int ,struct auth_xfer*,struct sockaddr_storage*,int ,int ,int,int ,char*) ;
 int FUNC_10 (struct sockaddr_storage*,int ,int ) ;
 int * FUNC_11 (int ,char) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,char*,char*,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (struct auth_xfer*,int ,scalar_t__,struct auth_master*) ;

__attribute__((used)) static int
FUNC_15(struct auth_xfer* VAR_6, struct module_env* VAR_7)
{
 struct sockaddr_storage VAR_8;
 socklen_t VAR_9 = 0;
 struct auth_master* VAR_10 = VAR_6->task_transfer->master;
 char *VAR_11 = ((void*)0);
 struct timeval VAR_12;
 int VAR_13;
 if(!VAR_10) return 0;
 if(VAR_10->allow_notify) return 0;


 if(VAR_6->task_transfer->scan_addr) {
  VAR_9 = VAR_6->task_transfer->scan_addr->addrlen;
  FUNC_7(&VAR_8, &VAR_6->task_transfer->scan_addr->addr, VAR_9);
 } else {
  if(!FUNC_1(VAR_10->host, &VAR_8, &VAR_9, &VAR_11)) {



   char VAR_14[255+1];
   FUNC_5(VAR_6->name, VAR_14);
   FUNC_6("%s: failed lookup, cannot transfer from master %s",
    VAR_14, VAR_10->host);
   return 0;
  }
 }


 if(VAR_6->task_transfer->cp) {
  FUNC_2(VAR_6->task_transfer->cp);
  VAR_6->task_transfer->cp = ((void*)0);
 }
 if(!VAR_6->task_transfer->timer) {
  VAR_6->task_transfer->timer = FUNC_3(VAR_7->worker_base,
   VAR_4, VAR_6);
  if(!VAR_6->task_transfer->timer) {
   FUNC_6("malloc failure");
   return 0;
  }
 }
 VAR_13 = VAR_0;

        VAR_12.tv_sec = VAR_13/1000;
        VAR_12.tv_usec = (VAR_13%1000)*1000;


 if(VAR_10->http) {



  VAR_6->task_transfer->on_ixfr = 0;
  if(FUNC_11(VAR_10->host, '@') == ((void*)0))
   FUNC_10(&VAR_8, VAR_9, VAR_10->port);
  VAR_6->task_transfer->cp = FUNC_8(
   VAR_7->outnet, VAR_2, VAR_6,
   &VAR_8, VAR_9, -1, VAR_10->ssl, VAR_10->host,
   VAR_10->file);
  if(!VAR_6->task_transfer->cp) {
   char VAR_15[255+1], VAR_16[256];
   FUNC_5(VAR_6->name, VAR_15);
   FUNC_0(&VAR_8, VAR_9, VAR_16, sizeof(VAR_16));
   FUNC_13(VAR_1, "cannot create http cp "
    "connection for %s to %s", VAR_15, VAR_16);
   return 0;
  }
  FUNC_4(VAR_6->task_transfer->timer, &VAR_12);
  if(VAR_5 >= VAR_1) {
   char VAR_17[255+1], VAR_18[256];
   FUNC_5(VAR_6->name, VAR_17);
   FUNC_0(&VAR_8, VAR_9, VAR_18, sizeof(VAR_18));
   FUNC_13(VAR_1, "auth zone %s transfer next HTTP fetch from %s started", VAR_17, VAR_18);
  }
  return 1;
 }




 VAR_6->task_transfer->id = (uint16_t)(FUNC_12(VAR_7->rnd)&0xffff);
 FUNC_14(VAR_6, VAR_7->scratch_buffer,
  VAR_6->task_transfer->id, VAR_10);


 VAR_6->task_transfer->cp = FUNC_9(VAR_7->outnet,
  VAR_3, VAR_6, &VAR_8, VAR_9,
  VAR_7->scratch_buffer, -1,
  VAR_11 != ((void*)0), VAR_11);
 if(!VAR_6->task_transfer->cp) {
  char VAR_19[255+1], VAR_20[256];
   FUNC_5(VAR_6->name, VAR_19);
  FUNC_0(&VAR_8, VAR_9, VAR_20, sizeof(VAR_20));
  FUNC_13(VAR_1, "cannot create tcp cp connection for "
   "xfr %s to %s", VAR_19, VAR_20);
  return 0;
 }
 FUNC_4(VAR_6->task_transfer->timer, &VAR_12);
 if(VAR_5 >= VAR_1) {
  char VAR_21[255+1], VAR_22[256];
   FUNC_5(VAR_6->name, VAR_21);
  FUNC_0(&VAR_8, VAR_9, VAR_22, sizeof(VAR_22));
  FUNC_13(VAR_1, "auth zone %s transfer next %s fetch from %s started", VAR_21,
   (VAR_6->task_transfer->on_ixfr?"IXFR":"AXFR"), VAR_22);
 }
 return 1;
}
