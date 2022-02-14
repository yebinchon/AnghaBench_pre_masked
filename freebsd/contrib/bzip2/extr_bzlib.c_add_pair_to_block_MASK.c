
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UChar ;
struct TYPE_3__ {size_t state_in_ch; scalar_t__ state_in_len; size_t nblock; void** block; void** inUse; int blockCRC; } ;
typedef scalar_t__ Int32 ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int ,void*) ;
 void* VAR_0 ;

__attribute__((used)) static
void FUNC_1 ( EState* VAR_1 )
{
   Int32 VAR_2;
   UChar VAR_3 = (UChar)(VAR_1->state_in_ch);
   for (VAR_2 = 0; VAR_2 < VAR_1->state_in_len; VAR_2++) {
      FUNC_0( VAR_1->blockCRC, VAR_3 );
   }
   VAR_1->inUse[VAR_1->state_in_ch] = VAR_0;
   switch (VAR_1->state_in_len) {
      case 1:
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         break;
      case 2:
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         break;
      case 3:
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         break;
      default:
         VAR_1->inUse[VAR_1->state_in_len-4] = VAR_0;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = (UChar)VAR_3; VAR_1->nblock++;
         VAR_1->block[VAR_1->nblock] = ((UChar)(VAR_1->state_in_len-4));
         VAR_1->nblock++;
         break;
   }
}
