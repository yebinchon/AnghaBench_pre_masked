
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int ,int *,int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9 (module_t VAR_9, int VAR_10, void *VAR_11)
{
 static int VAR_12 = 0;

 switch (VAR_10) {
 case 130:




  ++VAR_12;

  FUNC_1 (&VAR_6, 1);
  FUNC_2 (&VAR_6, VAR_5*5, VAR_4, 0);

  FUNC_7(&VAR_7, "cx", VAR_3, ((void*)0), VAR_1,
      VAR_0, &VAR_2);
  break;
 case 128:
  if (VAR_12 == 1) {
   FUNC_6 ("Removing device entry for Sigma\n");



  }

  if (!FUNC_0 (&VAR_6))
   FUNC_3 (&VAR_6);
  FUNC_8 (VAR_2);
  --VAR_12;
  break;
 case 129:
  break;
 }
 return 0;
}
