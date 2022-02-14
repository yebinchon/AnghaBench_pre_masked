
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct packed_rrset_data {scalar_t__ security; scalar_t__ trust; scalar_t__ ttl; size_t count; size_t rrsig_count; scalar_t__* rr_ttl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(void* VAR_2, void* VAR_3, time_t VAR_4, int VAR_5, int VAR_6)
{
 struct packed_rrset_data* VAR_7 = (struct packed_rrset_data*)VAR_2;
 struct packed_rrset_data* VAR_8 = (struct packed_rrset_data*)VAR_3;



 if( VAR_7->security == VAR_1 &&
  VAR_8->security != VAR_1)
  return 1;
 if( VAR_8->security == VAR_0 &&
  VAR_7->security != VAR_0 && !VAR_5)
  return 1;

        if( VAR_7->trust > VAR_8->trust ) {


  if(VAR_5 && VAR_8->ttl >= VAR_4 &&
   VAR_8->security == VAR_0)
   return 0;
                return 1;
 }

 if( VAR_8->ttl < VAR_4 )
  return 1;

 if( VAR_7->trust == VAR_8->trust && !VAR_5 ) {




  if(VAR_6) {
   size_t VAR_9;
   VAR_7->ttl = VAR_8->ttl;
   for(VAR_9=0; VAR_9<(VAR_7->count+VAR_7->rrsig_count); VAR_9++)
    if(VAR_7->rr_ttl[VAR_9] > VAR_7->ttl)
     VAR_7->rr_ttl[VAR_9] = VAR_7->ttl;
  }
  return 1;
 }
 return 0;
}
