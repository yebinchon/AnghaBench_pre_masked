
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int ;
typedef int off_t ;
struct TYPE_4__ {int x_op; scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_5__ {int out_finger; int out_base; int in_boundry; int in_finger; scalar_t__ tcp_handle; } ;
typedef TYPE_2__ RECSTREAM ;




 int FUNC_0 (int,int,int) ;

__attribute__((used)) static u_int
FUNC_1(XDR *VAR_0)
{
 RECSTREAM *VAR_1 = (RECSTREAM *)VAR_0->x_private;
 off_t VAR_2;

 VAR_2 = FUNC_0((int)(u_long)VAR_1->tcp_handle, (off_t)0, 1);
 if (VAR_2 == -1)
  VAR_2 = 0;
 switch (VAR_0->x_op) {

 case 128:
  VAR_2 += VAR_1->out_finger - VAR_1->out_base;
  break;

 case 129:
  VAR_2 -= VAR_1->in_boundry - VAR_1->in_finger;
  break;

 default:
  VAR_2 = (off_t) -1;
  break;
 }
 return ((u_int) VAR_2);
}
