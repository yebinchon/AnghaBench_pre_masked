
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_1, asection *VAR_2, unsigned int *VAR_3)
{
  if (VAR_2->flags & VAR_0 && FUNC_0 (VAR_1, VAR_2) != 0)
    (*VAR_3)++;
}
