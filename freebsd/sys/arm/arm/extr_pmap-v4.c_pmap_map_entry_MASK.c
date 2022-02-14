
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef size_t pt_entry_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (int ,int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;

 int VAR_6 ;


 int FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (int) ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (char*,size_t) ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void
FUNC_7(vm_offset_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11, int VAR_12,
    int VAR_13)
{
 pd_entry_t *VAR_14 = (pd_entry_t *) VAR_9;
 pt_entry_t VAR_15;
 pt_entry_t *VAR_16;

 FUNC_0(((VAR_10 | VAR_11) & VAR_5) == 0, ("ouin"));

 switch (VAR_13) {
 case 129:
 default:
  VAR_15 = 0;
  break;

 case 130:
  VAR_15 = VAR_7;
  break;

 case 128:
  VAR_15 = VAR_8;
  break;
 }

 if ((VAR_14[VAR_10 >> VAR_1] & VAR_3) != VAR_2)
  FUNC_6("pmap_map_entry: no L2 table for VA 0x%08x", VAR_10);

 VAR_16 = (pt_entry_t *) FUNC_4(VAR_14[FUNC_1(VAR_10)] & VAR_0);

 if (VAR_16 == ((void*)0))
  FUNC_6("pmap_map_entry: can't find L2 table for VA 0x%08x", VAR_10);

 VAR_16[FUNC_5(VAR_10)] =
     VAR_4 | VAR_11 | FUNC_2(VAR_6, VAR_12) | VAR_15;
 FUNC_3(&VAR_16[FUNC_5(VAR_10)]);
}
