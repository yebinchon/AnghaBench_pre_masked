
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct TYPE_6__ {int lock; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ trust; } ;
struct module_env {int rrset_cache; TYPE_1__* cfg; int * now; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_5__ {int security; int flags; } ;
struct TYPE_4__ {scalar_t__ deny_any; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 struct dns_msg* FUNC_1 (int *,size_t,scalar_t__,scalar_t__,struct regional*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 struct ub_packed_rrset_key* FUNC_4 (int ,int *,size_t,scalar_t__,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct dns_msg*
FUNC_5(struct module_env* VAR_12,
 uint8_t* VAR_13, size_t VAR_14, uint16_t VAR_15, uint16_t VAR_16,
 struct regional* VAR_17)
{
 time_t VAR_18 = *VAR_12->now;
 struct dns_msg* VAR_19 = ((void*)0);
 uint16_t VAR_20[] = {VAR_1, VAR_2,
  VAR_4, VAR_6, VAR_5,
  VAR_3, 0};
 int VAR_21, VAR_22=6;
 FUNC_3(VAR_20[VAR_22] == 0);

 if(VAR_12->cfg->deny_any) {

  VAR_19 = FUNC_1(VAR_13, VAR_14, VAR_15, VAR_16,
   VAR_17, 0);
  if(!VAR_19) {
   return ((void*)0);
  }

  VAR_19->rep->flags |= VAR_0;
  VAR_19->rep->security = VAR_11;
  return VAR_19;
 }

 for(VAR_21=0; VAR_21<VAR_22; VAR_21++) {

  struct ub_packed_rrset_key* VAR_23 = FUNC_4(
   VAR_12->rrset_cache, VAR_13, VAR_14, VAR_20[VAR_21],
   VAR_16, 0, VAR_18, 0);
  struct packed_rrset_data *VAR_24;
  if(!VAR_23)
   continue;


  VAR_24 = (struct packed_rrset_data*)VAR_23->entry.data;
  if(VAR_24->trust == VAR_8 ||
   VAR_24->trust == VAR_10 ||
   VAR_24->trust == VAR_7 ||
   VAR_24->trust == VAR_9) {
   FUNC_2(&VAR_23->entry.lock);
   continue;
  }


  if(!VAR_19) {
   VAR_19 = FUNC_1(VAR_13, VAR_14, VAR_15, VAR_16,
    VAR_17, (size_t)(VAR_22-VAR_21));
   if(!VAR_19) {
    FUNC_2(&VAR_23->entry.lock);
    return ((void*)0);
   }
  }


  if(!FUNC_0(VAR_19, VAR_17, VAR_23, VAR_18)) {
   FUNC_2(&VAR_23->entry.lock);
   return ((void*)0);
  }
  FUNC_2(&VAR_23->entry.lock);
 }
 return VAR_19;
}
