
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _capacity; int _position; int _limit; int _status; int _fixed; } ;
typedef TYPE_1__ ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

bool
FUNC_3(ldns_buffer *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_1);
 FUNC_0(!VAR_1->_fixed);
 if (VAR_1->_capacity < VAR_1->_position + VAR_2) {
  size_t VAR_3 = VAR_1->_capacity * 3 / 2;

  if (VAR_3 < VAR_1->_position + VAR_2) {
   VAR_3 = VAR_1->_position + VAR_2;
  }
  if (!FUNC_2(VAR_1, VAR_3)) {
   VAR_1->_status = VAR_0;
   return 0;
  }
 }
 VAR_1->_limit = VAR_1->_capacity;
 return 1;
}
