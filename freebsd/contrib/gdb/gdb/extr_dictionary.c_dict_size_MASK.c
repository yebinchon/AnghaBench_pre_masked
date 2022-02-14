
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dictionary {int dummy; } ;
struct TYPE_2__ {int (* size ) (struct dictionary const*) ;} ;


 TYPE_1__* FUNC_0 (struct dictionary const*) ;
 int FUNC_1 (struct dictionary const*) ;

int
FUNC_2 (const struct dictionary *VAR_0)
{
  return (FUNC_0 (VAR_0))->size (VAR_0);
}
