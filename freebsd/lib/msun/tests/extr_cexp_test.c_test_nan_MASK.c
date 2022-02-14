
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double,double) ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double* VAR_5 ;
 unsigned int FUNC_1 (double*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int ,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 unsigned VAR_6;



 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_5); VAR_6++) {
  FUNC_2("# Run %d..\n", VAR_6);
  FUNC_3(FUNC_0(VAR_5[VAR_6], VAR_4), FUNC_0(VAR_4, VAR_4),
   VAR_0 & ~VAR_2, 0, 0);
  if (VAR_5[VAR_6] == 0.0)
   continue;

  FUNC_3(FUNC_0(VAR_4, VAR_5[VAR_6]), FUNC_0(VAR_4, VAR_4),
   VAR_0 & ~(VAR_2 | VAR_1), 0, 0);
 }


 FUNC_3(FUNC_0(VAR_4, 0.0), FUNC_0(VAR_4, 0.0), VAR_0, 0, 1);
 FUNC_3(FUNC_0(VAR_4, -0.0), FUNC_0(VAR_4, -0.0), VAR_0, 0, 1);


 FUNC_3(FUNC_0(VAR_3, VAR_4), FUNC_0(VAR_3, VAR_4),
  VAR_0, 0, 0);

 FUNC_3(FUNC_0(-VAR_3, VAR_4), FUNC_0(0.0, 0.0),
  VAR_0, 0, 0);

 FUNC_3(FUNC_0(VAR_4, VAR_4), FUNC_0(VAR_4, VAR_4),
  VAR_0, 0, 0);
}
