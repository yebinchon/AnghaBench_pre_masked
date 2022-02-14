
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101 {int states; } ;
struct snd_pcm_substream {struct ua101* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct ua101 *VAR_6 = VAR_4->private_data;

 switch (VAR_5) {
 case 129:
  if (!FUNC_2(VAR_3, &VAR_6->states))
   return -VAR_2;
  FUNC_1(VAR_0, &VAR_6->states);
  return 0;
 case 128:
  FUNC_0(VAR_0, &VAR_6->states);
  return 0;
 default:
  return -VAR_1;
 }
}
