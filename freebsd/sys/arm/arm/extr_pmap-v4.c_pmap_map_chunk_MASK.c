
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pt_entry_t ;
typedef scalar_t__ pd_entry_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;


 int FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 size_t FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int,int) ;

vm_size_t
FUNC_13(vm_offset_t VAR_18, vm_offset_t VAR_19, vm_offset_t VAR_20,
    vm_size_t VAR_21, int VAR_22, int VAR_23)
{
 pd_entry_t *VAR_24 = (pd_entry_t *) VAR_18;
 pt_entry_t *VAR_25, VAR_26, VAR_27, VAR_28;
 vm_size_t VAR_29;
 int VAR_30;

 VAR_29 = FUNC_12(VAR_21, VAR_9);

 if (VAR_18 == 0)
  FUNC_10("pmap_map_chunk: no L1 table provided");






 switch (VAR_23) {
 case 129:
 default:
  VAR_26 = 0;
  VAR_28 = 0;
  VAR_27 = 0;
  break;

 case 130:
  VAR_26 = VAR_12;
  VAR_28 = VAR_14;
  VAR_27 = VAR_16;
  break;

 case 128:
  VAR_26 = VAR_13;
  VAR_28 = VAR_15;
  VAR_27 = VAR_17;
  break;
 }

 VAR_21 = VAR_29;

 while (VAR_29 > 0) {

  if (FUNC_2(VAR_19, VAR_20, VAR_29)) {



   VAR_24[VAR_19 >> VAR_2] = VAR_1 | VAR_20 |
       FUNC_3(VAR_11, VAR_22) | VAR_26 |
       FUNC_1(VAR_10);
   FUNC_7(&VAR_24[VAR_19 >> VAR_2]);
   VAR_19 += VAR_3;
   VAR_20 += VAR_3;
   VAR_29 -= VAR_3;
   continue;
  }






  if ((VAR_24[VAR_19 >> VAR_2] & VAR_5) != VAR_4)
   FUNC_10("pmap_map_chunk: no L2 table for VA 0x%08x", VAR_19);

  VAR_25 = (pt_entry_t *) FUNC_8(
      VAR_24[FUNC_0(VAR_19)] & VAR_0);
  if (VAR_25 == ((void*)0))
   FUNC_10("pmap_map_chunk: can't find L2 table for VA"
       "0x%08x", VAR_19);

  if (FUNC_4(VAR_19, VAR_20, VAR_29)) {



   for (VAR_30 = 0; VAR_30 < 16; VAR_30++) {
    VAR_25[FUNC_9(VAR_19) + VAR_30] =
        VAR_6 | VAR_20 |
        FUNC_5(VAR_11, VAR_22) | VAR_28;
    FUNC_7(&VAR_25[FUNC_9(VAR_19) + VAR_30]);
   }
   VAR_19 += VAR_7;
   VAR_20 += VAR_7;
   VAR_29 -= VAR_7;
   continue;
  }





  VAR_25[FUNC_9(VAR_19)] =
      VAR_8 | VAR_20 | FUNC_6(VAR_11, VAR_22) | VAR_27;
  FUNC_7(&VAR_25[FUNC_9(VAR_19)]);
  VAR_19 += VAR_9;
  VAR_20 += VAR_9;
  VAR_29 -= VAR_9;
 }



 return (VAR_21);

}
