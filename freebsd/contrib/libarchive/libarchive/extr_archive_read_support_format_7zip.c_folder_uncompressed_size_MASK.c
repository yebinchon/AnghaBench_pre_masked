
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct _7z_folder {scalar_t__* unPackSize; TYPE_1__* bindPairs; int numBindPairs; scalar_t__ numOutStreams; } ;
struct TYPE_2__ {scalar_t__ outIndex; } ;



__attribute__((used)) static uint64_t
FUNC_0(struct _7z_folder *VAR_0)
{
 int VAR_1 = (int)VAR_0->numOutStreams;
 unsigned VAR_2 = (unsigned)VAR_0->numBindPairs;

 while (--VAR_1 >= 0) {
  unsigned VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   if (VAR_0->bindPairs[VAR_3].outIndex == (uint64_t)VAR_1)
    break;
  }
  if (VAR_3 >= VAR_2)
   return (VAR_0->unPackSize[VAR_1]);
 }
 return (0);
}
