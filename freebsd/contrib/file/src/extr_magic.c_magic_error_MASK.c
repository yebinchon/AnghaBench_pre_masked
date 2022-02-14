
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* buf; } ;
struct magic_set {int event_flags; TYPE_1__ o; } ;


 int VAR_0 ;

const char *
FUNC_0(struct magic_set *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return "Magic database is not open";
 return (VAR_1->event_flags & VAR_0) ? VAR_1->o.buf : ((void*)0);
}
