
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int application_data; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(br_ssl_engine_context *VAR_0, int VAR_1)
{
 if (!FUNC_0(VAR_0) && (VAR_0->application_data & 1) != 0) {
  FUNC_1(VAR_0, VAR_1);
 }
}
