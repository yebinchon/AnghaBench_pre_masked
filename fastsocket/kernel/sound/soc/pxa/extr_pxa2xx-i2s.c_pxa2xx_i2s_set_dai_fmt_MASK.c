
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {int master; int fmt; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_4,
  unsigned int VAR_5)
{

 switch (VAR_5 & VAR_1) {
 case 129:
  VAR_3.fmt = 0;
  break;
 case 128:
  VAR_3.fmt = VAR_0;
  break;
 }

 switch (VAR_5 & VAR_2) {
 case 130:
  VAR_3.master = 1;
  break;
 case 131:
  VAR_3.master = 0;
  break;
 default:
  break;
 }
 return 0;
}
