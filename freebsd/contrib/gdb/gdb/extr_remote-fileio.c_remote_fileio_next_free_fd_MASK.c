
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd_map_size; scalar_t__* fd_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1.fd_map_size; ++VAR_2)
    if (VAR_1.fd_map[VAR_2] == VAR_0)
      return VAR_2;
  return FUNC_0 ();
}
