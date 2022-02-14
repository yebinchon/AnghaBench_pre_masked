
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct query_info {int qname_len; int * local_alias; int qtype; int qclass; int * qname; } ;
struct module_env {int mesh; int * scratch_buffer; } ;
struct edns_data {int edns_present; int udp_size; int * opt_list; int bits; scalar_t__ edns_version; scalar_t__ ext_rcode; } ;
struct auth_xfer {int lock; int name; TYPE_1__* task_probe; int dclass; } ;
struct auth_master {int host; int http; scalar_t__ allow_notify; } ;
typedef int socklen_t ;
typedef int sldns_buffer ;
typedef int dname ;
typedef int buf1 ;
struct TYPE_2__ {scalar_t__ lookup_aaaa; struct auth_master* lookup_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr_storage*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (scalar_t__,char*,struct query_info*) ;
 int FUNC_6 (int ,struct query_info*,int,struct edns_data*,int *,int ,int *,struct auth_xfer*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *,int*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int * FUNC_10 (int ,char) ;
 int * FUNC_11 (int ,char) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_12(struct auth_xfer* VAR_8, struct module_env* VAR_9)
{
 struct sockaddr_storage VAR_10;
 socklen_t VAR_11 = 0;
 struct auth_master* VAR_12 = VAR_8->task_probe->lookup_target;
 struct query_info VAR_13;
 uint16_t VAR_14 = VAR_0;
 uint8_t VAR_15[VAR_2+1];
 struct edns_data VAR_16;
 sldns_buffer* VAR_17 = VAR_9->scratch_buffer;
 if(!VAR_12) return 0;
 if(FUNC_1(VAR_12->host, &VAR_10, &VAR_11)) {

  return 0;
 }
 if(VAR_12->allow_notify && !VAR_12->http &&
  FUNC_10(VAR_12->host, '/') != ((void*)0) &&
  FUNC_10(VAR_12->host, '/') == FUNC_11(VAR_12->host, '/')) {
  return 0;
 }



 VAR_13.qname_len = sizeof(VAR_15);
 if(FUNC_8(VAR_12->host, VAR_15, &VAR_13.qname_len)
  != 0) {
  FUNC_4("cannot parse host name of master %s", VAR_12->host);
  return 0;
 }
 VAR_13.qname = VAR_15;
 VAR_13.qclass = VAR_8->dclass;
 VAR_13.qtype = VAR_3;
 if(VAR_8->task_probe->lookup_aaaa)
  VAR_13.qtype = VAR_4;
 VAR_13.local_alias = ((void*)0);
 if(VAR_7 >= VAR_5) {
  char VAR_18[512];
  char VAR_19[VAR_2+1];
  FUNC_0(VAR_8->name, VAR_19);
  FUNC_9(VAR_18, sizeof(VAR_18), "auth zone %s: master lookup"
   " for task_probe", VAR_19);
  FUNC_5(VAR_5, VAR_18, &VAR_13);
 }
 VAR_16.edns_present = 1;
 VAR_16.ext_rcode = 0;
 VAR_16.edns_version = 0;
 VAR_16.bits = VAR_1;
 VAR_16.opt_list = ((void*)0);
 if(FUNC_7(VAR_17) < 65535)
  VAR_16.udp_size = (uint16_t)FUNC_7(VAR_17);
 else VAR_16.udp_size = 65535;



 FUNC_3(&VAR_8->lock);
 if(!FUNC_6(VAR_9->mesh, &VAR_13, VAR_14, &VAR_16, VAR_17, 0,
  &VAR_6, VAR_8)) {
  FUNC_2(&VAR_8->lock);
  FUNC_4("out of memory lookup up master %s", VAR_12->host);
  return 0;
 }
 FUNC_2(&VAR_8->lock);
 return 1;
}
