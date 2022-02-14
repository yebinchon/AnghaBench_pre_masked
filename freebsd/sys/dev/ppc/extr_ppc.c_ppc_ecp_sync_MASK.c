
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_avm; int ppc_dtm; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 struct ppc_data* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ppc_data*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ppc_data*) ;

int
FUNC_5(device_t VAR_2)
{
 int VAR_3, VAR_4;
 struct ppc_data *VAR_5 = FUNC_1(VAR_2);

 FUNC_2(VAR_5);
 if (!(VAR_5->ppc_avm & VAR_0) && !(VAR_5->ppc_dtm & VAR_0))
  return 0;

 VAR_4 = FUNC_4(VAR_5);
 if ((VAR_4 & 0xe0) != VAR_1)
  return 0;

 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  VAR_4 = FUNC_4(VAR_5);
  if (VAR_4 & 0x1)
   return 0;
  FUNC_0(100);
 }

 FUNC_3(VAR_2, "ECP sync failed as data still present in FIFO.\n");

 return 0;
}
