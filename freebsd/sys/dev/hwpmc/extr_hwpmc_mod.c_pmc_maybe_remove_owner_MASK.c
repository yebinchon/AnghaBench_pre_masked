
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_owner {int po_flags; int po_pmcs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,char*,struct pmc_owner*) ;
 int VAR_2 ;
 int FUNC_2 (struct pmc_owner*) ;
 int FUNC_3 (struct pmc_owner*) ;

__attribute__((used)) static void
FUNC_4(struct pmc_owner *VAR_3)
{

 FUNC_1(VAR_1,VAR_0,1, "maybe-remove-owner po=%p", VAR_3);







 if (FUNC_0(&VAR_3->po_pmcs) &&
     ((VAR_3->po_flags & VAR_2) == 0)) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }
}
