
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int format; int size; } ;
struct TYPE_4__ {int format; int size; } ;
struct TYPE_6__ {scalar_t__ minDev; TYPE_2__ dsp; TYPE_1__ soft; } ;







 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{


 switch (VAR_2) {
 case 130:
  return(VAR_1.soft.format);
 case 131:
 case 132:
 case 129:
 case 128:
  break;
 default:
  VAR_2 = 129;
 }

 VAR_1.soft.format = VAR_2;
 VAR_1.soft.size = 8;
 if (VAR_1.minDev == VAR_0) {
  VAR_1.dsp.format = VAR_2;
  VAR_1.dsp.size = 8;
 }
 FUNC_0();

 return(VAR_2);
}
