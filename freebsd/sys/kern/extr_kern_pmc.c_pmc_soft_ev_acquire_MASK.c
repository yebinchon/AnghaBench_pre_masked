
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_soft {int dummy; } ;
typedef enum pmc_event { ____Placeholder_pmc_event } pmc_event ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct pmc_soft** VAR_3 ;
 int VAR_4 ;

struct pmc_soft *
FUNC_3(enum pmc_event VAR_5)
{
 struct pmc_soft *VAR_6;

 if (VAR_5 == 0 || (VAR_5 - VAR_0) >= VAR_2)
  return ((void*)0);

 FUNC_0((int)VAR_5 >= VAR_0 &&
     (int)VAR_5 <= VAR_1,
     ("event out of range"));

 FUNC_1(&VAR_4);

 VAR_6 = VAR_3[VAR_5 - VAR_0];
 if (VAR_6 == ((void*)0))
  FUNC_2(&VAR_4);

 return VAR_6;
}
