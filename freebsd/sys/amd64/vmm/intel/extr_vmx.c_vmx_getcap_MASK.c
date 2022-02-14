
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx {TYPE_1__* cap; } ;
struct TYPE_2__ {int set; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(void *VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
 struct vmx *VAR_10 = VAR_6;
 int VAR_11;
 int VAR_12;

 VAR_12 = VAR_0;

 VAR_11 = VAR_10->cap[VAR_7].set;

 switch (VAR_8) {
 case 131:
  if (VAR_1)
   VAR_12 = 0;
  break;
 case 129:
  if (VAR_4)
   VAR_12 = 0;
  break;
 case 130:
  if (VAR_3)
   VAR_12 = 0;
  break;
 case 128:
  if (VAR_5)
   VAR_12 = 0;
  break;
 case 132:
  if (VAR_2)
   VAR_12 = 0;
  break;
 default:
  break;
 }

 if (VAR_12 == 0)
  *VAR_9 = (VAR_11 & (1 << VAR_8)) ? 1 : 0;

 return (VAR_12);
}
