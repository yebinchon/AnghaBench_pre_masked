
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ p ;


 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void *VAR_3)
{
 unsigned int VAR_4, VAR_5;


 VAR_4 = FUNC_1((vm_offset_t)(VAR_3) -
     (vm_offset_t)VAR_2);


 FUNC_3(&VAR_0);

 FUNC_0(VAR_1[VAR_4] > 0,
     ("XX_FreeSmart: Double or mid-block free!\n"));


 VAR_5 = VAR_1[VAR_4];
 FUNC_2(VAR_4, VAR_5);


 FUNC_4(&VAR_0);
}
