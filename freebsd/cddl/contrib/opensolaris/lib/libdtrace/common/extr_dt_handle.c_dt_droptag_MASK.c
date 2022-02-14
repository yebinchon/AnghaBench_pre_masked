
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dtrace_dropkind_t ;
struct TYPE_2__ {char const* dtdrg_tag; scalar_t__ dtdrg_kind; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(dtrace_dropkind_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].dtdrg_tag != ((void*)0); VAR_2++) {
  if (VAR_0[VAR_2].dtdrg_kind == VAR_1)
   return (VAR_0[VAR_2].dtdrg_tag);
 }

 return ("DTRACEDROP_UNKNOWN");
}
