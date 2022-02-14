
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int PatchNumber; } ;
struct TYPE_5__ {TYPE_3__ d; } ;
struct TYPE_6__ {int number; TYPE_1__ hdr; } ;
typedef TYPE_2__ wavefront_patch_info ;
typedef TYPE_3__ wavefront_drum ;
typedef int snd_wavefront_t ;


 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char,unsigned char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_4 (snd_wavefront_t *VAR_4, wavefront_patch_info *VAR_5)

{
 unsigned char VAR_6[VAR_3];
 wavefront_drum *VAR_7 = &VAR_5->hdr.d;
 int VAR_8;

 FUNC_0 (VAR_2, "downloading edrum for MIDI "
  "note %d, patch = %d\n",
  VAR_5->number, VAR_7->PatchNumber);

 VAR_6[0] = VAR_5->number & 0x7f;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  FUNC_1 (((unsigned char *)VAR_7)[VAR_8], &VAR_6[1+(VAR_8*2)], 2);
 }

 if (FUNC_3 (VAR_4, VAR_1, ((void*)0), VAR_6)) {
  FUNC_2 ("download drum failed.\n");
  return -(VAR_0);
 }

 return (0);
}
