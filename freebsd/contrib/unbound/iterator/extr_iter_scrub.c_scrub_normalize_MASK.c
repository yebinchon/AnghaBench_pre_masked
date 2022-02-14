
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrset_parse {scalar_t__ section; scalar_t__ type; int rr_count; int flags; struct rrset_parse* rrset_all_next; scalar_t__ rrsig_count; int * dname; } ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; scalar_t__ qtype; int * qname; } ;
struct msg_parse {int an_rrsets; int rrset_count; struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; scalar_t__ ar_rrsets; scalar_t__ ns_rrsets; scalar_t__ arcount; scalar_t__ nscount; scalar_t__ ancount; int flags; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct msg_parse*,struct rrset_parse*) ;
 scalar_t__ FUNC_4 (struct rrset_parse*,int **,size_t*) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (char*,int *,struct msg_parse*,struct rrset_parse*,struct rrset_parse**) ;
 scalar_t__ FUNC_7 (struct msg_parse*) ;
 int FUNC_8 (int *,int *,int *) ;
 scalar_t__ FUNC_9 (int *,size_t,struct rrset_parse*,int *,size_t*,int *) ;
 struct rrset_parse* FUNC_10 (int **,size_t*,int *,size_t,struct regional*,struct msg_parse*,struct rrset_parse*,struct rrset_parse*,struct rrset_parse*,int *) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_12(sldns_buffer* VAR_15, struct msg_parse* VAR_16,
 struct query_info* VAR_17, struct regional* VAR_18)
{
 uint8_t* VAR_19 = VAR_17->qname;
 size_t VAR_20 = VAR_17->qname_len;
 struct rrset_parse* VAR_21, *VAR_22, *VAR_23=((void*)0);

 if(FUNC_0(VAR_16->flags) != VAR_1 &&
  FUNC_0(VAR_16->flags) != VAR_2)
  return 1;







 VAR_22 = ((void*)0);
 VAR_21 = VAR_16->rrset_first;
 while(VAR_21 && VAR_21->section == VAR_11) {
  if(VAR_21->type == VAR_7 &&
   FUNC_5(VAR_15, VAR_19, VAR_21->dname)) {


   struct rrset_parse* VAR_24 = VAR_21->rrset_all_next;
   uint8_t VAR_25[VAR_0+1];
   size_t VAR_26 = 0;
   if(VAR_21->rr_count != 1) {
    FUNC_11(VAR_14, "Found DNAME rrset with "
     "size > 1: %u",
     (unsigned)VAR_21->rr_count);
    return 0;
   }
   if(!FUNC_9(VAR_19, VAR_20, VAR_21, VAR_25,
    &VAR_26, VAR_15)) {
    FUNC_11(VAR_14, "synthesized CNAME "
     "too long");
    return 0;
   }
   if(VAR_24 && VAR_24->type == VAR_6 &&
      FUNC_1(VAR_15, VAR_19, VAR_24->dname) == 0) {

    uint8_t* VAR_27 = ((void*)0);
    size_t VAR_28 = 0;
    if(!FUNC_4(VAR_24, &VAR_27, &VAR_28))
     return 0;
    if(FUNC_1(VAR_15, VAR_25, VAR_27) == 0) {

     VAR_22 = VAR_21;
     VAR_21 = VAR_24;
     continue;
    }

   }

   VAR_22 = FUNC_10(&VAR_19, &VAR_20, VAR_25,
    VAR_26, VAR_18, VAR_16, VAR_21, VAR_21, VAR_24, VAR_15);
   if(!VAR_22) {
    FUNC_2("out of memory synthesizing CNAME");
    return 0;
   }


   VAR_21 = VAR_24;
   continue;

  }


  if(FUNC_1(VAR_15, VAR_19, VAR_21->dname) != 0) {
   FUNC_6("normalize: removing irrelevant RRset:",
    VAR_15, VAR_16, VAR_22, &VAR_21);
   continue;
  }


  if(VAR_21->type == VAR_6) {
   struct rrset_parse* VAR_29 = VAR_21->rrset_all_next;
   uint8_t* VAR_30 = VAR_19;

   if(VAR_29 && VAR_29->section == VAR_11 &&
    VAR_29->type == VAR_7 &&
    VAR_29->rr_count == 1 &&
    FUNC_5(VAR_15, VAR_19, VAR_29->dname)) {





    uint8_t VAR_31[VAR_0+1];
    size_t VAR_32 = 0;
    uint8_t* VAR_33 = ((void*)0);
    size_t VAR_34 = 0;
    if(FUNC_9(VAR_19, VAR_20, VAR_29, VAR_31,
     &VAR_32, VAR_15) &&
     FUNC_4(VAR_21, &VAR_33, &VAR_34) &&
        FUNC_1(VAR_15, VAR_31, VAR_33) == 0) {




     FUNC_11(VAR_14, "normalize: re-order of DNAME and its CNAME");
     if(VAR_22) VAR_22->rrset_all_next = VAR_29;
     else VAR_16->rrset_first = VAR_29;
     if(VAR_29->rrset_all_next == ((void*)0))
      VAR_16->rrset_last = VAR_21;
     VAR_21->rrset_all_next =
      VAR_29->rrset_all_next;
     VAR_29->rrset_all_next = VAR_21;



    }
   }


   if(!FUNC_4(VAR_21, &VAR_19, &VAR_20))
    return 0;
   VAR_22 = VAR_21;
   VAR_21 = VAR_21->rrset_all_next;

   if(VAR_17->qtype == VAR_5) {
    while(VAR_21 && VAR_21->section ==
     VAR_11 &&
     FUNC_1(VAR_15, VAR_30,
     VAR_21->dname) == 0) {
     VAR_22 = VAR_21;
     VAR_21 = VAR_21->rrset_all_next;
    }
   }
   continue;
  }


  if(VAR_17->qtype != VAR_5 &&
   VAR_17->qtype != VAR_21->type) {
   FUNC_6("normalize: removing irrelevant RRset:",
    VAR_15, VAR_16, VAR_22, &VAR_21);
   continue;
  }




  if(FUNC_1(VAR_15, VAR_17->qname, VAR_21->dname) == 0)
   FUNC_3(VAR_15, VAR_16, VAR_21);

  VAR_22 = VAR_21;
  VAR_21 = VAR_21->rrset_all_next;
 }


