
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct view {int lock; int name; int isfirst; scalar_t__ local_zones; } ;
struct regional {int dummy; } ;
struct query_info {int local_alias; int qtype; int qclass; int qname_len; int qname; } ;
struct module_env {TYPE_1__* cfg; } ;
struct local_zones {int lock; } ;
struct local_zone {int type; int lock; int name; int override_tree; int taglen; int taglist; } ;
struct local_data {int dummy; } ;
struct edns_data {int dummy; } ;
struct config_strlist {int dummy; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
struct TYPE_2__ {scalar_t__ log_local_actions; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct local_zone*,struct module_env*,struct query_info*,struct edns_data*,struct comm_reply*,int *,struct regional*,int,struct local_data**,int,int,struct config_strlist**,size_t,char**,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct local_zone*,struct query_info*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 struct local_zone* FUNC_5 (scalar_t__,int ,int ,int,int ,int ) ;
 struct local_zone* FUNC_6 (struct local_zones*,int ,int ,int,int ,int ,int *,size_t,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct local_zone*,struct query_info*,struct comm_reply*) ;
 int FUNC_10 (int *,size_t,int ,int ,int *,size_t,int,struct comm_reply*,int ,int*,char**,int) ;
 int FUNC_11 (struct local_zone*,struct module_env*,struct query_info*,struct edns_data*,struct comm_reply*,int *,struct regional*,struct local_data*,int) ;
 int FUNC_12 (scalar_t__,char*,char*,int ,...) ;
 scalar_t__ VAR_10 ;

int
FUNC_13(struct local_zones* VAR_11, struct module_env* VAR_12,
 struct query_info* VAR_13, struct edns_data* VAR_14, sldns_buffer* VAR_15,
 struct regional* VAR_16, struct comm_reply* VAR_17, uint8_t* VAR_18,
 size_t VAR_19, uint8_t* VAR_20, size_t VAR_21,
 struct config_strlist** VAR_22, size_t VAR_23,
 char** VAR_24, int VAR_25, struct view* VAR_26)
{



 int VAR_27 = FUNC_0(VAR_13->qname);
 struct local_data* VAR_28 = ((void*)0);
 struct local_zone* VAR_29 = ((void*)0);
 enum localzone_type VAR_30 = VAR_8;
 int VAR_31, VAR_32 = -1;

 if(VAR_26) {
  FUNC_7(&VAR_26->lock);
  if(VAR_26->local_zones &&
   (VAR_29 = FUNC_5(VAR_26->local_zones,
   VAR_13->qname, VAR_13->qname_len, VAR_27,
   VAR_13->qclass, VAR_13->qtype))) {
   FUNC_7(&VAR_29->lock);
   VAR_30 = VAR_29->type;
  }
  if(VAR_30 == VAR_7) {
   FUNC_8(&VAR_29->lock);
   VAR_29 = ((void*)0);
  }
  if(VAR_29 && (VAR_30 == VAR_8 ||
   VAR_30 == VAR_9 ||
   VAR_30 == VAR_4 ||
   VAR_30 == VAR_3) &&
   FUNC_3(VAR_29, VAR_13, VAR_27)) {
   FUNC_8(&VAR_29->lock);
   VAR_29 = ((void*)0);
  }
  if(VAR_26->local_zones && !VAR_29 && !VAR_26->isfirst){
   FUNC_8(&VAR_26->lock);
   return 0;
  }
  if(VAR_29 && VAR_10 >= VAR_0) {
   char VAR_33[255+1];
   FUNC_1(VAR_29->name, VAR_33);
   FUNC_12(VAR_0, "using localzone %s %s from view %s",
    VAR_33, FUNC_4(VAR_30), VAR_26->name);
  }
  FUNC_8(&VAR_26->lock);
 }
 if(!VAR_29) {

  FUNC_7(&VAR_11->lock);
  if(!(VAR_29 = FUNC_6(VAR_11, VAR_13->qname,
   VAR_13->qname_len, VAR_27, VAR_13->qclass, VAR_13->qtype,
   VAR_18, VAR_19, 0))) {
   FUNC_8(&VAR_11->lock);
   return 0;
  }
  FUNC_7(&VAR_29->lock);
  VAR_30 = FUNC_10(VAR_18, VAR_19, VAR_29->taglist, VAR_29->taglen,
   VAR_20, VAR_21, VAR_29->type, VAR_17,
   VAR_29->override_tree, &VAR_32, VAR_24, VAR_25);
  FUNC_8(&VAR_11->lock);
  if(VAR_29 && VAR_10 >= VAR_0) {
   char VAR_34[255+1];
   FUNC_1(VAR_29->name, VAR_34);
   FUNC_12(VAR_0, "using localzone %s %s", VAR_34,
    FUNC_4(VAR_30));
  }
 }
 if((VAR_12->cfg->log_local_actions ||
   VAR_30 == VAR_4 ||
   VAR_30 == VAR_5 ||
   VAR_30 == VAR_6)
   && VAR_17)
  FUNC_9(VAR_29, VAR_13, VAR_17);

 if(VAR_30 != VAR_2
  && VAR_30 != VAR_3
  && VAR_30 != VAR_1
  && FUNC_2(VAR_29, VAR_12, VAR_13, VAR_14, VAR_17, VAR_15, VAR_16, VAR_27,
   &VAR_28, VAR_30, VAR_32, VAR_22, VAR_23, VAR_24, VAR_25)) {
  FUNC_8(&VAR_29->lock);


  return !VAR_13->local_alias;
 }
 VAR_31 = FUNC_11(VAR_29, VAR_12, VAR_13, VAR_14, VAR_17, VAR_15, VAR_16, VAR_28, VAR_30);
 FUNC_8(&VAR_29->lock);
 return VAR_31 && !VAR_13->local_alias;
}
