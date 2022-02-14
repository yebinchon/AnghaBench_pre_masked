
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {int size; struct vmci_hashtable* entries; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vmci_hashtable*,int ,int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct vmci_hashtable*,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;

struct vmci_hashtable *
FUNC_4(int VAR_2)
{
 struct vmci_hashtable *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3),
     VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->entries = FUNC_1(sizeof(*VAR_3->entries) * VAR_2,
     VAR_0);
 if (VAR_3->entries == ((void*)0)) {
  FUNC_2(VAR_3, sizeof(*VAR_3));
  return (((void*)0));
 }
 FUNC_0(VAR_3->entries, 0, sizeof(*VAR_3->entries) * VAR_2);
 VAR_3->size = VAR_2;
 if (FUNC_3(&VAR_3->lock, "VMCI Hashtable lock") <
     VAR_1) {
  FUNC_2(VAR_3->entries, sizeof(*VAR_3->entries) * VAR_2);
  FUNC_2(VAR_3, sizeof(*VAR_3));
  return (((void*)0));
 }

 return (VAR_3);
}
