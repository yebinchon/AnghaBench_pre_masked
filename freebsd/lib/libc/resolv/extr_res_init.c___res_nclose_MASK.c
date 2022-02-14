
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* res_state ;
struct TYPE_5__ {int nscount; int* nssocks; } ;
struct TYPE_6__ {TYPE_1__ _ext; } ;
struct TYPE_7__ {int _vcsock; int _flags; TYPE_2__ _u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void
FUNC_1(res_state VAR_2) {
 int VAR_3;

 if (VAR_2->_vcsock >= 0) {
  (void) FUNC_0(VAR_2->_vcsock);
  VAR_2->_vcsock = -1;
  VAR_2->_flags &= ~(VAR_1 | VAR_0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->_u._ext.nscount; VAR_3++) {
  if (VAR_2->_u._ext.nssocks[VAR_3] != -1) {
   (void) FUNC_0(VAR_2->_u._ext.nssocks[VAR_3]);
   VAR_2->_u._ext.nssocks[VAR_3] = -1;
  }
 }
}
