
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7 (module_t VAR_4, int VAR_5, void *VAR_6)
{
 static int VAR_7 = 0;

 switch (VAR_5) {
 case 130:




  ++VAR_7;
  FUNC_1 (&VAR_2, 1);
  FUNC_2 (&VAR_2, VAR_1*5, VAR_0, 0);
  break;
 case 128:
  if (VAR_7 == 1) {
   FUNC_6 ("Removing device entry for Tau-ISA\n");



  }

  if (!FUNC_0 (&VAR_2))
   FUNC_3 (&VAR_2);
  --VAR_7;
  break;
 case 129:
  break;
 }
 return 0;
}
