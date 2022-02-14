
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char NumberOfSamples; unsigned char* SampleNumber; } ;
struct TYPE_6__ {TYPE_1__ ms; } ;
struct TYPE_7__ {int number; TYPE_2__ hdr; } ;
typedef TYPE_3__ wavefront_patch_info ;
typedef int snd_wavefront_t ;


 int FUNC_0 (int ,char*,int,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,unsigned char*,unsigned char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6 (snd_wavefront_t *VAR_3,
        wavefront_patch_info *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[1];
 unsigned char VAR_7[2];
 int VAR_8;

 FUNC_2 (VAR_4->number, VAR_7, 2);

 if (FUNC_4 (VAR_3, VAR_1, VAR_6, VAR_7)) {
  FUNC_3 ("upload multisample failed.\n");
  return -(VAR_0);
 }

 FUNC_0 (VAR_2, "msample %d has %d samples\n",
    VAR_4->number, VAR_6[0]);

 VAR_4->hdr.ms.NumberOfSamples = VAR_6[0];



 VAR_8 = (1 << VAR_6[0]);

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  char VAR_9[2];
  int VAR_10;

  if ((VAR_10 = FUNC_5 (VAR_3)) == -1) {
   FUNC_3 ("upload multisample failed "
        "during sample loop.\n");
   return -(VAR_0);
  }
  VAR_9[0] = VAR_10;

  if ((VAR_10 = FUNC_5 (VAR_3)) == -1) {
   FUNC_3 ("upload multisample failed "
        "during sample loop.\n");
   return -(VAR_0);
  }
  VAR_9[1] = VAR_10;

  VAR_4->hdr.ms.SampleNumber[VAR_5] =
   FUNC_1 ((unsigned char *) VAR_9, 2);

  FUNC_0 (VAR_2, "msample sample[%d] = %d\n",
     VAR_5, VAR_4->hdr.ms.SampleNumber[VAR_5]);
 }

 return (0);
}
