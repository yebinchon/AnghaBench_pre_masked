
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_mixer_node {scalar_t__ type; int minval; int maxval; int mul; } ;
typedef int int32_t ;


 int FUNC_0 (int,char*,scalar_t__,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct uaudio_mixer_node *VAR_2, int32_t VAR_3)
{
 if (VAR_2->type == VAR_0) {
  VAR_3 = (VAR_3 != 0);
 } else if (VAR_2->type == VAR_1) {
  if ((VAR_3 < VAR_2->minval) ||
      (VAR_3 > VAR_2->maxval)) {
   VAR_3 = VAR_2->minval;
  }
 } else {


  VAR_3 = (VAR_3 * VAR_2->mul) / 255;


  VAR_3 = VAR_3 + VAR_2->minval;


  if (VAR_3 > VAR_2->maxval)
   VAR_3 = VAR_2->maxval;
  else if (VAR_3 < VAR_2->minval)
   VAR_3 = VAR_2->minval;
 }

 FUNC_0(6, "type=0x%03x val=%d min=%d max=%d val=%d\n",
     VAR_2->type, VAR_3, VAR_2->minval, VAR_2->maxval, VAR_3);
 return (VAR_3);
}
