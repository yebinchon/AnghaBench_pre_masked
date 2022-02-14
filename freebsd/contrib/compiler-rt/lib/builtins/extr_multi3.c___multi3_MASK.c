
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int high; } ;
struct TYPE_4__ {void* all; TYPE_1__ s; } ;
typedef TYPE_2__ twords ;
typedef void* ti_int ;


 void* FUNC_0 (int,int) ;

ti_int FUNC_1(ti_int VAR_0, ti_int VAR_1) {
  twords VAR_2;
  VAR_2.all = VAR_0;
  twords VAR_3;
  VAR_3.all = VAR_1;
  twords VAR_4;
  VAR_4.all = FUNC_0(VAR_2.s.low, VAR_3.s.low);
  VAR_4.s.high += VAR_2.s.high * VAR_3.s.low + VAR_2.s.low * VAR_3.s.high;
  return VAR_4.all;
}
