
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_rights; int max_rights; } ;
typedef TYPE_1__ limited_rights_t ;



__attribute__((used)) static void
FUNC_0(limited_rights_t *VAR_0,
                     const limited_rights_t *VAR_1)
{
  VAR_0->max_rights |= VAR_1->max_rights;
  VAR_0->min_rights &= VAR_1->min_rights;
}
