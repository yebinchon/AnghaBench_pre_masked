
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atkbdc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int * FUNC_0 (int,int ,int) ;
 int FUNC_1 (int **) ;

atkbdc_softc_t
*FUNC_2(int VAR_4)
{
 atkbdc_softc_t *VAR_5;

 if (VAR_4 >= FUNC_1(VAR_3))
  return ((void*)0);
 VAR_5 = VAR_3[VAR_4];
 if (VAR_5 == ((void*)0)) {
  VAR_5 = VAR_3[VAR_4]
     = FUNC_0(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
  if (VAR_5 == ((void*)0))
   return ((void*)0);
 }
 return VAR_5;
}
