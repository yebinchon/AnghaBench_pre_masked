
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sdhci_slot {int quirks; scalar_t__ offset; TYPE_2__* curcmd; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {char* data; int flags; int block_size; scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sdhci_slot*,int ) ;
 int FUNC_2 (struct sdhci_slot*,int ,int*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct sdhci_slot *VAR_3)
{
 uint32_t VAR_4;
 char *VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_3->curcmd->data->data;
 VAR_5 += VAR_3->offset;







  VAR_6 = FUNC_3(512, VAR_3->curcmd->data->len - VAR_3->offset);
 VAR_3->offset += VAR_6;


 if (VAR_3->quirks & VAR_2)
  FUNC_0(10);

 if ((intptr_t)VAR_5 & 3) {
  while (VAR_6 > 3) {
   VAR_4 = FUNC_1(VAR_3, VAR_1);
   VAR_5[0] = VAR_4;
   VAR_5[1] = (VAR_4 >> 8);
   VAR_5[2] = (VAR_4 >> 16);
   VAR_5[3] = (VAR_4 >> 24);
   VAR_5 += 4;
   VAR_6 -= 4;
  }
 } else {
  FUNC_2(VAR_3, VAR_1,
      (uint32_t *)VAR_5, VAR_6 >> 2);
  VAR_6 &= 3;
 }

 if (VAR_6 > 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  while (VAR_6 > 0) {
   *(VAR_5++) = VAR_4;
   VAR_4 >>= 8;
   VAR_6--;
  }
 }
}
