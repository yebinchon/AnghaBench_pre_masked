
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {int feat_cap; int feat_en; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






__attribute__((used)) static void
FUNC_0(struct adapter *VAR_5)
{
 VAR_5->feat_cap = VAR_2
                   | VAR_4
                   | VAR_0;


 switch (VAR_5->hw.mac.type) {
 case 132:
  break;
 case 131:
  break;
 case 128:
 case 129:
 case 130:
  VAR_5->feat_cap |= VAR_1;
  VAR_5->feat_cap |= VAR_3;
  break;
 default:
  break;
 }



 if (VAR_5->feat_cap & VAR_4)
  VAR_5->feat_en |= VAR_4;

 if (VAR_5->feat_cap & VAR_2)
  VAR_5->feat_en |= VAR_2;

 if (VAR_5->feat_cap & VAR_3)
  VAR_5->feat_en |= VAR_3;

 if (VAR_5->feat_cap & VAR_1)
  VAR_5->feat_en |= VAR_1;
}
