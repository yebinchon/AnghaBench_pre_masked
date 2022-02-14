
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {int* image; int c_periods_sent; int capture_substream; int c_dma; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_cs4231 *VAR_2)
{
 if (VAR_2->image[VAR_0] & VAR_1) {
  FUNC_1(VAR_2->capture_substream);
  FUNC_0(&VAR_2->c_dma, VAR_2->capture_substream,
         &VAR_2->c_periods_sent);
 }
}
