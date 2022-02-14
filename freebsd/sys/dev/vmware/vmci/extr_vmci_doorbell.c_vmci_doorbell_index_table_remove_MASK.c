
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_doorbell_entry {int idx; int resource; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct vmci_doorbell_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmci_doorbell_entry*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct vmci_doorbell_entry *VAR_5)
{
 FUNC_0(VAR_5);

 FUNC_2(&VAR_4.lock);

 FUNC_3(VAR_5, VAR_0);

 VAR_3--;
 if (VAR_5->idx == VAR_2 - 1) {







  while (VAR_2 > 0 &&
      !FUNC_1(VAR_2 - 1))
   VAR_2--;
 }
 VAR_1 = VAR_5->idx;

 FUNC_4(&VAR_4.lock);

 FUNC_5(&VAR_5->resource);
}
