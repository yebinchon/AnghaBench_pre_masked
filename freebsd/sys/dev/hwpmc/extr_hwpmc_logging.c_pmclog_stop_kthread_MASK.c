
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_owner {int * po_kthread; int po_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct pmc_owner*) ;

__attribute__((used)) static void
FUNC_7(struct pmc_owner *VAR_4)
{

 FUNC_4(&VAR_3);
 VAR_4->po_flags &= ~VAR_0;
 if (VAR_4->po_kthread != ((void*)0)) {
  FUNC_0(VAR_4->po_kthread);
  FUNC_2(VAR_4->po_kthread, VAR_2);
  FUNC_1(VAR_4->po_kthread);
 }
 FUNC_6(VAR_4);
 while (VAR_4->po_kthread)
  FUNC_3(VAR_4->po_kthread, &VAR_3, VAR_1, "pmckstp", 0);
 FUNC_5(&VAR_3);
}
