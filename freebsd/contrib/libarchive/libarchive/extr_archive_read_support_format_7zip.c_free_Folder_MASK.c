
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _7z_folder {unsigned int numCoders; TYPE_1__* unPackSize; TYPE_1__* packedStreams; TYPE_1__* bindPairs; TYPE_1__* coders; } ;
struct TYPE_2__ {struct TYPE_2__* properties; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct _7z_folder *VAR_0)
{
 unsigned VAR_1;

 if (VAR_0->coders) {
  for (VAR_1 = 0; VAR_1< VAR_0->numCoders; VAR_1++) {
   FUNC_0(VAR_0->coders[VAR_1].properties);
  }
  FUNC_0(VAR_0->coders);
 }
 FUNC_0(VAR_0->bindPairs);
 FUNC_0(VAR_0->packedStreams);
 FUNC_0(VAR_0->unPackSize);
}
