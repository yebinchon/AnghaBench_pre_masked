
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_owner {int po_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,char*,struct pmc_owner*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct pmc_owner*) ;
 int FUNC_5 (struct pmc_owner*) ;
 int FUNC_6 (struct pmc_owner*) ;

int
FUNC_7(struct pmc_owner *VAR_4)
{

 FUNC_1(VAR_1,VAR_0,1, "po=%p", VAR_4);

 FUNC_4(VAR_4);

 FUNC_2(&VAR_3);




 VAR_4->po_flags |= VAR_2;

 FUNC_0(50);




 FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 FUNC_3(&VAR_3);

 return (0);
}
