
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {int * obfd; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_1 (bfd *VAR_1)
{
  if (VAR_1 != ((void*)0))
    return FUNC_0 (VAR_1);
  if (VAR_0 != ((void*)0) && VAR_0->obfd != ((void*)0))
    return FUNC_0 (VAR_0->obfd);
  return 0;
}
