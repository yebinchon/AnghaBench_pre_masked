
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {int type; struct omp_region* next; struct omp_region* inner; } ;
 int FUNC_0 (struct omp_region*) ;
 int FUNC_1 (struct omp_region*) ;
 int FUNC_2 (struct omp_region*) ;
 int FUNC_3 (struct omp_region*) ;
 int FUNC_4 (struct omp_region*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (struct omp_region *VAR_0)
{
  while (VAR_0)
    {
      if (VAR_0->inner)
 FUNC_6 (VAR_0->inner);

      switch (VAR_0->type)
 {
 case 131:
   FUNC_1 (VAR_0);
   break;

 case 134:
   FUNC_0 (VAR_0);
   break;

 case 129:
   FUNC_2 (VAR_0);
   break;

 case 130:


   break;

 case 128:
   FUNC_3 (VAR_0);
   break;

 case 133:
 case 132:
 case 135:
   FUNC_4 (VAR_0);
   break;

 default:
   FUNC_5 ();
 }

      VAR_0 = VAR_0->next;
    }
}
