
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _limit; size_t _capacity; int _status_err; scalar_t__ _data; scalar_t__ _fixed; scalar_t__ _vfixed; scalar_t__ _position; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__,void*,size_t) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(sldns_buffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0));

 VAR_0->_position = 0;
 VAR_0->_limit = VAR_0->_capacity = VAR_2;
 VAR_0->_fixed = 0;
 VAR_0->_vfixed = 0;
 if (!VAR_0->_fixed && VAR_0->_data)
  FUNC_1(VAR_0->_data);
 VAR_0->_data = FUNC_2(VAR_2);
 if(!VAR_0->_data) {
  VAR_0->_status_err = 1;
  return;
 }
 FUNC_3(VAR_0->_data, VAR_1, VAR_2);
 VAR_0->_status_err = 0;

 FUNC_4(VAR_0);
}
