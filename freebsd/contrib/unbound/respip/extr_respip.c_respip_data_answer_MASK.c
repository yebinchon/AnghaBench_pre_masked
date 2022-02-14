
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int flags; int dname_len; int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; void* qclass; void* qtype; int qname_len; int qname; } ;
struct resp_addr {struct ub_packed_rrset_key* data; } ;
struct reply_info {struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;
struct query_info {TYPE_1__ rk; void* qclass; void* qtype; int qname_len; int qname; } ;
struct config_strlist {int dummy; } ;
typedef int r ;
typedef enum respip_action { ____Placeholder_respip_action } respip_action ;
typedef int dataqinfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ub_packed_rrset_key* FUNC_0 (struct ub_packed_rrset_key*,struct regional*) ;
 scalar_t__ FUNC_1 (struct ub_packed_rrset_key*,struct config_strlist*,struct ub_packed_rrset_key*,struct regional*) ;
 struct reply_info* FUNC_2 (struct reply_info const*,struct regional*,size_t,size_t) ;
 int FUNC_3 (struct ub_packed_rrset_key*,int ,int) ;
 void* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int,char* const) ;

__attribute__((used)) static int
FUNC_6(const struct resp_addr* VAR_4, enum respip_action VAR_5,
 uint16_t VAR_6, const struct reply_info* VAR_7,
 size_t VAR_8, struct reply_info** VAR_9, int VAR_10,
 struct config_strlist** VAR_11, size_t VAR_12,
 char* const* VAR_13, int VAR_14,
 struct ub_packed_rrset_key** VAR_15, struct regional* VAR_16)
{
 struct ub_packed_rrset_key* VAR_17 = VAR_4->data;
 struct reply_info* VAR_18;
 *VAR_15 = ((void*)0);

 if(VAR_5 == VAR_3 && VAR_10 != -1 &&
  (size_t)VAR_10<VAR_12 && VAR_11[VAR_10]) {
  struct query_info VAR_19;
  struct ub_packed_rrset_key VAR_20;





  FUNC_3(&VAR_19, 0, sizeof(VAR_19));
  VAR_19.qname = VAR_7->rrsets[VAR_8]->rk.dname;
  VAR_19.qname_len = VAR_7->rrsets[VAR_8]->rk.dname_len;
  VAR_19.qtype = FUNC_4(VAR_7->rrsets[VAR_8]->rk.type);
  VAR_19.qclass = FUNC_4(VAR_7->rrsets[VAR_8]->rk.rrset_class);

  FUNC_3(&VAR_20, 0, sizeof(VAR_20));
  if(FUNC_1(&VAR_19, VAR_11[VAR_10], &VAR_20,
   VAR_16)) {
   FUNC_5(VAR_2,
    "response-ip redirect with tag data [%d] %s",
    VAR_10, (VAR_10<VAR_14?VAR_13[VAR_10]:"null"));

   VAR_17 = FUNC_0(&VAR_20, VAR_16);
   if(!VAR_17)
    return -1;
  }
 }
 if(!VAR_17)
  return 0;





 if(VAR_17 == VAR_4->data) {
  VAR_17 = FUNC_0(VAR_17, VAR_16);
  if(!VAR_17)
   return -1;
  VAR_17->rk.dname = VAR_7->rrsets[VAR_8]->rk.dname;
  VAR_17->rk.dname_len = VAR_7->rrsets[VAR_8]->rk.dname_len;
 }






 if(VAR_6 == VAR_0)
  VAR_8 = 0;
 VAR_18 = FUNC_2(VAR_7, VAR_16, VAR_8 + 1, VAR_8);
 if(!VAR_18)
  return -1;
 VAR_17->rk.flags |= VAR_1;
 VAR_18->rrsets[VAR_8] = VAR_17;

 *VAR_15 = VAR_17;
 *VAR_9 = VAR_18;
 return 1;
}
