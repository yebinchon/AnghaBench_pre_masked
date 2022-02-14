
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct regional {int dummy; } ;
struct query_info {int qname_len; int qname; TYPE_3__* local_alias; int qtype; } ;
struct module_env {int dummy; } ;
struct local_zone {int namelabs; int data; int namelen; int name; } ;
struct local_rrset {struct ub_packed_rrset_key* rrset; } ;
struct TYPE_10__ {struct local_data* key; } ;
struct local_data {int namelabs; TYPE_5__ node; int namelen; int name; } ;
struct edns_data {int dummy; } ;
struct config_strlist {int dummy; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;
typedef int r ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
struct TYPE_6__ {int dname_len; int dname; } ;
struct TYPE_9__ {TYPE_1__ rk; } ;
struct TYPE_8__ {TYPE_4__* rrset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct query_info*,struct config_strlist*,struct ub_packed_rrset_key*,struct regional*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct local_rrset* FUNC_2 (struct local_data*,int ,int) ;
 int FUNC_3 (struct query_info*,struct module_env*,struct edns_data*,struct comm_reply*,int *,struct regional*,struct ub_packed_rrset_key*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ub_packed_rrset_key*,int ,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_5__*) ;
 TYPE_4__* FUNC_6 (struct regional*,struct ub_packed_rrset_key*,int) ;
 TYPE_3__* FUNC_7 (struct regional*,int) ;
 int FUNC_8 (int ,char*,int,char*) ;

__attribute__((used)) static int
FUNC_9(struct local_zone* VAR_5, struct module_env* VAR_6,
 struct query_info* VAR_7, struct edns_data* VAR_8,
 struct comm_reply* VAR_9, sldns_buffer* VAR_10,
 struct regional* VAR_11, int VAR_12, struct local_data** VAR_13,
 enum localzone_type VAR_14, int VAR_15, struct config_strlist** VAR_16,
 size_t VAR_17, char** VAR_18, int VAR_19)
{
 struct local_data VAR_20;
 struct local_data* VAR_21;
 struct local_rrset* VAR_22;
 VAR_20.node.key = &VAR_20;
 VAR_20.name = VAR_7->qname;
 VAR_20.namelen = VAR_7->qname_len;
 VAR_20.namelabs = VAR_12;
 if(VAR_14 == VAR_4 ||
  VAR_14 == VAR_3) {
  VAR_20.name = VAR_5->name;
  VAR_20.namelen = VAR_5->namelen;
  VAR_20.namelabs = VAR_5->namelabs;
  if(VAR_15 != -1 && (size_t)VAR_15<VAR_17 && VAR_16[VAR_15]) {
   struct ub_packed_rrset_key VAR_23;
   FUNC_4(&VAR_23, 0, sizeof(VAR_23));
   if(FUNC_0(VAR_7, VAR_16[VAR_15], &VAR_23, VAR_11)) {
    FUNC_8(VAR_2, "redirect with tag data [%d] %s",
     VAR_15, (VAR_15<VAR_19?VAR_18[VAR_15]:"null"));





    if(VAR_7->local_alias)
     return 1;
    return FUNC_3(VAR_7, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11,
     &VAR_23, 1, VAR_0);
   }
  }
 }
 VAR_21 = (struct local_data*)FUNC_5(&VAR_5->data, &VAR_20.node);
 *VAR_13 = VAR_21;
 if(!VAR_21) {
  return 0;
 }
 VAR_22 = FUNC_2(VAR_21, VAR_7->qtype, 1);
 if(!VAR_22)
  return 0;


 if((VAR_14 == VAR_4 ||
  VAR_14 == VAR_3) &&
  VAR_7->qtype != VAR_1 &&
  VAR_22->rrset->rk.type == FUNC_1(VAR_1)) {
  VAR_7->local_alias =
   FUNC_7(VAR_11, sizeof(struct local_rrset));
  if(!VAR_7->local_alias)
   return 0;
  VAR_7->local_alias->rrset =
   FUNC_6(VAR_11, VAR_22->rrset, sizeof(*VAR_22->rrset));
  if(!VAR_7->local_alias->rrset)
   return 0;
  VAR_7->local_alias->rrset->rk.dname = VAR_7->qname;
  VAR_7->local_alias->rrset->rk.dname_len = VAR_7->qname_len;
  return 1;
 }
 if(VAR_14 == VAR_4 ||
  VAR_14 == VAR_3) {

  struct ub_packed_rrset_key VAR_24 = *VAR_22->rrset;
  VAR_24.rk.dname = VAR_7->qname;
  VAR_24.rk.dname_len = VAR_7->qname_len;
  return FUNC_3(VAR_7, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11, &VAR_24, 1,
   VAR_0);
 }
 return FUNC_3(VAR_7, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11, VAR_22->rrset, 1,
  VAR_0);
}
