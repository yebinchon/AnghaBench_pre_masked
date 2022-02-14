
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_3__ {scalar_t__ value; char const* name; } ;
typedef TYPE_1__ mnemonic_def_t ;



__attribute__((used)) static const char *
FUNC_0(wchar_t VAR_0, const mnemonic_def_t *VAR_1, size_t VAR_2)
{
 const mnemonic_def_t *VAR_3;

 for (; VAR_2 > 0; VAR_2 >>= 1) {
  VAR_3 = VAR_1 + (VAR_2 >> 1);
  if (VAR_3->value == VAR_0)
   return (VAR_3->name);
  else if (VAR_3->value < VAR_0) {
   VAR_1 = VAR_3 + 1;
   --VAR_2;
  }
 }
 return (((void*)0));
}
