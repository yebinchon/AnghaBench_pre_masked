
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct unnamed_section {int dummy; } ;
struct TYPE_7__ {unsigned int flags; } ;
struct TYPE_8__ {void (* callback ) (void const*) ;TYPE_3__* next; void const* data; TYPE_1__ common; } ;
struct TYPE_9__ {TYPE_2__ unnamed; } ;
typedef TYPE_3__ section ;


 unsigned int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;

section *
FUNC_1 (unsigned int VAR_2, void (*VAR_3) (const void *),
       const void *VAR_4)
{
  section *VAR_5;

  VAR_5 = FUNC_0 (sizeof (struct unnamed_section));
  VAR_5->unnamed.common.flags = VAR_2 | VAR_0;
  VAR_5->unnamed.callback = VAR_3;
  VAR_5->unnamed.data = VAR_4;
  VAR_5->unnamed.next = VAR_1;

  VAR_1 = VAR_5;
  return VAR_5;
}
