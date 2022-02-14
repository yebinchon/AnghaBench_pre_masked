
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int err; int fatal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 TYPE_1__* VAR_4 ;

int FUNC_0(u8 VAR_5, u8 VAR_6, int *VAR_7)
{
 int VAR_8 = 0;

 *VAR_7 = VAR_2;

 switch (VAR_5) {
 case 131:
  VAR_8 = 1;
  if (VAR_6 <= VAR_3) {
   *VAR_7 = VAR_4[VAR_6].err;
   VAR_8 = VAR_4[VAR_6].fatal;
  }
  break;

 case 129:
  *VAR_7 = VAR_1;
  break;

 case 130:
  *VAR_7 = VAR_2;
  VAR_8 = 1;
  break;

 case 128:
  *VAR_7 = VAR_0;
  break;
 }

 return VAR_8;
}
