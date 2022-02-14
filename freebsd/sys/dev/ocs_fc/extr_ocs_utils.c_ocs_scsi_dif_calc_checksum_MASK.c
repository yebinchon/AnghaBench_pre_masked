
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {size_t* vaddr; int length; } ;
typedef TYPE_1__ ocs_scsi_vaddr_len_t ;



uint16_t
FUNC_0(ocs_scsi_vaddr_len_t VAR_0[], uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint16_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint16_t *VAR_7;

 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_7 = VAR_0[VAR_3].vaddr;
  VAR_6 = VAR_0[VAR_3].length / 2;
  for (VAR_2=0; VAR_2 < VAR_6; VAR_2++) {
   VAR_5 += VAR_7[VAR_2];
  }
 }


 VAR_5 += ((VAR_5 & 0xffff0000) >> 16);


 VAR_5 = ~VAR_5;

 VAR_4 = VAR_5;

 return VAR_4;
}
