
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {int qdcount; int an_numrrsets; int ns_numrrsets; int rrset_count; struct ub_packed_rrset_key** rrsets; scalar_t__ flags; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_env {int dummy; } ;
struct edns_data {int bits; scalar_t__ ext_rcode; scalar_t__ udp_size; int edns_version; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;
typedef int rep ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int,struct query_info*,scalar_t__,int ,struct edns_data*) ;
 int FUNC_1 (struct module_env*,struct query_info*,int *,struct reply_info*,int,struct edns_data*,struct comm_reply*,struct regional*) ;
 int FUNC_2 (struct reply_info*,int ,int) ;
 int FUNC_3 (struct query_info*,struct reply_info*,scalar_t__,int ,int *,int ,int ,struct regional*,scalar_t__,struct edns_data*,int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(struct query_info* VAR_7, struct module_env* VAR_8,
 struct edns_data* VAR_9, struct comm_reply* VAR_10, sldns_buffer* VAR_11,
 struct regional* VAR_12, struct ub_packed_rrset_key* VAR_13, int VAR_14,
 int VAR_15)
{
 struct reply_info VAR_16;
 uint16_t VAR_17;

 FUNC_2(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.flags = (uint16_t)((VAR_1 | VAR_0 | VAR_2) | VAR_15);
 VAR_16.qdcount = 1;
 if(VAR_14)
  VAR_16.an_numrrsets = 1;
 else VAR_16.ns_numrrsets = 1;
 VAR_16.rrset_count = 1;
 VAR_16.rrsets = &VAR_13;
 VAR_17 = VAR_9->udp_size;
 VAR_9->edns_version = VAR_4;
 VAR_9->udp_size = VAR_3;
 VAR_9->ext_rcode = 0;
 VAR_9->bits &= VAR_5;
 if(!FUNC_1(VAR_8, VAR_7, ((void*)0), &VAR_16, VAR_15, VAR_9,
  VAR_10, VAR_12) || !FUNC_3(VAR_7, &VAR_16,
  *(uint16_t*)FUNC_4(VAR_11), FUNC_5(VAR_11, 2),
  VAR_11, 0, 0, VAR_12, VAR_17, VAR_9, (int)(VAR_9->bits&VAR_5), 0)) {
  FUNC_0(VAR_11, (VAR_6|VAR_0), VAR_7,
   *(uint16_t*)FUNC_4(VAR_11),
   FUNC_5(VAR_11, 2), VAR_9);
 }
 return 1;
}
