
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_ref {scalar_t__ key; } ;



__attribute__((used)) static int
FUNC_0(const void* VAR_0, const void* VAR_1)
{
 struct rrset_ref* VAR_2 = (struct rrset_ref*)VAR_0;
 struct rrset_ref* VAR_3 = (struct rrset_ref*)VAR_1;
 if(VAR_2->key < VAR_3->key) return -1;
 if(VAR_2->key > VAR_3->key) return 1;
 return 0;
}
