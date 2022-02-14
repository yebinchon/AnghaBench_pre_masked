
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust_anchor {size_t numDS; int ds_rrset; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static size_t
FUNC_2(struct trust_anchor* VAR_0)
{
 size_t VAR_1, VAR_2 = 0;
 for(VAR_1=0; VAR_1<VAR_0->numDS; VAR_1++) {
  if(!FUNC_0(VAR_0->ds_rrset, VAR_1) ||
   !FUNC_1(VAR_0->ds_rrset, VAR_1))
   VAR_2++;
 }
 return VAR_2;
}
