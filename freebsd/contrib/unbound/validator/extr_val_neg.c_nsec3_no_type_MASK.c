
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ count; } ;


 scalar_t__ FUNC_0 (struct ub_packed_rrset_key*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ub_packed_rrset_key* VAR_0, uint16_t VAR_1)
{
 int VAR_2 = (int)((struct packed_rrset_data*)VAR_0->entry.data)->count;
 int VAR_3;
 for(VAR_3=0; VAR_3<VAR_2; VAR_3++)
  if(FUNC_0(VAR_0, VAR_3, VAR_1))
   return 0;
 return 1;
}
