
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct rrset_ref {int dummy; } ;
struct reply_info {int rrset_count; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int qname_len; } ;
struct msgreply_entry {TYPE_2__ entry; TYPE_1__ key; } ;


 int FUNC_0 (int *) ;

size_t
FUNC_1(void* VAR_0, void* VAR_1)
{
 struct msgreply_entry* VAR_2 = (struct msgreply_entry*)VAR_0;
 struct reply_info* VAR_3 = (struct reply_info*)VAR_1;
 size_t VAR_4 = sizeof(struct msgreply_entry) + sizeof(struct reply_info)
  + VAR_2->key.qname_len + FUNC_0(&VAR_2->entry.lock)
  - sizeof(struct rrset_ref);
 VAR_4 += VAR_3->rrset_count * sizeof(struct rrset_ref);
 VAR_4 += VAR_3->rrset_count * sizeof(struct ub_packed_rrset_key*);
 return VAR_4;
}
