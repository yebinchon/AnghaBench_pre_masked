
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct fm801 {int cap_ctrl; int cap_pos; int cap_count; size_t cap_size; int reg_lock; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm801*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 struct fm801* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_6(struct snd_pcm_substream *VAR_4)
{
 struct fm801 *VAR_5 = FUNC_3(VAR_4);
 size_t VAR_6;

 if (!(VAR_5->cap_ctrl & VAR_2))
  return 0;
 FUNC_4(&VAR_5->reg_lock);
 VAR_6 = VAR_5->cap_pos + (VAR_5->cap_count - 1) - FUNC_2(FUNC_0(VAR_5, VAR_0));
 if (FUNC_2(FUNC_0(VAR_5, VAR_3)) & VAR_1) {
  VAR_6 += VAR_5->cap_count;
  VAR_6 %= VAR_5->cap_size;
 }
 FUNC_5(&VAR_5->reg_lock);
 return FUNC_1(VAR_4->runtime, VAR_6);
}
