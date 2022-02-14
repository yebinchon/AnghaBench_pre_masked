
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rrset_parse {scalar_t__ type; scalar_t__ section; struct rrset_parse* rrset_all_next; int dname; } ;
struct query_info {int qname; } ;
struct msg_parse {scalar_t__ an_rrsets; int flags; struct rrset_parse* rrset_first; } ;
struct module_env {TYPE_1__* cfg; } ;
struct iter_env {int priv; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int harden_glue; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *,struct rrset_parse*) ;
 int FUNC_6 (char*,int *,struct msg_parse*,struct rrset_parse*,struct rrset_parse**) ;
 scalar_t__ FUNC_7 (struct rrset_parse*,int *) ;
 int FUNC_8 (struct msg_parse*) ;
 int FUNC_9 (int *,struct msg_parse*,struct module_env*,struct rrset_parse*) ;
 scalar_t__ FUNC_10 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_11(sldns_buffer* VAR_9, struct msg_parse* VAR_10,
 struct query_info* VAR_11, uint8_t* VAR_12, struct module_env* VAR_13,
 struct iter_env* VAR_14)
{
 int VAR_15 = 0;

 struct rrset_parse* VAR_16, *VAR_17;
 VAR_17 = ((void*)0);
 VAR_16 = VAR_10->rrset_first;




 if(VAR_16 && VAR_16->type == VAR_3 &&
  VAR_16->section == VAR_7 &&
  FUNC_3(VAR_9, VAR_11->qname, VAR_16->dname) &&
  FUNC_4(VAR_9, VAR_16->dname, VAR_12)) {
  VAR_17 = VAR_16;
  VAR_16 = VAR_16->rrset_all_next;
 }
 while(VAR_16 && VAR_16->section == VAR_7) {
  if(FUNC_1(VAR_9, VAR_11->qname, VAR_16->dname) != 0) {
   if(FUNC_2(VAR_16->type)) VAR_15 = 1;
   FUNC_6("sanitize: removing extraneous answer "
    "RRset:", VAR_9, VAR_10, VAR_17, &VAR_16);
   continue;
  }
  VAR_17 = VAR_16;
  VAR_16 = VAR_16->rrset_all_next;
 }
 VAR_17 = ((void*)0);
 VAR_16 = VAR_10->rrset_first;
 while(VAR_16) {


  if( (VAR_16->type == VAR_1 ||
   VAR_16->type == VAR_2)) {





   if(FUNC_5(VAR_14->priv, VAR_9, VAR_16)) {
    FUNC_6(((void*)0), VAR_9, VAR_10, VAR_17, &VAR_16);
    continue;
   }
  }
  if(!FUNC_4(VAR_9, VAR_16->dname, VAR_12)) {
   if(VAR_10->an_rrsets == 0 &&
    VAR_16->type == VAR_4 &&
    VAR_16->section == VAR_8 &&
    FUNC_0(VAR_10->flags) ==
    VAR_0 && !FUNC_8(VAR_10) &&
    FUNC_10(VAR_9, VAR_12, VAR_16->dname)) {






    VAR_15 = 1;
   } else if(!VAR_13->cfg->harden_glue && (
    VAR_16->type == VAR_1 ||
    VAR_16->type == VAR_2)) {



    FUNC_9(VAR_9, VAR_10, VAR_13, VAR_16);
    FUNC_6("sanitize: storing potential "
    "poison RRset:", VAR_9, VAR_10, VAR_17, &VAR_16);
    continue;
   } else {
    if(FUNC_2(VAR_16->type)) VAR_15 = 1;
    FUNC_6("sanitize: removing potential "
    "poison RRset:", VAR_9, VAR_10, VAR_17, &VAR_16);
    continue;
   }
  }
  if(VAR_15 && VAR_16->section == VAR_6) {
   FUNC_6("sanitize: removing potential "
   "poison reference RRset:", VAR_9, VAR_10, VAR_17, &VAR_16);
   continue;
  }

  if(VAR_16->type == VAR_5 &&
   FUNC_7(VAR_16, VAR_12)) {
   FUNC_6("sanitize: removing overreaching NSEC "
    "RRset:", VAR_9, VAR_10, VAR_17, &VAR_16);
   continue;
  }
  VAR_17 = VAR_16;
  VAR_16 = VAR_16->rrset_all_next;
 }
 return 1;
}
