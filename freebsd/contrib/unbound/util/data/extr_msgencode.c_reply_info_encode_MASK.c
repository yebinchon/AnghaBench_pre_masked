
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef size_t time_t ;
struct reply_info {scalar_t__ qdcount; int an_numrrsets; int rrset_count; int ns_numrrsets; int ar_numrrsets; int * rrsets; int flags; } ;
struct regional {int dummy; } ;
struct query_info {int qtype; TYPE_1__* local_alias; } ;
struct compress_tree_node {int dummy; } ;
typedef int sldns_buffer ;
typedef int arep ;
struct TYPE_2__ {int rrset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct query_info*,struct compress_tree_node**,int *,struct regional*) ;
 int FUNC_2 (struct reply_info*,int,scalar_t__*,int *,int,size_t,struct regional*,struct compress_tree_node**,int ,int ,int,size_t) ;
 int FUNC_3 (struct reply_info*,int ,int) ;
 size_t FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct reply_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,...) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *,int,scalar_t__) ;
 size_t FUNC_15 (int *) ;

int
FUNC_16(struct query_info* VAR_9, struct reply_info* VAR_10,
 uint16_t VAR_11, uint16_t VAR_12, sldns_buffer* VAR_13, time_t VAR_14,
 struct regional* VAR_15, uint16_t VAR_16, int VAR_17)
{
 uint16_t VAR_18=0, VAR_19=0, VAR_20=0;
 struct compress_tree_node* VAR_21 = 0;
 int VAR_22;
 size_t VAR_23;

 FUNC_7(VAR_13);
 if(VAR_16 < FUNC_9(VAR_13))
  FUNC_11(VAR_13, VAR_16);
 if(FUNC_10(VAR_13) < VAR_1)
  return 0;

 FUNC_12(VAR_13, &VAR_11, sizeof(uint16_t));
 FUNC_13(VAR_13, VAR_12);
 FUNC_13(VAR_13, VAR_10->qdcount);

 FUNC_12(VAR_13, "\000\000\000\000\000\000", 6);


 if(VAR_10->qdcount) {
  if((VAR_22=FUNC_1(VAR_9, &VAR_21, VAR_13, VAR_15)) !=
   VAR_6) {
   if(VAR_22 == VAR_7) {

    FUNC_14(VAR_13, 4, 0);
    FUNC_0(FUNC_6(VAR_13));
    FUNC_8(VAR_13);
    return 1;
   }
   return 0;
  }
 }


 VAR_23 = VAR_8?FUNC_4(VAR_11)+(VAR_14?VAR_14:FUNC_15(((void*)0))):0;






 if(VAR_9->local_alias && (VAR_12 & VAR_0)) {
  struct reply_info VAR_24;
  time_t VAR_25 = 0;
  FUNC_3(&VAR_24, 0, sizeof(VAR_24));
  VAR_24.flags = VAR_10->flags;
  VAR_24.an_numrrsets = 1;
  VAR_24.rrset_count = 1;
  VAR_24.rrsets = &VAR_9->local_alias->rrset;
  if((VAR_22=FUNC_2(&VAR_24, 1, &VAR_18, VAR_13, 0,
   VAR_25, VAR_15, &VAR_21, VAR_3,
   VAR_9->qtype, VAR_17, VAR_23)) != VAR_6) {
   if(VAR_22 == VAR_7) {

    FUNC_14(VAR_13, 6, VAR_18);
    FUNC_0(FUNC_6(VAR_13));
    FUNC_8(VAR_13);
    return 1;
   }
   return 0;
  }
 }


 if((VAR_22=FUNC_2(VAR_10, VAR_10->an_numrrsets, &VAR_18, VAR_13,
  0, VAR_14, VAR_15, &VAR_21, VAR_3, VAR_9->qtype,
  VAR_17, VAR_23)) != VAR_6) {
  if(VAR_22 == VAR_7) {

   FUNC_14(VAR_13, 6, VAR_18);
   FUNC_0(FUNC_6(VAR_13));
   FUNC_8(VAR_13);
   return 1;
  }
  return 0;
 }
 FUNC_14(VAR_13, 6, VAR_18);


 if( ! (VAR_5 && FUNC_5(VAR_10, VAR_9->qtype)) ) {

  if((VAR_22=FUNC_2(VAR_10, VAR_10->ns_numrrsets, &VAR_19, VAR_13,
   VAR_10->an_numrrsets, VAR_14, VAR_15, &VAR_21,
   VAR_4, VAR_9->qtype,
   VAR_17, VAR_23)) != VAR_6) {
   if(VAR_22 == VAR_7) {

    FUNC_14(VAR_13, 8, VAR_19);
    FUNC_0(FUNC_6(VAR_13));
    FUNC_8(VAR_13);
    return 1;
   }
   return 0;
  }
  FUNC_14(VAR_13, 8, VAR_19);


  if((VAR_22=FUNC_2(VAR_10, VAR_10->ar_numrrsets, &VAR_20, VAR_13,
   VAR_10->an_numrrsets + VAR_10->ns_numrrsets, VAR_14, VAR_15,
   &VAR_21, VAR_2, VAR_9->qtype,
   VAR_17, VAR_23)) != VAR_6) {
   if(VAR_22 == VAR_7) {

    FUNC_14(VAR_13, 10, VAR_20);
    FUNC_8(VAR_13);
    return 1;
   }
   return 0;
  }
  FUNC_14(VAR_13, 10, VAR_20);
 }
 FUNC_8(VAR_13);
 return 1;
}
