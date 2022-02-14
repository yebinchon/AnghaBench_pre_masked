
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct delegpt {int namelabs; int namelen; int name; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_5__ {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__) ;

int FUNC_6(struct dns_msg* VAR_6, struct delegpt* VAR_7,
        enum response_type VAR_8, uint16_t VAR_9)
{
 if(!VAR_6 || !VAR_7 || !VAR_6->rep || !VAR_7->name)
  return 0;

 if(FUNC_4(VAR_6->rep, VAR_7->name, VAR_7->namelen,
  VAR_2, VAR_9) ||
    FUNC_5(VAR_6->rep, VAR_7->name, VAR_7->namelen,
  VAR_2, VAR_9))
  return 1;
 if(VAR_8 == VAR_5) {
  size_t VAR_10;




  for(VAR_10=0; VAR_10<VAR_6->rep->an_numrrsets+VAR_6->rep->ns_numrrsets;
   VAR_10++) {
   struct ub_packed_rrset_key* VAR_11 = VAR_6->rep->rrsets[VAR_10];
   if(FUNC_3(VAR_11->rk.type) == VAR_1 &&
    FUNC_3(VAR_11->rk.rrset_class) == VAR_9) {
    int VAR_12 = FUNC_0(VAR_11->rk.dname);
    if(VAR_12 == VAR_7->namelabs + 1 &&
     FUNC_1(VAR_11->rk.dname,
     VAR_12, VAR_7->name, VAR_7->namelabs))
     return 1;
   }
  }
  return 0;
 }
 FUNC_2(VAR_8==VAR_3 || VAR_8==VAR_4);


 if(FUNC_4(VAR_6->rep, VAR_7->name, VAR_7->namelen,
  VAR_1, VAR_9) ||
    FUNC_5(VAR_6->rep, VAR_7->name, VAR_7->namelen,
  VAR_1, VAR_9))
  return 1;


 if(FUNC_4(VAR_6->rep, VAR_7->name, VAR_7->namelen,
  VAR_0, VAR_9))
  return 1;
 return 0;
}
