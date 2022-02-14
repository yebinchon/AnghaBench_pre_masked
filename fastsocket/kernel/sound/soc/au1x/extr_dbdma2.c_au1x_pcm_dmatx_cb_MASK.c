
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_dmadata {scalar_t__ curr_period; scalar_t__ periods; int substream; scalar_t__ pos; scalar_t__ period_bytes; } ;


 int FUNC_0 (struct au1xpsc_audio_dmadata*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(int VAR_0, void *VAR_1)
{
 struct au1xpsc_audio_dmadata *VAR_2 = VAR_1;

 VAR_2->pos += VAR_2->period_bytes;
 if (++VAR_2->curr_period >= VAR_2->periods) {
  VAR_2->pos = 0;
  VAR_2->curr_period = 0;
 }
 FUNC_1(VAR_2->substream);
 FUNC_0(VAR_2);
}
