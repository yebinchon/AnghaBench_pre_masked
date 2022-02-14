
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int R_EAX; int R_EBX; int R_ECX; int R_EDX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (int*,int*,int*,int*) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0)
{

 FUNC_0(&VAR_0->x86.R_EAX, &VAR_0->x86.R_EBX, &VAR_0->x86.R_ECX,
     &VAR_0->x86.R_EDX);

 switch (VAR_0->x86.R_EAX) {
 case 0:
  VAR_0->x86.R_EAX = 1;






  break;
 case 1:





  VAR_0->x86.R_EDX &= 0x00000012;

  break;
 default:
  VAR_0->x86.R_EAX = VAR_0->x86.R_EBX = VAR_0->x86.R_ECX =
      VAR_0->x86.R_EDX = 0;
  break;
 }
}
