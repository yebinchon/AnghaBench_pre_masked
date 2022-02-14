
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int OriginalSample; unsigned int FrequencyBias; int sampleEndOffset; int loopEndOffset; int loopStartOffset; int sampleStartOffset; } ;
struct TYPE_9__ {TYPE_1__ a; } ;
struct TYPE_10__ {unsigned int number; TYPE_2__ hdr; } ;
typedef TYPE_3__ wavefront_patch_info ;
struct TYPE_11__ {int* sample_status; } ;
typedef TYPE_4__ snd_wavefront_t ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int,unsigned char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_4 (snd_wavefront_t *VAR_6, wavefront_patch_info *VAR_7)

{
 unsigned char VAR_8[VAR_2];

 FUNC_0 (VAR_3, "download alias, %d is "
          "alias for %d\n",
          VAR_7->number,
          VAR_7->hdr.a.OriginalSample);

 FUNC_1 (VAR_7->number, &VAR_8[0], 2);
 FUNC_1 (VAR_7->hdr.a.OriginalSample, &VAR_8[2], 2);
 FUNC_1 (*((unsigned int *)&VAR_7->hdr.a.sampleStartOffset),
       &VAR_8[4], 4);
 FUNC_1 (*((unsigned int *)&VAR_7->hdr.a.loopStartOffset),
       &VAR_8[8], 4);
 FUNC_1 (*((unsigned int *)&VAR_7->hdr.a.loopEndOffset),
       &VAR_8[12], 4);
 FUNC_1 (*((unsigned int *)&VAR_7->hdr.a.sampleEndOffset),
       &VAR_8[16], 4);
 FUNC_1 (VAR_7->hdr.a.FrequencyBias, &VAR_8[20], 3);
 FUNC_1 (*(&VAR_7->hdr.a.FrequencyBias+1), &VAR_8[23], 2);

 if (FUNC_3 (VAR_6, VAR_1, ((void*)0), VAR_8)) {
  FUNC_2 ("download alias failed.\n");
  return -(VAR_0);
 }

 VAR_6->sample_status[VAR_7->number] = (VAR_4|VAR_5);

 return (0);
}
