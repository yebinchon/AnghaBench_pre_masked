
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int NumberOfSamples; size_t* SampleNumber; } ;
struct TYPE_9__ {TYPE_1__ ms; } ;
struct TYPE_10__ {size_t number; TYPE_2__ hdr; } ;
typedef TYPE_3__ wavefront_patch_info ;
struct TYPE_11__ {int* sample_status; } ;
typedef TYPE_4__ snd_wavefront_t ;
typedef int WF_MSAMPLE_BYTES ;


 int FUNC_0 (int,char*,int,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (size_t,unsigned char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_6 (snd_wavefront_t *VAR_8, wavefront_patch_info *VAR_9)
{
 int VAR_10;
 int VAR_11;
 unsigned char *VAR_12;

 VAR_12 = FUNC_2(sizeof(WF_MSAMPLE_BYTES), VAR_2);
 if (! VAR_12)
  return -VAR_1;

 FUNC_3 (VAR_9->number, &VAR_12[0], 2);






 VAR_11 = (1<<(VAR_9->hdr.ms.NumberOfSamples&7));
 VAR_12[2] = (unsigned char) VAR_9->hdr.ms.NumberOfSamples;

 FUNC_0 (VAR_5, "multi %d with %d=%d samples\n",
          VAR_9->number,
          VAR_9->hdr.ms.NumberOfSamples,
          VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_0(VAR_5|VAR_4, "sample[%d] = %d\n",
         VAR_10, VAR_9->hdr.ms.SampleNumber[VAR_10]);
  FUNC_3 (VAR_9->hdr.ms.SampleNumber[VAR_10],
       &VAR_12[3+(VAR_10*2)], 2);
 }






 if (FUNC_5 (VAR_8, VAR_3,
      (unsigned char *) (long) ((VAR_11*2)+3),
      VAR_12)) {
  FUNC_4 ("download of multisample failed.\n");
  FUNC_1(VAR_12);
  return -(VAR_0);
 }

 VAR_8->sample_status[VAR_9->number] = (VAR_6|VAR_7);

 FUNC_1(VAR_12);
 return (0);
}
