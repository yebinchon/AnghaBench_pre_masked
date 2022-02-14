
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {scalar_t__* dname; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct rbtree_type {int dummy; } ;
struct module_qstate {int dummy; } ;
typedef int sldns_pkt_section ;
typedef int sldns_buffer ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct val_env*,int ,struct ub_packed_rrset_key*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct val_env*,int ,scalar_t__*,scalar_t__*,char**) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 size_t FUNC_4 (scalar_t__*,size_t) ;
 int FUNC_5 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_6 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_7 (struct ub_packed_rrset_key*,size_t) ;
 scalar_t__ FUNC_8 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_9 (struct ub_packed_rrset_key*,size_t,unsigned char**,unsigned int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_14 (scalar_t__*,scalar_t__*) ;
 int FUNC_15 (struct regional*,int *,struct ub_packed_rrset_key*,scalar_t__*,int,struct rbtree_type**,int ,struct module_qstate*) ;
 size_t FUNC_16 (struct ub_packed_rrset_key*) ;
 int FUNC_17 (struct ub_packed_rrset_key*,size_t,scalar_t__**,size_t*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int *,int,unsigned char*,unsigned int,unsigned char*,unsigned int,char**) ;

enum sec_status
FUNC_20(struct regional* VAR_6, sldns_buffer* VAR_7,
 struct val_env* VAR_8, time_t VAR_9,
        struct ub_packed_rrset_key* VAR_10, struct ub_packed_rrset_key* VAR_11,
        size_t VAR_12, size_t VAR_13,
 struct rbtree_type** VAR_14, int* VAR_15, char** VAR_16,
 sldns_pkt_section VAR_17, struct module_qstate* VAR_18)
{
 enum sec_status VAR_19;
 uint8_t* VAR_20;
 size_t VAR_21;
 size_t VAR_22 = FUNC_16(VAR_10);
 uint8_t* VAR_23;
 size_t VAR_24;
 unsigned char* VAR_25;
 unsigned int VAR_26;
 uint16_t VAR_27;
 unsigned char* VAR_28;
 unsigned int VAR_29;
 FUNC_17(VAR_10, VAR_22 + VAR_13, &VAR_20, &VAR_21);

 if(VAR_21 < 2+20) {
  FUNC_18(VAR_2, "verify: signature too short");
  *VAR_16 = "signature too short";
  return VAR_3;
 }

 if(!(FUNC_7(VAR_11, VAR_12) & VAR_0)) {
  FUNC_18(VAR_2, "verify: dnskey without ZSK flag");
  *VAR_16 = "dnskey without ZSK flag";
  return VAR_3;
 }

 if(FUNC_8(VAR_11, VAR_12) != VAR_1) {

  FUNC_18(VAR_2, "verify: dnskey has wrong key protocol");
  *VAR_16 = "dnskey has wrong protocolnumber";
  return VAR_3;
 }


 VAR_23 = VAR_20+2+18;
 VAR_24 = FUNC_4(VAR_23, VAR_21-2-18);
 if(!VAR_24) {
  FUNC_18(VAR_2, "verify: malformed signer name");
  *VAR_16 = "signer name malformed";
  return VAR_3;
 }
 if(!FUNC_3(VAR_10->rk.dname, VAR_23)) {
  FUNC_18(VAR_2, "verify: signer name is off-tree");
  *VAR_16 = "signer name off-tree";
  return VAR_3;
 }
 VAR_25 = (unsigned char*)VAR_23+VAR_24;
 if(VAR_21 < 2+18+VAR_24+1) {
  FUNC_18(VAR_2, "verify: too short, no signature data");
  *VAR_16 = "signature too short, no signature data";
  return VAR_3;
 }
 VAR_26 = (unsigned int)(VAR_21 - 2 - 18 - VAR_24);


 if(FUNC_14(VAR_23, VAR_11->rk.dname) != 0) {
  FUNC_18(VAR_2, "verify: wrong key for rrsig");
  FUNC_12(VAR_2, "RRSIG signername is",
   VAR_23, 0, 0);
  FUNC_12(VAR_2, "the key name is",
   VAR_11->rk.dname, 0, 0);
  *VAR_16 = "signer name mismatches key name";
  return VAR_3;
 }



 if(FUNC_13(VAR_20+2, &VAR_10->rk.type, 2) != 0) {
  FUNC_18(VAR_2, "verify: wrong type covered");
  *VAR_16 = "signature covers wrong type";
  return VAR_3;
 }

 if((int)VAR_20[2+2] != FUNC_6(VAR_11, VAR_12)) {
  FUNC_18(VAR_2, "verify: wrong algorithm");
  *VAR_16 = "signature has wrong algorithm";
  return VAR_3;
 }
 VAR_27 = FUNC_10(FUNC_5(VAR_11, VAR_12));
 if(FUNC_13(VAR_20+2+16, &VAR_27, 2) != 0) {
  FUNC_18(VAR_2, "verify: wrong keytag");
  *VAR_16 = "signature has wrong keytag";
  return VAR_3;
 }


 if((int)VAR_20[2+3] > FUNC_2(VAR_10->rk.dname)) {
  FUNC_18(VAR_2, "verify: labelcount out of range");
  *VAR_16 = "signature labelcount out of range";
  return VAR_3;
 }



 if(!*VAR_15) {


  if(!FUNC_15(VAR_6, VAR_7, VAR_10, VAR_20+2,
   18 + VAR_24, VAR_14, VAR_17, VAR_18)) {
   FUNC_11("verify: failed due to alloc error");
   return VAR_5;
  }
  *VAR_15 = 1;
 }


 FUNC_9(VAR_11, VAR_12, &VAR_28, &VAR_29);
 if(!VAR_28) {
  FUNC_18(VAR_2, "verify: short DNSKEY RR");
  return VAR_5;
 }


 VAR_19 = FUNC_19(VAR_7, (int)VAR_20[2+2],
  VAR_25, VAR_26, VAR_28, VAR_29, VAR_16);

 if(VAR_19 == VAR_4) {

  FUNC_0(VAR_8, VAR_9, VAR_10, VAR_20+2+4, VAR_20+2+8, VAR_20+2+12);




  if(!FUNC_1(VAR_8, VAR_9, VAR_20+2+8, VAR_20+2+12, VAR_16)) {
   return VAR_3;
  }
 }

 return VAR_19;
}
