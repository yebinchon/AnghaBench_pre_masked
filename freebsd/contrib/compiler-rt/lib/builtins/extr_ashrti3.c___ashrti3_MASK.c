
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int high; int low; } ;
struct TYPE_4__ {int all; TYPE_1__ s; } ;
typedef TYPE_2__ twords ;
typedef int ti_int ;
typedef int const si_int ;
typedef int di_int ;


 int VAR_0 ;

ti_int FUNC_0(ti_int VAR_1, si_int VAR_2) {
  const int VAR_3 = (int)(sizeof(di_int) * VAR_0);
  twords VAR_4;
  twords VAR_5;
  VAR_4.all = VAR_1;
  if (VAR_2 & VAR_3) {

    VAR_5.s.high = VAR_4.s.high >> (VAR_3 - 1);
    VAR_5.s.low = VAR_4.s.high >> (VAR_2 - VAR_3);
  } else {
    if (VAR_2 == 0)
      return VAR_1;
    VAR_5.s.high = VAR_4.s.high >> VAR_2;
    VAR_5.s.low = (VAR_4.s.high << (VAR_3 - VAR_2)) | (VAR_4.s.low >> VAR_2);
  }
  return VAR_5.all;
}
