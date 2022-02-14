
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtdmap {int gsr; int gcr; int rta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtdmap*) ;
 int FUNC_1 (struct vtdmap*) ;
 int FUNC_2 (struct vtdmap*) ;
 int FUNC_3 (struct vtdmap*) ;
 struct vtdmap** VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_5;
 struct vtdmap *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_4[VAR_5];
  FUNC_3(VAR_6);


  VAR_6->rta = FUNC_4(VAR_3);
  VAR_6->gcr = VAR_0;
  while ((VAR_6->gsr & VAR_1) == 0)
   ;

  FUNC_0(VAR_6);
  FUNC_1(VAR_6);

  FUNC_2(VAR_6);
 }
}
