
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {size_t suites_num; int suites_buf; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int const*,size_t) ;

void
FUNC_2(br_ssl_engine_context *VAR_1,
 const uint16_t *VAR_2, size_t VAR_3)
{
 if ((VAR_3 * sizeof *VAR_2) > sizeof VAR_1->suites_buf) {
  FUNC_0(VAR_1, VAR_0);
  return;
 }
 FUNC_1(VAR_1->suites_buf, VAR_2, VAR_3 * sizeof *VAR_2);
 VAR_1->suites_num = VAR_3;
}
