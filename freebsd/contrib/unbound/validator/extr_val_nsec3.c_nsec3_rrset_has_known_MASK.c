
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;


 scalar_t__ FUNC_0 (struct ub_packed_rrset_key*,int) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*) ;

__attribute__((used)) static int
FUNC_3(struct ub_packed_rrset_key* VAR_0)
{
 int VAR_1;
 for(VAR_1=0; VAR_1 < (int)FUNC_2(VAR_0); VAR_1++) {
  if(!FUNC_1(VAR_0, VAR_1) && FUNC_0(VAR_0, VAR_1))
   return 1;
 }
 return 0;
}
