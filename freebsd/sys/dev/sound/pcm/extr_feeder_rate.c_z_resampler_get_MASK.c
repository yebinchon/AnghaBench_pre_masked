
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_info {int rsrc; int rdst; int quality; int channels; } ;
struct pcm_feeder {struct z_info* data; } ;







__attribute__((used)) static int
FUNC_0(struct pcm_feeder *VAR_0, int VAR_1)
{
 struct z_info *VAR_2;

 VAR_2 = VAR_0->data;

 switch (VAR_1) {
 case 128:
  return (VAR_2->rsrc);
  break;
 case 130:
  return (VAR_2->rdst);
  break;
 case 129:
  return (VAR_2->quality);
  break;
 case 131:
  return (VAR_2->channels);
  break;
 default:
  break;
 }

 return (-1);
}
