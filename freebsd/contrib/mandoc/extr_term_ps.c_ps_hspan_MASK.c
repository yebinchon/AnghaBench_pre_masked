
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termp {TYPE_2__* ps; } ;
struct roffsu {int unit; double scale; } ;
struct TYPE_6__ {TYPE_1__* gly; } ;
struct TYPE_5__ {double lineheight; } ;
struct TYPE_4__ {double wx; } ;


 double FUNC_0 (struct termp const*,double) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(const struct termp *VAR_2, const struct roffsu *VAR_3)
{
 double VAR_4;





 switch (VAR_3->unit) {
 case 136:







  VAR_4 = FUNC_0(VAR_2, VAR_3->scale * 72.0 / 240.0);
  break;
 case 135:
  VAR_4 = FUNC_0(VAR_2, VAR_3->scale * 72.0 / 2.54);
  break;
 case 134:
  VAR_4 = VAR_3->scale *
      VAR_1[(int)VAR_0].gly[109 - 32].wx;
  break;
 case 133:
  VAR_4 = VAR_3->scale *
      VAR_1[(int)VAR_0].gly[110 - 32].wx;
  break;
 case 132:
  VAR_4 = FUNC_0(VAR_2, VAR_3->scale * 72.0);
  break;
 case 131:
  VAR_4 = VAR_3->scale *
      VAR_1[(int)VAR_0].gly[109 - 32].wx / 100.0;
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_2, VAR_3->scale * 12.0);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_2, VAR_3->scale * 1.0);
  break;
 case 128:
  VAR_4 = VAR_3->scale * VAR_2->ps->lineheight;
  break;
 default:
  VAR_4 = VAR_3->scale;
  break;
 }

 return VAR_4 * 24.0;
}
