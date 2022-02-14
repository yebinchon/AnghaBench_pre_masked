
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dmabuf {int src_factor; int sample_rate; int num_channels; } ;
struct au1550_state {int codec; scalar_t__ no_vra; struct dmabuf dma_adc; struct dmabuf dma_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct au1550_state *VAR_6, unsigned VAR_7)
{
 struct dmabuf *VAR_8 = &VAR_6->dma_dac;
 struct dmabuf *VAR_9 = &VAR_6->dma_adc;
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



 FUNC_2(VAR_6->codec, VAR_2, (u16) VAR_7);




 if (VAR_8->num_channels > 2)
  FUNC_2(VAR_6->codec, VAR_5, (u16) VAR_7);
 if (VAR_8->num_channels > 4)
  FUNC_2(VAR_6->codec, VAR_3, (u16) VAR_7);


 VAR_11 = FUNC_1(VAR_6->codec, VAR_2);

 FUNC_0("set_dac_rate: set to %d Hz\n", VAR_11);




 VAR_10 = FUNC_1(VAR_6->codec, VAR_4);

 VAR_8->sample_rate = VAR_11;
 VAR_9->sample_rate = VAR_10;
}
