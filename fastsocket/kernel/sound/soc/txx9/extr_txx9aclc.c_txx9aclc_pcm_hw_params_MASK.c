
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_dmadata {scalar_t__ pos; struct snd_pcm_substream* substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {int dev; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int min_align; int dma_bytes; scalar_t__ dma_addr; scalar_t__ dma_area; struct txx9aclc_dmadata* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned long,unsigned long,int ,...) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct snd_soc_pcm_runtime* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = FUNC_5(VAR_0);
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 struct txx9aclc_dmadata *VAR_5 = VAR_4->private_data;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_0, FUNC_1(VAR_1));
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_3->dev,
  "runtime->dma_area = %#lx dma_addr = %#lx dma_bytes = %zd "
  "runtime->min_align %ld\n",
  (unsigned long)VAR_4->dma_area,
  (unsigned long)VAR_4->dma_addr, VAR_4->dma_bytes,
  VAR_4->min_align);
 FUNC_0(VAR_3->dev,
  "periods %d period_bytes %d stream %d\n",
  FUNC_3(VAR_1), FUNC_2(VAR_1),
  VAR_0->stream);

 VAR_5->substream = VAR_0;
 VAR_5->pos = 0;
 return 0;
}
