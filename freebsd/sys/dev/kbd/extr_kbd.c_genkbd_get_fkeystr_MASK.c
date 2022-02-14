
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int kb_fkeytab_size; TYPE_1__* kb_fkeytab; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_4__ {size_t len; int * str; } ;


 scalar_t__ VAR_0 ;

u_char *
FUNC_0(keyboard_t *VAR_1, int VAR_2, size_t *VAR_3)
{
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_2 -= VAR_0;
 if (VAR_2 > VAR_1->kb_fkeytab_size)
  return (((void*)0));
 *VAR_3 = VAR_1->kb_fkeytab[VAR_2].len;
 return (VAR_1->kb_fkeytab[VAR_2].str);
}
