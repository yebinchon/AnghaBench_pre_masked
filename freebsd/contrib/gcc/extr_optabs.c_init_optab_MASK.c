
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* optab ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_5__ {int code; } ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static inline optab
FUNC_1 (enum rtx_code VAR_1)
{
  optab VAR_2 = FUNC_0 ();
  VAR_2->code = VAR_1;
  VAR_0[(int) VAR_1] = VAR_2;
  return VAR_2;
}
