
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct respip_client_info {int dummy; } ;
struct respip_action_info {scalar_t__ member_0; scalar_t__ action; int * member_1; } ;
struct reply_info {scalar_t__ security; size_t an_numrrsets; int flags; int * rrsets; } ;
struct regional {int dummy; } ;
struct query_info {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,struct regional*) ;
 int FUNC_3 (char*) ;
 struct reply_info* FUNC_4 (struct reply_info*,struct regional*,size_t,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct query_info const*,struct respip_client_info const*,struct reply_info const*,struct reply_info**,struct respip_action_info*,struct ub_packed_rrset_key**,int,struct regional*) ;
 scalar_t__ VAR_4 ;

int
FUNC_6(struct reply_info* VAR_5,
 const struct query_info* VAR_6, const struct reply_info* VAR_7,
 const struct respip_client_info* VAR_8, int VAR_9,
 struct reply_info** VAR_10, struct regional* VAR_11)
{
 struct reply_info* VAR_12;
 struct reply_info* VAR_13 = ((void*)0);
 struct ub_packed_rrset_key* VAR_14 = ((void*)0);
 uint16_t VAR_15;
 size_t VAR_16, VAR_17;
 struct respip_action_info VAR_18 = {VAR_3, ((void*)0)};
 VAR_15 = FUNC_0(VAR_7->flags);
 if((VAR_15 != VAR_0 &&
  VAR_15 != VAR_1 &&
  VAR_15 != VAR_2) ||
  (VAR_9 && VAR_7->security <= VAR_4)) {
  return 0;
 }


 if(!FUNC_5(VAR_6, VAR_8, VAR_7, &VAR_13, &VAR_18,
  &VAR_14, 1, VAR_11))
  return 0;
 if(VAR_18.action != VAR_3) {
  FUNC_3("CNAME target of redirect response-ip action would "
   "be subject to response-ip action, too; stripped");
  *VAR_10 = VAR_5;
  return 1;
 }





 VAR_12 = FUNC_4(VAR_5, VAR_11,
  VAR_5->an_numrrsets + VAR_7->an_numrrsets,
  VAR_5->an_numrrsets);
 if(!VAR_12)
  return 0;
 for(VAR_16=0,VAR_17=VAR_5->an_numrrsets; VAR_16<VAR_7->an_numrrsets; VAR_16++,VAR_17++) {
  VAR_12->rrsets[VAR_17] = FUNC_2(VAR_7->rrsets[VAR_16], VAR_11);
  if(!VAR_12->rrsets[VAR_17])
   return 0;
 }

 FUNC_1(VAR_12->flags, VAR_15);
 *VAR_10 = VAR_12;
 return 1;
}
