
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
struct roffsu {int unit; double scale; } ;
 int FUNC_0 () ;

int
FUNC_1(const struct termp *VAR_0, const struct roffsu *VAR_1)
{
 double VAR_2;
 int VAR_3;

 switch (VAR_1->unit) {
 case 137:
  VAR_2 = VAR_1->scale / 40.0;
  break;
 case 136:
  VAR_2 = VAR_1->scale * 6.0 / 2.54;
  break;
 case 133:
  VAR_2 = VAR_1->scale * 65536.0 / 40.0;
  break;
 case 132:
  VAR_2 = VAR_1->scale * 6.0;
  break;
 case 131:
  VAR_2 = VAR_1->scale * 0.006;
  break;
 case 130:
  VAR_2 = VAR_1->scale;
  break;
 case 129:
  VAR_2 = VAR_1->scale / 12.0;
  break;
 case 134:
 case 135:
  VAR_2 = VAR_1->scale * 0.6;
  break;
 case 128:
  VAR_2 = VAR_1->scale;
  break;
 default:
  FUNC_0();
 }
 VAR_3 = VAR_2 > 0.0 ? VAR_2 + 0.4995 : VAR_2 - 0.4995;
 return VAR_3 < 66 ? VAR_3 : 1;
}
