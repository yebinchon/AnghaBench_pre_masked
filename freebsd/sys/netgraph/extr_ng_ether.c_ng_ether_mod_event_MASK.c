
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ) ;


 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_18, int VAR_19, void *VAR_20)
{
 int VAR_21 = 0;

 switch (VAR_19) {
 case 129:


  if (VAR_5 != ((void*)0)) {
   VAR_21 = VAR_0;
   break;
  }
  VAR_5 = VAR_4;
  VAR_7 = VAR_6;
  VAR_17 = VAR_16;
  VAR_13 = VAR_10;
  VAR_12 = VAR_11;
  VAR_15 = VAR_14;

  VAR_8 =
      FUNC_1(VAR_3,
      VAR_9, ((void*)0), VAR_2);
  break;

 case 128:
  FUNC_0(VAR_3,
      VAR_8);


  VAR_5 = ((void*)0);
  VAR_7 = ((void*)0);
  VAR_17 = ((void*)0);
  VAR_13 = ((void*)0);
  VAR_12 = ((void*)0);
  VAR_15 = ((void*)0);
  break;

 default:
  VAR_21 = VAR_1;
  break;
 }
 return (VAR_21);
}
