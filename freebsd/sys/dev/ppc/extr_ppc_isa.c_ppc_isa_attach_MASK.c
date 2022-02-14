
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_avm; scalar_t__ ppc_dmachan; int ppc_dmadone; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ppc_data* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

int
FUNC_4(device_t VAR_2)
{
 struct ppc_data *VAR_3 = FUNC_0(VAR_2);

 if ((VAR_3->ppc_avm & VAR_0) && (VAR_3->ppc_dmachan > 0)) {

  FUNC_1(VAR_3->ppc_dmachan);
  FUNC_2(VAR_3->ppc_dmachan, 1024);
  VAR_3->ppc_dmadone = VAR_1;
 }

 return (FUNC_3(VAR_2));
}
