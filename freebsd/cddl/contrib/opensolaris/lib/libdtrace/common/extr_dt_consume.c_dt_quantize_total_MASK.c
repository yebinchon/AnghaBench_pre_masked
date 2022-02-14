
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 long double FUNC_0 (long double) ;

__attribute__((used)) static void
FUNC_1(dtrace_hdl_t *VAR_3, int64_t VAR_4, long double *VAR_5)
{
 long double VAR_6 = FUNC_0((long double)VAR_4);

 if (VAR_3->dt_options[VAR_0] == VAR_1) {
  *VAR_5 += VAR_6;
  return;
 }







 VAR_6 *= 1 / VAR_2;

 if (*VAR_5 < VAR_6)
  *VAR_5 = VAR_6;
}
