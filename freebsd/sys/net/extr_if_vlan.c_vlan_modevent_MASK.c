
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *,int ) ;


 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;

__attribute__((used)) static int
FUNC_7(module_t VAR_33, int VAR_34, void *VAR_35)
{

 switch (VAR_34) {
 case 129:
  VAR_4 = FUNC_1(VAR_7,
      VAR_16, ((void*)0), VAR_2);
  if (VAR_4 == ((void*)0))
   return (VAR_0);
  VAR_6 = FUNC_1(VAR_5,
      VAR_17, ((void*)0), VAR_2);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  FUNC_3();
  VAR_19 = VAR_18;
  VAR_21 = VAR_20;
  VAR_28 = VAR_29;
  VAR_31 = VAR_30;
  VAR_13 = VAR_12;
  VAR_25 = VAR_24;
  VAR_27 = VAR_26;
  VAR_23 = VAR_22;
  VAR_15 = VAR_14;

  VAR_11 = FUNC_4(VAR_32, 0, VAR_10,
      VAR_8, VAR_9);

  if (VAR_3)
   FUNC_6("vlan: initialized, using "



          "hash tables with chaining"


          "\n");
  break;
 case 128:

  FUNC_5(VAR_11);

  FUNC_0(VAR_7, VAR_4);
  FUNC_0(VAR_5, VAR_6);
  VAR_19 = ((void*)0);
  VAR_21 = ((void*)0);
  VAR_28 = ((void*)0);
  VAR_31 = ((void*)0);
  VAR_27 = ((void*)0);
  VAR_13 = ((void*)0);
  VAR_25 = ((void*)0);
  VAR_15 = ((void*)0);
  FUNC_2();
  if (VAR_3)
   FUNC_6("vlan: unloaded\n");
  break;
 default:
  return (VAR_1);
 }
 return (0);
}
