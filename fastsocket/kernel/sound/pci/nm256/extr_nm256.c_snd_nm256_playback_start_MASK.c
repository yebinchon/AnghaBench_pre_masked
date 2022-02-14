
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct nm256_stream {int shift; scalar_t__ buf; scalar_t__ dma_size; } ;
struct nm256 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nm256*,struct nm256_stream*) ;
 int FUNC_1 (struct nm256*,int ,int) ;
 int FUNC_2 (struct nm256*,int ,scalar_t__) ;
 int FUNC_3 (struct nm256*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nm256 *VAR_7, struct nm256_stream *VAR_8,
    struct snd_pcm_substream *VAR_9)
{

 FUNC_2(VAR_7, VAR_3, VAR_8->buf);
 FUNC_2(VAR_7, VAR_2, VAR_8->buf + VAR_8->dma_size - (1 << VAR_8->shift));
 FUNC_2(VAR_7, VAR_1, VAR_8->buf);
 FUNC_0(VAR_7, VAR_8);


 FUNC_1(VAR_7, VAR_5,
    VAR_4 | VAR_6);

 FUNC_3(VAR_7, VAR_0, 0x0);
}
