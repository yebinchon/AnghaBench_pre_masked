
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101_stream {unsigned int buffer_pos; } ;
struct ua101 {int lock; } ;
typedef unsigned int snd_pcm_uframes_t ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline snd_pcm_uframes_t FUNC_2(struct ua101 *VAR_0,
        struct ua101_stream *VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_1->buffer_pos;
 FUNC_1(&VAR_0->lock, VAR_2);
 return VAR_3;
}
