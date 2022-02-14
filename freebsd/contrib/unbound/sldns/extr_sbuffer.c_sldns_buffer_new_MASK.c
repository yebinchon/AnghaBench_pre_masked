
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t _limit; size_t _capacity; scalar_t__ _status_err; scalar_t__ _vfixed; scalar_t__ _fixed; scalar_t__ _position; int * _data; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;

sldns_buffer *
FUNC_3(size_t VAR_0)
{
 sldns_buffer *VAR_1 = (sldns_buffer*)FUNC_1(sizeof(sldns_buffer));

 if (!VAR_1) {
  return ((void*)0);
 }

 VAR_1->_data = (uint8_t *) FUNC_1(VAR_0);
 if (!VAR_1->_data) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_1->_position = 0;
 VAR_1->_limit = VAR_1->_capacity = VAR_0;
 VAR_1->_fixed = 0;
 VAR_1->_vfixed = 0;
 VAR_1->_status_err = 0;

 FUNC_2(VAR_1);

 return VAR_1;
}
