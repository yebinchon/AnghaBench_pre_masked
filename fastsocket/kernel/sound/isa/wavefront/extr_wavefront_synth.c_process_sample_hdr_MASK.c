
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SampleResolution; int Loop; int Bidirectional; int Reverse; int FrequencyBias; int sampleEndOffset; int loopEndOffset; int loopStartOffset; int sampleStartOffset; } ;
typedef TYPE_1__ wavefront_sample ;
typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2 (u8 *VAR_0)

{
 wavefront_sample VAR_1;
 u8 *VAR_2;

 VAR_2 = VAR_0;
 *((u32 *) &VAR_1.sampleStartOffset) = FUNC_0 (VAR_2, 4); VAR_2 += 4;
 *((u32 *) &VAR_1.loopStartOffset) = FUNC_0 (VAR_2, 4); VAR_2 += 4;
 *((u32 *) &VAR_1.loopEndOffset) = FUNC_0 (VAR_2, 4); VAR_2 += 4;
 *((u32 *) &VAR_1.sampleEndOffset) = FUNC_0 (VAR_2, 4); VAR_2 += 4;
 *((u32 *) &VAR_1.FrequencyBias) = FUNC_0 (VAR_2, 3); VAR_2 += 3;

 VAR_1.SampleResolution = *VAR_2 & 0x3;
 VAR_1.Loop = *VAR_2 & 0x8;
 VAR_1.Bidirectional = *VAR_2 & 0x10;
 VAR_1.Reverse = *VAR_2 & 0x40;



 FUNC_1 (VAR_0, (unsigned char *) &VAR_1, sizeof (wavefront_sample));
}
