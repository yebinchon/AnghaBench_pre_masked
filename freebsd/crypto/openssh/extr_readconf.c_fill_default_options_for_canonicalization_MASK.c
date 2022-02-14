
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int canonicalize_max_dots; int canonicalize_fallback_local; int canonicalize_hostname; } ;
typedef TYPE_1__ Options ;


 int VAR_0 ;

void
FUNC_0(Options *VAR_1)
{
 if (VAR_1->canonicalize_max_dots == -1)
  VAR_1->canonicalize_max_dots = 1;
 if (VAR_1->canonicalize_fallback_local == -1)
  VAR_1->canonicalize_fallback_local = 1;
 if (VAR_1->canonicalize_hostname == -1)
  VAR_1->canonicalize_hostname = VAR_0;
}
