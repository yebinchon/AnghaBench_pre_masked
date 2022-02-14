
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;
 int * VAR_8 ;
 int FUNC_6 (int ) ;
 int * VAR_9 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(module_t VAR_10, int VAR_11, void *VAR_12)
{
 int VAR_13 = 0;
 static int VAR_14 = 0;

 switch (VAR_11) {
 case 129:
  if (VAR_14)
   return (0);
  FUNC_4();
  FUNC_3(&VAR_5, "ncl_iod_mutex", ((void*)0), VAR_2);
  FUNC_5();
  FUNC_0();
  FUNC_6(0);
  FUNC_1();
  VAR_3 = VAR_4;
  VAR_8 = VAR_9;
  VAR_14 = 1;
  break;

 case 128:
  if (VAR_7 != 0) {
   VAR_13 = VAR_0;
   break;
  }
 default:
  VAR_13 = VAR_1;
  break;
 }
 return VAR_13;
}
