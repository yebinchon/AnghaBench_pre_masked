
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ record_type_out; int application_data; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

void
FUNC_3(br_ssl_engine_context *VAR_1, size_t VAR_2)
{
 FUNC_2(VAR_1, VAR_2);
 if (VAR_2 != 0 && !FUNC_0(VAR_1)
  && (VAR_1->record_type_out != VAR_0
  || (VAR_1->application_data & 1) == 0))
 {
  FUNC_1(VAR_1, 0);
 }
}
