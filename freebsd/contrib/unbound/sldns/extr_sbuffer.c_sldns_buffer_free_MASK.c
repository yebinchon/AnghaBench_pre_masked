
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* _data; int _fixed; } ;
typedef TYPE_1__ sldns_buffer ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(sldns_buffer *VAR_0)
{
 if (!VAR_0) {
  return;
 }

 if (!VAR_0->_fixed)
  FUNC_0(VAR_0->_data);

 FUNC_0(VAR_0);
}
