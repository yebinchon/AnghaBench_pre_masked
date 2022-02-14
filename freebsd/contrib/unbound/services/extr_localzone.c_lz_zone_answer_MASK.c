
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct module_env {int dummy; } ;
struct local_zone {scalar_t__ soa; } ;
struct local_data {scalar_t__ rrsets; } ;
struct edns_data {int dummy; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct query_info*,struct module_env*,struct edns_data*,struct comm_reply*,int *,struct regional*,scalar_t__,int ,int) ;
 int FUNC_1 (struct query_info*,struct module_env*,struct edns_data*,struct comm_reply*,int *,struct regional*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct local_zone* VAR_14, struct module_env* VAR_15,
 struct query_info* VAR_16, struct edns_data* VAR_17,
 struct comm_reply* VAR_18, sldns_buffer* VAR_19, struct regional* VAR_20,
 struct local_data* VAR_21, enum localzone_type VAR_22)
{
 if(VAR_22 == VAR_7 || VAR_22 == VAR_8) {

  FUNC_2(VAR_19);
  FUNC_3(VAR_19);
  return 1;
 } else if(VAR_22 == VAR_11
  || VAR_22 == VAR_5) {
  FUNC_1(VAR_16, VAR_15, VAR_17, VAR_18, VAR_19, VAR_20,
   VAR_3, (VAR_3|VAR_0));
  return 1;
 } else if(VAR_22 == VAR_12 ||
  VAR_22 == VAR_10 ||
  VAR_22 == VAR_9 ||
  VAR_22 == VAR_4) {







  int VAR_23 = (VAR_21 || VAR_22 == VAR_10 ||
   VAR_22 == VAR_9)?
   VAR_1:VAR_2;
  if(VAR_14->soa)
   return FUNC_0(VAR_16, VAR_15, VAR_17, VAR_18, VAR_19, VAR_20,
    VAR_14->soa, 0, VAR_23);
  FUNC_1(VAR_16, VAR_15, VAR_17, VAR_18, VAR_19, VAR_20, VAR_23,
   (VAR_23|VAR_0));
  return 1;
 } else if(VAR_22 == VAR_13
  || VAR_22 == VAR_6) {

  return 0;
 }




 if(VAR_21 && VAR_21->rrsets) {
  int VAR_24 = VAR_1;
  if(VAR_14->soa)
   return FUNC_0(VAR_16, VAR_15, VAR_17, VAR_18, VAR_19, VAR_20,
    VAR_14->soa, 0, VAR_24);
  FUNC_1(VAR_16, VAR_15, VAR_17, VAR_18, VAR_19, VAR_20, VAR_24,
   (VAR_24|VAR_0));
  return 1;
 }


 return 0;
}
