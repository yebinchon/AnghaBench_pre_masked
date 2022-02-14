
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_atc_pcm {int substream; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ct_atc_pcm *VAR_0)
{
 struct ct_atc_pcm *VAR_1 = VAR_0;

 if (!VAR_1->substream)
  return;

 FUNC_0(VAR_1->substream);
}
