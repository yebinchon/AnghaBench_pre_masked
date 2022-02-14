
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct key_entry_key {int namelen; TYPE_1__ entry; } ;
struct key_entry_data {char* reason; scalar_t__ algo; scalar_t__ rrset_data; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;

size_t
FUNC_3(void* VAR_0, void* VAR_1)
{
 struct key_entry_key* VAR_2 = (struct key_entry_key*)VAR_0;
 struct key_entry_data* VAR_3 = (struct key_entry_data*)VAR_1;
 size_t VAR_4 = sizeof(*VAR_2) + VAR_2->namelen;
 VAR_4 += sizeof(*VAR_3) + FUNC_0(&VAR_2->entry.lock);
 if(VAR_3->rrset_data)
  VAR_4 += FUNC_1(VAR_3->rrset_data);
 if(VAR_3->reason)
  VAR_4 += FUNC_2(VAR_3->reason)+1;
 if(VAR_3->algo)
  VAR_4 += FUNC_2((char*)VAR_3->algo)+1;
 return VAR_4;
}
