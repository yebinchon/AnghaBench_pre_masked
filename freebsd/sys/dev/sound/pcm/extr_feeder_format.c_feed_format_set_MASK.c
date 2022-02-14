
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcm_feeder {struct feed_format_info* data; } ;
struct feed_format_info {int channels; int ialign; int ibps; int oalign; int obps; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct pcm_feeder *VAR_3, int VAR_4, int VAR_5)
{
 struct feed_format_info *VAR_6;

 VAR_6 = VAR_3->data;

 switch (VAR_4) {
 case 128:
  if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
   return (VAR_0);
  VAR_6->channels = (uint32_t)VAR_5;
  VAR_6->ialign = VAR_6->ibps * VAR_6->channels;
  VAR_6->oalign = VAR_6->obps * VAR_6->channels;
  break;
 default:
  return (VAR_0);
  break;
 }

 return (0);
}
