
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int high; int low; } ;
struct TYPE_4__ {TYPE_1__ s; int all; } ;
typedef TYPE_2__ twords ;
typedef int ti_int ;
typedef int si_int ;


 int FUNC_0 (int) ;

si_int FUNC_1(ti_int VAR_0) {
  twords VAR_1;
  VAR_1.all = VAR_0;
  return FUNC_0(VAR_1.s.high ^ VAR_1.s.low);
}
