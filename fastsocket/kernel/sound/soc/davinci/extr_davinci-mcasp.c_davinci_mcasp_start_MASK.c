
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_audio_dev {scalar_t__ base; scalar_t__ rxnumevt; scalar_t__ txnumevt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct davinci_audio_dev*) ;
 int FUNC_2 (struct davinci_audio_dev*) ;

__attribute__((used)) static void FUNC_3(struct davinci_audio_dev *VAR_4, int VAR_5)
{
 if (VAR_5 == VAR_3) {
  if (VAR_4->txnumevt)
   FUNC_0(VAR_4->base + VAR_1,
        VAR_2);
  FUNC_2(VAR_4);
 } else {
  if (VAR_4->rxnumevt)
   FUNC_0(VAR_4->base + VAR_0,
        VAR_2);
  FUNC_1(VAR_4);
 }
}
