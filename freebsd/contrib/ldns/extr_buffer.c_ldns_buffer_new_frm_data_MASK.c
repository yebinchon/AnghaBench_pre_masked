
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _limit; size_t _capacity; int _status; int _data; scalar_t__ _fixed; scalar_t__ _position; } ;
typedef TYPE_1__ ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int VAR_2 ;

void
FUNC_4(ldns_buffer *VAR_3, const void *VAR_4, size_t VAR_5)
{
 FUNC_1(VAR_4 != ((void*)0));

 VAR_3->_position = 0;
 VAR_3->_limit = VAR_3->_capacity = VAR_5;
 VAR_3->_fixed = 0;
 VAR_3->_data = FUNC_0(VAR_2, VAR_5);
 if(!VAR_3->_data) {
  VAR_3->_status = VAR_0;
  return;
 }
 FUNC_3(VAR_3->_data, VAR_4, VAR_5);
 VAR_3->_status = VAR_1;

 FUNC_2(VAR_3);
}
