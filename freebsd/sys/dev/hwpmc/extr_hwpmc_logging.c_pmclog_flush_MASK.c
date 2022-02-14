
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_owner {int po_error; int po_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc_owner*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct pmc_owner*) ;

int
FUNC_4(struct pmc_owner *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_2,VAR_1,1, "po=%p", VAR_5);





 if (VAR_5->po_error)
  return (VAR_5->po_error);

 VAR_7 = 0;




 FUNC_1(&VAR_4);
 if ((VAR_5->po_flags & VAR_3) == 0) {
  VAR_7 = VAR_0;
  goto error;
 }

 FUNC_3(VAR_5);
 error:
 FUNC_2(&VAR_4);

 return (VAR_7);
}
