
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct canon_rr {scalar_t__ rrset; int rr_idx; } ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(const void* VAR_0, const void* VAR_1)
{
 struct canon_rr* VAR_2 = (struct canon_rr*)VAR_0;
 struct canon_rr* VAR_3 = (struct canon_rr*)VAR_1;
 FUNC_1(VAR_2->rrset == VAR_3->rrset);
 return FUNC_0(VAR_2->rrset, VAR_2->rr_idx, VAR_3->rr_idx);
}
