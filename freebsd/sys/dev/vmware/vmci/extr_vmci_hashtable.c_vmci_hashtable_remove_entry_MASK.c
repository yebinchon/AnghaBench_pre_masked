
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {scalar_t__ ref_count; int lock; } ;
struct vmci_hash_entry {scalar_t__ ref_count; int lock; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmci_hashtable*,struct vmci_hashtable*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct vmci_hashtable *VAR_2,
    struct vmci_hash_entry *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 FUNC_2(&VAR_2->lock);


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 != VAR_0) {

  goto done;
 }


 VAR_3->ref_count--;
 if (VAR_3->ref_count == 0) {
  VAR_4 = VAR_1;
  goto done;
 }

done:
 FUNC_3(&VAR_2->lock);

 return (VAR_4);
}
