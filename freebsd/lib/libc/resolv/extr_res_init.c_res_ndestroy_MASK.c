
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* res_state ;
struct TYPE_6__ {int * ext; } ;
struct TYPE_7__ {TYPE_1__ _ext; } ;
struct TYPE_8__ {int options; int * _rnd; TYPE_2__ _u; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(res_state VAR_1) {
 FUNC_1(VAR_1);
 if (VAR_1->_u._ext.ext != ((void*)0)) {
  FUNC_0(VAR_1->_u._ext.ext);
  VAR_1->_u._ext.ext = ((void*)0);
 }
 if (VAR_1->_rnd != ((void*)0)) {
  FUNC_0(VAR_1->_rnd);
  VAR_1->_rnd = ((void*)0);
 }
 VAR_1->options &= ~VAR_0;
}
