
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {size_t rrset_count; size_t an_numrrsets; size_t ns_numrrsets; scalar_t__ rrsets; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void FUNC_2(struct reply_info* VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->rrset_count);
 FUNC_0(VAR_1 >= VAR_0->an_numrrsets);
 FUNC_0(VAR_1 < VAR_0->an_numrrsets+VAR_0->ns_numrrsets);
 FUNC_1(VAR_0->rrsets+VAR_1, VAR_0->rrsets+VAR_1+1,
  sizeof(struct ub_packed_rrset_key*)*
  (VAR_0->rrset_count - VAR_1 - 1));
 VAR_0->ns_numrrsets--;
 VAR_0->rrset_count--;
}
