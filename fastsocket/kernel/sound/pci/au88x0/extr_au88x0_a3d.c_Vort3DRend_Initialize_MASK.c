
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned short xt_mode; } ;
typedef TYPE_1__ vortex_t ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(vortex_t * VAR_0, unsigned short VAR_1)
{
 VAR_0->xt_mode = VAR_1;

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 switch (VAR_0->xt_mode) {
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_4(VAR_0);
  break;
 default:
 case 130:
  FUNC_2(VAR_0);
  break;
 case 131:
  FUNC_1(VAR_0);
  break;
 }
 FUNC_6(VAR_0, 0x11);
 FUNC_0(VAR_0);
 return 0;
}
