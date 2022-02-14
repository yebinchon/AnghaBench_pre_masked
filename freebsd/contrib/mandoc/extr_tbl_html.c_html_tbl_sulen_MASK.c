
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffsu {double scale; int unit; } ;
 int FUNC_0 () ;

__attribute__((used)) static size_t
FUNC_1(const struct roffsu *VAR_0, void *VAR_1)
{
 if (VAR_0->scale < 0.0)
  return 0;

 switch (VAR_0->unit) {
 case 133:
  return VAR_0->scale * 65536.0 / 24.0;
 case 132:
  return VAR_0->scale * 10.0;
 case 136:
  return VAR_0->scale * 10.0 / 2.54;
 case 130:
 case 128:
  return VAR_0->scale * 10.0 / 6.0;
 case 134:
 case 135:
  return VAR_0->scale;
 case 129:
  return VAR_0->scale * 10.0 / 6.0 / 12.0;
 case 137:
  return VAR_0->scale / 24.0;
 case 131:
  return VAR_0->scale / 100.0;
 default:
  FUNC_0();
 }
}
