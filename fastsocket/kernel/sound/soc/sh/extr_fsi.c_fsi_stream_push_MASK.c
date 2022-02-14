
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct snd_pcm_substream {int dummy; } ;
struct fsi_priv {scalar_t__ periods; scalar_t__ byte_offset; void* period_len; void* buffer_len; struct snd_pcm_substream* substream; } ;



__attribute__((used)) static void FUNC_0(struct fsi_priv *VAR_0,
       struct snd_pcm_substream *VAR_1,
       u32 VAR_2,
       u32 VAR_3)
{
 VAR_0->substream = VAR_1;
 VAR_0->buffer_len = VAR_2;
 VAR_0->period_len = VAR_3;
 VAR_0->byte_offset = 0;
 VAR_0->periods = 0;
}
