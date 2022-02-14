
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(module_t VAR_7, int VAR_8, void *VAR_9)
{
 int VAR_10;

 VAR_10 = 0;

 switch (VAR_8) {
 case 131:
 case 129:
  break;

 case 130:
  FUNC_0();

  if (FUNC_3(&VAR_3) == ((void*)0)) {
   VAR_4 = 1;
   FUNC_1();
   FUNC_2(VAR_6,
       VAR_5);
   FUNC_4(((void*)0), 0);
   FUNC_5(&VAR_2);
  } else {
   FUNC_1();
   VAR_10 = VAR_0;
  }
  break;

 case 128:

  if (VAR_4 == 0)
   VAR_10 = VAR_0;
  break;

 default:
  VAR_10 = VAR_1;
  break;
 }

 return (VAR_10);
}
