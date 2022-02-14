
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flags; } ;
typedef TYPE_1__ ns_msg ;
struct TYPE_5__ {int mask; int shift; } ;


 TYPE_3__* VAR_0 ;

int FUNC_0(ns_msg VAR_1, int VAR_2) {
 return(((VAR_1)._flags & VAR_0[VAR_2].mask) >> VAR_0[VAR_2].shift);
}
