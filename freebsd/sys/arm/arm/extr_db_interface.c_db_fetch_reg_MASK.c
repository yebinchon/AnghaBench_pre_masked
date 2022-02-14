
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int tf_pc; int tf_svc_lr; int tf_svc_sp; int tf_r12; int tf_r11; int tf_r10; int tf_r9; int tf_r8; int tf_r7; int tf_r6; int tf_r5; int tf_r4; int tf_r3; int tf_r2; int tf_r1; int tf_r0; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u_int
FUNC_1(int VAR_1)
{

 switch (VAR_1) {
 case 0:
  return (VAR_0->tf_r0);
 case 1:
  return (VAR_0->tf_r1);
 case 2:
  return (VAR_0->tf_r2);
 case 3:
  return (VAR_0->tf_r3);
 case 4:
  return (VAR_0->tf_r4);
 case 5:
  return (VAR_0->tf_r5);
 case 6:
  return (VAR_0->tf_r6);
 case 7:
  return (VAR_0->tf_r7);
 case 8:
  return (VAR_0->tf_r8);
 case 9:
  return (VAR_0->tf_r9);
 case 10:
  return (VAR_0->tf_r10);
 case 11:
  return (VAR_0->tf_r11);
 case 12:
  return (VAR_0->tf_r12);
 case 13:
  return (VAR_0->tf_svc_sp);
 case 14:
  return (VAR_0->tf_svc_lr);
 case 15:
  return (VAR_0->tf_pc);
 default:
  FUNC_0("db_fetch_reg: botch");
 }
}
