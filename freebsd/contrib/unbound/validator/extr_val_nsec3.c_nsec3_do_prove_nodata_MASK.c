
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {size_t qname_len; scalar_t__ qtype; int * qname; } ;
struct nsec3_filter {int dummy; } ;
struct module_env {int scratch; } ;
struct ce_response {int nc_rr; scalar_t__ nc_rrset; int ce_len; scalar_t__ ce; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct module_env*,struct nsec3_filter*,int *,int *,size_t,struct ub_packed_rrset_key**,int*) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__,int ,size_t*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct ub_packed_rrset_key*,int,scalar_t__) ;
 int FUNC_6 (struct module_env*,struct nsec3_filter*,int *,struct query_info*,int,struct ce_response*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static enum sec_status
FUNC_8(struct module_env* VAR_8, struct nsec3_filter* VAR_9,
 rbtree_type* VAR_10, struct query_info* VAR_11)
{
 struct ce_response VAR_12;
 uint8_t* VAR_13;
 size_t VAR_14;
 struct ub_packed_rrset_key* VAR_15;
 int VAR_16;
 enum sec_status VAR_17;

 if(FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11->qname, VAR_11->qname_len,
  &VAR_15, &VAR_16)) {

  if(FUNC_5(VAR_15, VAR_16, VAR_11->qtype)) {
   FUNC_7(VAR_4, "proveNodata: Matching NSEC3 "
    "proved that type existed, bogus");
   return VAR_5;
  } else if(FUNC_5(VAR_15, VAR_16, VAR_0)) {
   FUNC_7(VAR_4, "proveNodata: Matching NSEC3 "
    "proved that a CNAME existed, bogus");
   return VAR_5;
  }
  if(VAR_11->qtype == VAR_1 && VAR_11->qname_len != 1
   && FUNC_5(VAR_15, VAR_16, VAR_3) &&
   !FUNC_0(VAR_11->qname)) {
   FUNC_7(VAR_4, "proveNodata: apex NSEC3 "
    "abused for no DS proof, bogus");
   return VAR_5;
  } else if(VAR_11->qtype != VAR_1 &&
   FUNC_5(VAR_15, VAR_16, VAR_2) &&
   !FUNC_5(VAR_15, VAR_16, VAR_3)) {
   if(!FUNC_5(VAR_15, VAR_16, VAR_1)) {
    FUNC_7(VAR_4, "proveNodata: matching "
     "NSEC3 is insecure delegation");
    return VAR_6;
   }
   FUNC_7(VAR_4, "proveNodata: matching "
    "NSEC3 is a delegation, bogus");
   return VAR_5;
  }
  return VAR_7;
 }




 VAR_17 = FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11, 1, &VAR_12);
 if(VAR_17 == VAR_5) {
  FUNC_7(VAR_4, "proveNodata: did not match qname, "
            "nor found a proven closest encloser.");
  return VAR_5;
 } else if(VAR_17==VAR_6 && VAR_11->qtype!=VAR_1){
  FUNC_7(VAR_4, "proveNodata: closest nsec3 is insecure "
            "delegation.");
  return VAR_6;
 }




 FUNC_2(VAR_12.ce);
 VAR_13 = FUNC_3(VAR_8->scratch, VAR_12.ce, VAR_12.ce_len, &VAR_14);
 if(VAR_13 && FUNC_1(VAR_8, VAR_9, VAR_10, VAR_13, VAR_14, &VAR_15, &VAR_16)) {

  if(FUNC_5(VAR_15, VAR_16, VAR_11->qtype)) {
   FUNC_7(VAR_4, "nsec3 nodata proof: matching "
    "wildcard had qtype, bogus");
   return VAR_5;
  } else if(FUNC_5(VAR_15, VAR_16, VAR_0)) {
   FUNC_7(VAR_4, "nsec3 nodata proof: matching "
    "wildcard had a CNAME, bogus");
   return VAR_5;
  }
  if(VAR_11->qtype == VAR_1 && VAR_11->qname_len != 1
   && FUNC_5(VAR_15, VAR_16, VAR_3)) {
   FUNC_7(VAR_4, "nsec3 nodata proof: matching "
    "wildcard for no DS proof has a SOA, bogus");
   return VAR_5;
  } else if(VAR_11->qtype != VAR_1 &&
   FUNC_5(VAR_15, VAR_16, VAR_2) &&
   !FUNC_5(VAR_15, VAR_16, VAR_3)) {
   FUNC_7(VAR_4, "nsec3 nodata proof: matching "
    "wildcard is a delegation, bogus");
   return VAR_5;
  }

  if(VAR_12.nc_rrset && FUNC_4(VAR_12.nc_rrset, VAR_12.nc_rr)) {
   FUNC_7(VAR_4, "nsec3 nodata proof: matching "
    "wildcard is in optout range, insecure");
   return VAR_6;
  }
  return VAR_7;
 }





 if(!VAR_12.nc_rrset) {
  FUNC_7(VAR_4, "nsec3 nodata proof: no next closer nsec3");
  return VAR_5;
 }


 FUNC_2(VAR_12.nc_rrset);
 if(!FUNC_4(VAR_12.nc_rrset, VAR_12.nc_rr)) {
  if(VAR_11->qtype == VAR_1)
    FUNC_7(VAR_4, "proveNodata: covering NSEC3 was not "
   "opt-out in an opt-out DS NOERROR/NODATA case.");
  else FUNC_7(VAR_4, "proveNodata: could not find matching "
   "NSEC3, nor matching wildcard, nor optout NSEC3 "
   "-- no more options, bogus.");
  return VAR_5;
 }

 return VAR_6;
}
