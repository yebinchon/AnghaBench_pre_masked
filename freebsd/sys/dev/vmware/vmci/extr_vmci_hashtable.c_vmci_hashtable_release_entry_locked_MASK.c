
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {scalar_t__ ref_count; } ;
struct vmci_hash_entry {scalar_t__ ref_count; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmci_hashtable*,struct vmci_hashtable*) ;

__attribute__((used)) static int
FUNC_2(struct vmci_hashtable *VAR_2,
    struct vmci_hash_entry *VAR_3)
{
 int VAR_4 = VAR_0;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 VAR_3->ref_count--;

 if (VAR_3->ref_count == 0) {
  FUNC_1(VAR_2, VAR_3);
  VAR_4 = VAR_1;
 }

 return (VAR_4);
}
