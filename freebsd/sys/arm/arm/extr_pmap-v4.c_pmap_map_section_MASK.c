
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef size_t pd_entry_t ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_2 (int ,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_3 (size_t*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;

void
FUNC_4(vm_offset_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9,
    int VAR_10, int VAR_11)
{
 pd_entry_t *VAR_12 = (pd_entry_t *) VAR_7;
 pd_entry_t VAR_13;

 FUNC_0(((VAR_8 | VAR_9) & VAR_0) == 0, ("ouin2"));

 switch (VAR_11) {
 case 129:
 default:
  VAR_13 = 0;
  break;

 case 130:
  VAR_13 = VAR_5;
  break;

 case 128:
  VAR_13 = VAR_6;
  break;
 }

 VAR_12[VAR_8 >> VAR_2] = VAR_1 | VAR_9 |
     FUNC_2(VAR_4, VAR_10) | VAR_13 | FUNC_1(VAR_3);
 FUNC_3(&VAR_12[VAR_8 >> VAR_2]);

}
