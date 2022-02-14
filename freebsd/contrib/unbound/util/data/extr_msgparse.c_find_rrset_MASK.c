
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct rrset_parse {int * dname; } ;
struct regional {int dummy; } ;
struct msg_parse {int dummy; } ;
typedef int sldns_pkt_section ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rrset_parse* FUNC_0 (struct rrset_parse*,struct msg_parse*,int *,scalar_t__,int ,int,int ,struct regional*) ;
 struct rrset_parse* FUNC_1 (struct msg_parse*,int *,int ,int ,int *,size_t,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,struct rrset_parse*,scalar_t__,int*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_10(struct msg_parse* VAR_5, sldns_buffer* VAR_6, uint8_t* VAR_7,
 size_t VAR_8, uint16_t VAR_9, uint16_t VAR_10, hashvalue_type* VAR_11,
 uint32_t* VAR_12,
 uint8_t** VAR_13, uint8_t** VAR_14,
 size_t* VAR_15, uint16_t* VAR_16,
 uint16_t* VAR_17, struct rrset_parse** VAR_18,
 sldns_pkt_section VAR_19, struct regional* VAR_20)
{
 hashvalue_type VAR_21 = FUNC_2(VAR_6, VAR_7);
 uint16_t VAR_22;
 if(*VAR_18) {

  if(VAR_9 == *VAR_16 && VAR_10 == *VAR_17 &&
   VAR_8 == *VAR_15 &&
   FUNC_9(VAR_6, VAR_7, *VAR_13,
    *VAR_14) == 0 &&
   VAR_9 != VAR_1) {

   *VAR_14 = VAR_7;
   return 1;
  }

  if(VAR_9 == VAR_1 && VAR_10 == *VAR_17 &&
   FUNC_6(VAR_6, FUNC_8(VAR_6),
    *VAR_16) &&
   FUNC_9(VAR_6, VAR_7, *VAR_13,
    *VAR_14) == 0) {

   *VAR_14 = VAR_7;
   return 1;
  }
 }

 *VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_19);


 if(VAR_9 == VAR_1 && FUNC_5(VAR_6,
  FUNC_8(VAR_6), &VAR_22)) {
  *VAR_11 = FUNC_3(VAR_21, VAR_22, VAR_10,
   *VAR_12);
  *VAR_18 = FUNC_1(VAR_5, VAR_6, *VAR_11,
   *VAR_12, VAR_7, VAR_8, VAR_22, VAR_10);
  if(!*VAR_18 && VAR_22 == VAR_0) {

   *VAR_12 ^= VAR_3;
   *VAR_11 = FUNC_3(VAR_21, VAR_22, VAR_10,
    *VAR_12);
   *VAR_18 = FUNC_1(VAR_5, VAR_6,
    *VAR_11, *VAR_12, VAR_7, VAR_8, VAR_22,
    VAR_10);
   if(!*VAR_18)
    *VAR_12 ^= VAR_3;
  }
  if(!*VAR_18 && VAR_22 == VAR_2) {

   *VAR_12 ^= VAR_4;
   *VAR_11 = FUNC_3(VAR_21, VAR_22, VAR_10,
    *VAR_12);
   *VAR_18 = FUNC_1(VAR_5, VAR_6,
    *VAR_11, *VAR_12, VAR_7, VAR_8, VAR_22,
    VAR_10);
   if(!*VAR_18)
    *VAR_12 ^= VAR_4;
  }
  if(*VAR_18) {
   *VAR_13 = (*VAR_18)->dname;
   *VAR_14 = VAR_7;
   *VAR_15 = VAR_8;
   *VAR_16 = VAR_22;
   *VAR_17 = VAR_10;
   return 1;
  }
 }
 if(VAR_9 != VAR_1) {
  int VAR_23 = 0;

  *VAR_11 = FUNC_3(VAR_21, VAR_1,
   VAR_10, 0);
  *VAR_18 = FUNC_1(VAR_5, VAR_6, *VAR_11,
   0, VAR_7, VAR_8, VAR_1,
   VAR_10);
  if(*VAR_18 && FUNC_7(VAR_6, *VAR_18, VAR_9,
   &VAR_23)) {

   *VAR_13 = (*VAR_18)->dname;
   *VAR_14 = VAR_7;
   *VAR_15 = VAR_8;
   *VAR_16 = VAR_9;
   *VAR_17 = VAR_10;
   *VAR_18 = FUNC_0(*VAR_18, VAR_5,
    VAR_6, VAR_9, *VAR_12, VAR_23, VAR_19,
    VAR_20);
   if(!*VAR_18) return 0;
   return 1;
  }
 }

 *VAR_11 = FUNC_3(VAR_21, VAR_9, VAR_10, *VAR_12);
 *VAR_18 = FUNC_1(VAR_5, VAR_6, *VAR_11, *VAR_12,
  VAR_7, VAR_8, VAR_9, VAR_10);
 if(*VAR_18)
  *VAR_13 = (*VAR_18)->dname;
 else *VAR_13 = VAR_7;
 *VAR_14 = VAR_7;
 *VAR_15 = VAR_8;
 *VAR_16 = VAR_9;
 *VAR_17 = VAR_10;
 return 1;
}
