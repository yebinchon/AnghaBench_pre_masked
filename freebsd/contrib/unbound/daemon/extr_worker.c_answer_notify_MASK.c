
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int auth_zones; } ;
struct worker {TYPE_1__ env; } ;
struct query_info {int qname; int qclass; int qname_len; } ;
struct edns_data {int * opt_list; int bits; scalar_t__ ext_rcode; int udp_size; int edns_version; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int sr ;
typedef int sldns_buffer ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ,int ,int ,int *,int ,int,scalar_t__,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int,struct query_info*,int ,int ,struct edns_data*) ;
 int FUNC_5 (scalar_t__,char*,int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,int,char*,...) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_9(struct worker* VAR_9, struct query_info* VAR_10,
 struct edns_data* VAR_11, sldns_buffer* VAR_12, struct comm_reply* VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = VAR_4;
 uint32_t VAR_16 = 0;
 int VAR_17;
 if(!VAR_9->env.auth_zones) return;
 VAR_17 = FUNC_1(VAR_12, &VAR_16);
 if(FUNC_2(VAR_9->env.auth_zones, &VAR_9->env, VAR_10->qname,
  VAR_10->qname_len, VAR_10->qclass, &VAR_13->addr,
  VAR_13->addrlen, VAR_17, VAR_16, &VAR_14)) {
  VAR_15 = VAR_4;
 } else {
  if(VAR_14)
   VAR_15 = VAR_5;
  else VAR_15 = VAR_6;
 }

 if(VAR_8 >= VAR_7) {
  char VAR_18[380];
  char VAR_19[255+1];
  char VAR_20[25];
  FUNC_3(VAR_10->qname, VAR_19);
  VAR_20[0]=0;
  if(VAR_17)
   FUNC_8(VAR_20, sizeof(VAR_20), "serial %u ",
    (unsigned)VAR_16);
  if(VAR_15 == VAR_5)
   FUNC_8(VAR_18, sizeof(VAR_18),
    "refused NOTIFY %sfor %s from", VAR_20, VAR_19);
  else if(VAR_15 == VAR_6)
   FUNC_8(VAR_18, sizeof(VAR_18),
    "servfail for NOTIFY %sfor %s from", VAR_20, VAR_19);
  else FUNC_8(VAR_18, sizeof(VAR_18),
    "received NOTIFY %sfor %s from", VAR_20, VAR_19);
  FUNC_5(VAR_7, VAR_18, &VAR_13->addr, VAR_13->addrlen);
 }
 VAR_11->edns_version = VAR_1;
 VAR_11->udp_size = VAR_0;
 VAR_11->ext_rcode = 0;
 VAR_11->bits &= VAR_2;
 VAR_11->opt_list = ((void*)0);
 FUNC_4(VAR_12, VAR_15, VAR_10,
  *(uint16_t*)(void *)FUNC_6(VAR_12),
  FUNC_7(VAR_12, 2), VAR_11);
 FUNC_0(FUNC_6(VAR_12), VAR_3);
}
