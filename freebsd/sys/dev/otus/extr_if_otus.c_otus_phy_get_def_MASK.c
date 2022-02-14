
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct otus_softc {scalar_t__* phy_vals; } ;


 scalar_t__ FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;

uint32_t
FUNC_2(struct otus_softc *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++)
  if (FUNC_0(VAR_0[VAR_3]) == VAR_2)
   return VAR_1->phy_vals[VAR_3];
 return 0;
}
