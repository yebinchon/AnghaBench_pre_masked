
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ns_sect ;
struct TYPE_3__ {int _rrnum; int ** _sections; int * _msg_ptr; scalar_t__ _sect; } ;
typedef TYPE_1__ ns_msg ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(ns_msg *VAR_1, ns_sect VAR_2) {
 VAR_1->_sect = VAR_2;
 if (VAR_2 == VAR_0) {
  VAR_1->_rrnum = -1;
  VAR_1->_msg_ptr = ((void*)0);
 } else {
  VAR_1->_rrnum = 0;
  VAR_1->_msg_ptr = VAR_1->_sections[(int)VAR_2];
 }
}
