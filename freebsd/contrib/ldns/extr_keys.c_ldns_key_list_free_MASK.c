
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* _keys; } ;
typedef TYPE_1__ ldns_key_list ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 size_t FUNC_3 (TYPE_1__*) ;

void
FUNC_4(ldns_key_list *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0); VAR_1++) {
  FUNC_1(FUNC_2(VAR_0, VAR_1));
 }
 FUNC_0(VAR_0->_keys);
 FUNC_0(VAR_0);
}
