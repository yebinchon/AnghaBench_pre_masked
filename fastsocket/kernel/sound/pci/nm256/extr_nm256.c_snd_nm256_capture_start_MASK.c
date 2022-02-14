
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct nm256_stream {scalar_t__ buf; scalar_t__ dma_size; } ;
struct nm256 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nm256*,struct nm256_stream*) ;
 int FUNC_1 (struct nm256*,int ,int) ;
 int FUNC_2 (struct nm256*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nm256 *VAR_6, struct nm256_stream *VAR_7,
   struct snd_pcm_substream *VAR_8)
{

 FUNC_2(VAR_6, VAR_2, VAR_7->buf);
 FUNC_2(VAR_6, VAR_1, VAR_7->buf + VAR_7->dma_size);
 FUNC_2(VAR_6, VAR_0, VAR_7->buf);
 FUNC_0(VAR_6, VAR_7);


 FUNC_1(VAR_6, VAR_4,
    VAR_3 | VAR_5);
}
