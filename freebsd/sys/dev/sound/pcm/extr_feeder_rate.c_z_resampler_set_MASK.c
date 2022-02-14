
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_info {void* rsrc; void* rdst; void* quality; void* channels; } ;
struct pcm_feeder {struct z_info* data; } ;
typedef void* int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;




 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct pcm_feeder*) ;

__attribute__((used)) static int
FUNC_1(struct pcm_feeder *VAR_8, int VAR_9, int32_t VAR_10)
{
 struct z_info *VAR_11;
 int32_t VAR_12;

 VAR_11 = VAR_8->data;

 switch (VAR_9) {
 case 128:
  if (VAR_10 < VAR_7 || VAR_10 > VAR_6)
   return (VAR_0);
  if (VAR_10 == VAR_11->rsrc)
   return (0);
  VAR_11->rsrc = VAR_10;
  break;
 case 130:
  if (VAR_10 < VAR_7 || VAR_10 > VAR_6)
   return (VAR_0);
  if (VAR_10 == VAR_11->rdst)
   return (0);
  VAR_11->rdst = VAR_10;
  break;
 case 129:
  if (VAR_10 < VAR_5 || VAR_10 > VAR_4)
   return (VAR_1);
  if (VAR_10 == VAR_11->quality)
   return (0);






  VAR_12 = VAR_11->quality;
  VAR_11->quality = VAR_10;
  if (FUNC_0(VAR_8) == 0)
   return (0);
  VAR_11->quality = VAR_12;
  break;
 case 131:
  if (VAR_10 < VAR_3 || VAR_10 > VAR_2)
   return (VAR_1);
  if (VAR_10 == VAR_11->channels)
   return (0);
  VAR_11->channels = VAR_10;
  break;
 default:
  return (VAR_1);
  break;
 }

 return (FUNC_0(VAR_8));
}
