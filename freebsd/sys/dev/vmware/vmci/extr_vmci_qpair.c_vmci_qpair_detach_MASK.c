
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qpair {int flags; int event; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmci_qpair*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct vmci_qpair **VAR_2)
{
 struct vmci_qpair *VAR_3;
 int VAR_4;

 if (!VAR_2 || !(*VAR_2))
  return (VAR_0);

 VAR_3 = *VAR_2;
 VAR_4 = FUNC_2(VAR_3->handle);
 if (VAR_3->flags & VAR_1)
  FUNC_0(&VAR_3->event);

 FUNC_1(VAR_3, sizeof(*VAR_3));
 *VAR_2 = ((void*)0);

 return (VAR_4);
}
