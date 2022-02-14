
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _capacity; size_t _limit; int _fixed; int _vfixed; void* _data; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(sldns_buffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->_data = VAR_1;
 VAR_0->_capacity = VAR_0->_limit = VAR_2;
 VAR_0->_fixed = 1;
 VAR_0->_vfixed = 1;
}