 while(VAR_21 && VAR_21->section == VAR_12) {
  if(VAR_21->type==VAR_7 ||
   VAR_21->type==VAR_6 ||
   VAR_21->type==VAR_3 ||
   VAR_21->type==VAR_4) {
   FUNC_6("normalize: removing irrelevant "
    "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
   continue;
  }

  if(VAR_21->type==VAR_9) {

   if(!FUNC_8(VAR_15, VAR_17->qname, VAR_21->dname)) {
    FUNC_6("normalize: removing irrelevant "
     "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
    continue;
   }






   if(FUNC_0(VAR_16->flags) == VAR_2 ||
      (FUNC_0(VAR_16->flags) == VAR_1
       && FUNC_7(VAR_16) && VAR_16->an_rrsets == 0)) {
    FUNC_6("normalize: removing irrelevant "
     "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
    continue;
   }
   if(VAR_23 == ((void*)0)) {
    VAR_23 = VAR_21;
   } else {
    FUNC_6("normalize: removing irrelevant "
     "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
    continue;
   }
  }


  if(VAR_21->type==VAR_8 &&
   VAR_17->qtype == VAR_8 &&
   FUNC_1(VAR_15, VAR_17->qname, VAR_21->dname) == 0) {
   VAR_21->section = VAR_11;
   VAR_16->ancount = VAR_21->rr_count + VAR_21->rrsig_count;
   VAR_16->nscount = 0;
   VAR_16->arcount = 0;
   VAR_16->an_rrsets = 1;
   VAR_16->ns_rrsets = 0;
   VAR_16->ar_rrsets = 0;
   VAR_16->rrset_count = 1;
   VAR_16->rrset_first = VAR_21;
   VAR_16->rrset_last = VAR_21;
   VAR_21->rrset_all_next = ((void*)0);
   return 1;
  }
  FUNC_3(VAR_15, VAR_16, VAR_21);
  VAR_22 = VAR_21;
  VAR_21 = VAR_21->rrset_all_next;
 }





 while(VAR_21 && VAR_21->section == VAR_10) {

  if(VAR_21->type==VAR_3 ||
   VAR_21->type==VAR_4)
  {
   if((VAR_21->flags & VAR_13)) {

    VAR_21->flags &= ~VAR_13;
   } else {
    FUNC_6("normalize: removing irrelevant "
     "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
    continue;
   }
  }
  if(VAR_21->type==VAR_7 ||
   VAR_21->type==VAR_6 ||
   VAR_21->type==VAR_9) {
   FUNC_6("normalize: removing irrelevant "
    "RRset:", VAR_15, VAR_16, VAR_22, &VAR_21);
   continue;
  }
  VAR_22 = VAR_21;
  VAR_21 = VAR_21->rrset_all_next;
 }

 return 1;
}
