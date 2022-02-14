
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int register_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;







 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int*) ;
 int* FUNC_12 (int ,int,int*) ;
 int FUNC_13 (int*,int ) ;

int
FUNC_14(pmap_t VAR_9, uint64_t VAR_10, uint64_t VAR_11)
{
 pt_entry_t VAR_12, *VAR_13;
 register_t VAR_14;
 uint64_t VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = VAR_6;

 VAR_15 = FUNC_1(VAR_10);
 switch (VAR_15) {
 case 138:
 case 139:
 case 140:
 case 141:
  break;
 default:
  return (VAR_18);
 }


 switch (VAR_10 & VAR_4) {
 case 137:
 case 136:
 case 135:
  FUNC_3(VAR_9);
  VAR_13 = FUNC_12(VAR_9, VAR_11, &VAR_17);
  if (VAR_13 != ((void*)0)) {
   FUNC_13(VAR_13, VAR_0);
   VAR_18 = VAR_7;




  }
  FUNC_4(VAR_9);
  break;
 case 134:
 case 133:
 case 132:
  if ((VAR_15 != 140 && VAR_15 != 141) ||
      (VAR_10 & VAR_5) == 0)
   return (VAR_18);
  FUNC_3(VAR_9);
  VAR_13 = FUNC_12(VAR_9, VAR_11, &VAR_17);
  if (VAR_13 != ((void*)0) &&
      ((VAR_12 = FUNC_11(VAR_13)) & VAR_3) != 0) {
   if ((VAR_12 & VAR_2) == FUNC_0(VAR_1)) {
    FUNC_8(VAR_13, VAR_2);
    FUNC_9(VAR_9, VAR_11);
   }
   VAR_18 = VAR_7;
  }
  FUNC_4(VAR_9);
  break;
 case 131:
 case 130:
 case 129:
 case 128:




  if (VAR_9 == VAR_8) {





   if (FUNC_10(VAR_11) != 0)
    VAR_18 = VAR_7;
  } else {
   FUNC_3(VAR_9);

   VAR_14 = FUNC_6();
   VAR_16 = FUNC_5(VAR_11);
   FUNC_7(VAR_14);
   FUNC_4(VAR_9);





   if (FUNC_2(VAR_16))
    VAR_18 = VAR_7;
  }
  break;
 }

 return (VAR_18);
}
