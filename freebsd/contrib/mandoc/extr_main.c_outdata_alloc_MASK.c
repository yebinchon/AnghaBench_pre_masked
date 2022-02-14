
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curparse {int outtype; int outopts; int outdata; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct curparse *VAR_0)
{
 switch (VAR_0->outtype) {
 case 132:
  VAR_0->outdata = FUNC_1(VAR_0->outopts);
  break;
 case 128:
  VAR_0->outdata = FUNC_5(VAR_0->outopts);
  break;
 case 131:
  VAR_0->outdata = FUNC_2(VAR_0->outopts);
  break;
 case 133:
  VAR_0->outdata = FUNC_0(VAR_0->outopts);
  break;
 case 130:
  VAR_0->outdata = FUNC_3(VAR_0->outopts);
  break;
 case 129:
  VAR_0->outdata = FUNC_4(VAR_0->outopts);
  break;
 default:
  break;
 }
}
