
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packed_rrset_data {size_t count; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct key_entry_key {TYPE_1__ entry; } ;
struct key_entry_data {struct packed_rrset_data* rrset_data; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct packed_rrset_data*,size_t) ;
 int FUNC_1 (struct packed_rrset_data*,size_t) ;
 int FUNC_2 (struct key_entry_key*) ;

size_t
FUNC_3(struct key_entry_key* VAR_1)
{
 struct packed_rrset_data* VAR_2;

 size_t VAR_3;
 size_t VAR_4 = 0;
 if(!FUNC_2(VAR_1))
  return 0;
 VAR_2 = ((struct key_entry_data*)VAR_1->entry.data)->rrset_data;
 for(VAR_3=0; VAR_3<VAR_2->count; VAR_3++) {
  if(!(FUNC_1(VAR_2, VAR_3) & VAR_0))
   continue;
  if(VAR_3==0 || FUNC_0(VAR_2, VAR_3) < VAR_4)
   VAR_4 = FUNC_0(VAR_2, VAR_3);
 }
 return VAR_4;
}
