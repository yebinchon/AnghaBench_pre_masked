
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_matrix {int dummy; } ;
struct pcm_feeder {struct feed_volume_info* data; } ;
struct feed_volume_info {int volume_class; int state; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcmchan_matrix* FUNC_0 (int) ;
 int FUNC_1 (struct pcm_feeder*,struct pcmchan_matrix*) ;

__attribute__((used)) static int
FUNC_2(struct pcm_feeder *VAR_7, int VAR_8, int VAR_9)
{
 struct feed_volume_info *VAR_10;
 struct pcmchan_matrix *VAR_11;
 int VAR_12;

 VAR_10 = VAR_7->data;
 VAR_12 = 0;

 switch (VAR_8) {
 case 129:
  if (VAR_9 < VAR_5 || VAR_9 > VAR_6)
   return (VAR_0);
  VAR_10->volume_class = VAR_9;
  break;
 case 130:
  if (VAR_9 < VAR_4 || VAR_9 > VAR_3)
   return (VAR_0);
  VAR_11 = FUNC_0(VAR_9);
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  VAR_12 = FUNC_1(VAR_7, VAR_11);
  break;
 case 128:
  if (!(VAR_9 == VAR_2 || VAR_9 == VAR_1))
   return (VAR_0);
  VAR_10->state = VAR_9;
  break;
 default:
  return (VAR_0);
  break;
 }

 return (VAR_12);
}
