
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* low; void* high; } ;
struct TYPE_4__ {int all; TYPE_1__ s; } ;
typedef TYPE_2__ twords ;
typedef int ti_int ;
typedef void* di_int ;



__attribute__((used)) static __inline ti_int FUNC_0(di_int VAR_0, di_int VAR_1) {
  twords VAR_2;
  VAR_2.s.high = VAR_0;
  VAR_2.s.low = VAR_1;
  return VAR_2.all;
}
