
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _capacity; int _position; int _status_err; int _limit; int _fixed; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

int
FUNC_3(sldns_buffer *VAR_0, size_t VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(!VAR_0->_fixed);
 if (VAR_0->_capacity < VAR_0->_position + VAR_1) {
  size_t VAR_2 = VAR_0->_capacity * 3 / 2;

  if (VAR_2 < VAR_0->_position + VAR_1) {
   VAR_2 = VAR_0->_position + VAR_1;
  }
  if (!FUNC_2(VAR_0, VAR_2)) {
   VAR_0->_status_err = 1;
   return 0;
  }
 }
 VAR_0->_limit = VAR_0->_capacity;
 return 1;
}
