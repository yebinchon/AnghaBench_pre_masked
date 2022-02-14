
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* _rdata_fields; } ;
typedef TYPE_1__ ldns_rr ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t) ;

void
FUNC_5(ldns_rr *VAR_0)
{
 size_t VAR_1;
 if (VAR_0) {
  if (FUNC_2(VAR_0)) {
   FUNC_1(FUNC_2(VAR_0));
  }
  for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0); VAR_1++) {
   FUNC_1(FUNC_4(VAR_0, VAR_1));
  }
  FUNC_0(VAR_0->_rdata_fields);
  FUNC_0(VAR_0);
 }
}
