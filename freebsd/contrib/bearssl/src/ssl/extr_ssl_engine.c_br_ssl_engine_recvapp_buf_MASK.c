
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int application_data; scalar_t__ record_type_in; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (TYPE_1__ const*,size_t*) ;

unsigned char *
FUNC_1(const br_ssl_engine_context *VAR_1, size_t *VAR_2)
{
 if (!(VAR_1->application_data & 1)
  || VAR_1->record_type_in != VAR_0)
 {
  *VAR_2 = 0;
  return ((void*)0);
 }
 return FUNC_0(VAR_1, VAR_2);
}
