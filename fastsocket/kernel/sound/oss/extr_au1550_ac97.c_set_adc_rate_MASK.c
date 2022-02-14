
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct dmabuf {int src_factor; int sample_rate; int num_channels; } ;
struct au1550_state {int codec; scalar_t__ no_vra; struct dmabuf dma_dac; struct dmabuf dma_adc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct au1550_state *VAR_6, unsigned VAR_7)
{
 struct dmabuf *VAR_8 = &VAR_6->dma_adc;
 struct dmabuf *VAR_9 = &VAR_6->dma_dac;
 unsigned VAR_10, VAR_11;
 u16 VAR_12;

 if (VAR_6->no_vra) {


  VAR_8->src_factor = ((96000 / VAR_7) + 1) >> 1;
  VAR_8->sample_rate = 48000 / VAR_8->src_factor;
  return;
 }

 VAR_8->src_factor = 1;

 VAR_12 = FUNC_1(VAR_6->codec, VAR_0);

 VAR_7 = VAR_7 > 48000 ? 48000 : VAR_7;



 FUNC_2(VAR_6->codec, VAR_0,
  VAR_12 | VAR_1);



 FUNC_2(VAR_6->codec, VAR_4, (u16) VAR_7);



 VAR_10 = FUNC_1(VAR_6->codec, VAR_4);

 FUNC_0("set_adc_rate: set to %d Hz\n", VAR_10);




 VAR_11 = FUNC_1(VAR_6->codec, VAR_2);
 if (VAR_9->num_channels > 2)
  FUNC_2(VAR_6->codec, VAR_5, VAR_11);
 if (VAR_9->num_channels > 4)
  FUNC_2(VAR_6->codec, VAR_3, VAR_11);

 VAR_8->sample_rate = VAR_10;
 VAR_9->sample_rate = VAR_11;
}
