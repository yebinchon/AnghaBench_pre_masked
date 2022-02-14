
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {scalar_t__ dma8; scalar_t__ dma16; scalar_t__ force_mode16; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct snd_sb *VAR_3, int VAR_4)
{
 if (VAR_3->dma8 < 0 || VAR_3->dma16 < 0) {
  if (FUNC_0(VAR_4))
   return -VAR_0;
  return 0;
 }
 if (VAR_4 == 0) {
  VAR_3->force_mode16 = 0;
 } else if (VAR_4 == 1) {
  VAR_3->force_mode16 = VAR_2;
 } else if (VAR_4 == 2) {
  VAR_3->force_mode16 = VAR_1;
 } else {
  return -VAR_0;
 }
 return 0;
}
