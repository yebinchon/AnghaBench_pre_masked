
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sdhci_slot {scalar_t__ offset; TYPE_2__* curcmd; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {char* data; int flags; int block_size; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_slot*,int ,int) ;
 int FUNC_1 (struct sdhci_slot*,int ,int*,size_t) ;
 size_t FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct sdhci_slot *VAR_2)
{
 uint32_t VAR_3 = 0;
 char *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_2->curcmd->data->data;
 VAR_4 += VAR_2->offset;







  VAR_5 = FUNC_2(512, VAR_2->curcmd->data->len - VAR_2->offset);
 VAR_2->offset += VAR_5;


 if ((intptr_t)VAR_4 & 3) {
  while (VAR_5 > 3) {
   VAR_3 = VAR_4[0] +
       (VAR_4[1] << 8) +
       (VAR_4[2] << 16) +
       (VAR_4[3] << 24);
   VAR_5 -= 4;
   VAR_4 += 4;
   FUNC_0(VAR_2, VAR_1, VAR_3);
  }
 } else {
  FUNC_1(VAR_2, VAR_1,
      (uint32_t *)VAR_4, VAR_5 >> 2);
  VAR_5 &= 3;
 }

 if (VAR_5 > 0) {
  while (VAR_5 > 0) {
   VAR_3 <<= 8;
   VAR_3 += *(VAR_4++);
   VAR_5--;
  }
  FUNC_0(VAR_2, VAR_1, VAR_3);
 }
}
