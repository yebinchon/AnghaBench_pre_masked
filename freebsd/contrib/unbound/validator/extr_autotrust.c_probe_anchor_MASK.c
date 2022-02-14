
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct trust_anchor {int lock; TYPE_1__* autr; int dclass; int namelen; int name; } ;
struct query_info {int qclass; int qname_len; int qname; int qtype; int * local_alias; } ;
struct module_env {int mesh; int key_cache; int rrset_cache; scalar_t__* now; int scratch; int * scratch_buffer; } ;
struct edns_data {int edns_present; int udp_size; int * opt_list; int bits; scalar_t__ edns_version; scalar_t__ ext_rcode; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {scalar_t__ next_probe_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,struct query_info*) ;
 int FUNC_4 (int ,struct query_info*,int,struct edns_data*,int *,int ,int *,struct module_env*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(struct module_env* VAR_5, struct trust_anchor* VAR_6)
{
 struct query_info VAR_7;
 uint16_t VAR_8 = VAR_0;
 struct edns_data VAR_9;
 sldns_buffer* VAR_10 = VAR_5->scratch_buffer;
 VAR_7.qname = FUNC_5(VAR_5->scratch, VAR_6->name, VAR_6->namelen);
 if(!VAR_7.qname) {
  FUNC_2("out of memory making 5011 probe");
  return;
 }
 VAR_7.qname_len = VAR_6->namelen;
 VAR_7.qtype = VAR_2;
 VAR_7.qclass = VAR_6->dclass;
 VAR_7.local_alias = ((void*)0);
 FUNC_3(VAR_3, "autotrust probe", &VAR_7);
 FUNC_8(VAR_3, "retry probe set in %d seconds",
  (int)VAR_6->autr->next_probe_time - (int)*VAR_5->now);
 VAR_9.edns_present = 1;
 VAR_9.ext_rcode = 0;
 VAR_9.edns_version = 0;
 VAR_9.bits = VAR_1;
 VAR_9.opt_list = ((void*)0);
 if(FUNC_7(VAR_10) < 65535)
  VAR_9.udp_size = (uint16_t)FUNC_7(VAR_10);
 else VAR_9.udp_size = 65535;


 FUNC_1(&VAR_6->lock);




 FUNC_6(VAR_5->rrset_cache, VAR_7.qname, VAR_7.qname_len,
  VAR_7.qtype, VAR_7.qclass, 0);
 FUNC_0(VAR_5->key_cache, VAR_7.qname, VAR_7.qname_len,
  VAR_7.qclass);

 if(!FUNC_4(VAR_5->mesh, &VAR_7, VAR_8, &VAR_9, VAR_10, 0,
  &VAR_4, VAR_5)) {
  FUNC_2("out of memory making 5011 probe");
 }
}
