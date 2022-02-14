
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_4__ {scalar_t__ dtdv_id; scalar_t__ dtdv_scope; scalar_t__ dtdv_name; } ;
typedef TYPE_1__ dtrace_difv_t ;
struct TYPE_5__ {scalar_t__ dtdo_varlen; scalar_t__ dtdo_strlen; char const* dtdo_strtab; TYPE_1__* dtdo_vartab; } ;
typedef TYPE_2__ dtrace_difo_t ;



__attribute__((used)) static const char *
FUNC_0(const dtrace_difo_t *VAR_0, uint_t VAR_1, uint_t VAR_2)
{
 const dtrace_difv_t *VAR_3 = VAR_0->dtdo_vartab;
 uint_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->dtdo_varlen; VAR_4++, VAR_3++) {
  if (VAR_3->dtdv_id == VAR_1 && VAR_3->dtdv_scope == VAR_2) {
   if (VAR_3->dtdv_name < VAR_0->dtdo_strlen)
    return (VAR_0->dtdo_strtab + VAR_3->dtdv_name);
   break;
  }
 }

 return (((void*)0));
}
