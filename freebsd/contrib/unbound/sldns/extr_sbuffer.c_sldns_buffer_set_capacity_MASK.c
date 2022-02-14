
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t _position; int _status_err; size_t _limit; size_t _capacity; void* _data; int _fixed; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(sldns_buffer *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0->_position <= VAR_1 && !VAR_0->_fixed);

 VAR_2 = (uint8_t *) FUNC_1(VAR_0->_data, VAR_1);
 if (!VAR_2) {
  VAR_0->_status_err = 1;
  return 0;
 } else {
  VAR_0->_data = VAR_2;
  VAR_0->_limit = VAR_0->_capacity = VAR_1;
  return 1;
 }
}
