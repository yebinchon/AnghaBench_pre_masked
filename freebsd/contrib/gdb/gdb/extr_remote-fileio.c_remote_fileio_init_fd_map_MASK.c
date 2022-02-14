
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fd_map; int fd_map_size; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_4;

  if (!VAR_3.fd_map)
    {
      VAR_3.fd_map = (int *) FUNC_0 (10 * sizeof (int));
      VAR_3.fd_map_size = 10;
      VAR_3.fd_map[0] = VAR_0;
      VAR_3.fd_map[1] = VAR_1;
      VAR_3.fd_map[2] = VAR_1;
      for (VAR_4 = 3; VAR_4 < 10; ++VAR_4)
        VAR_3.fd_map[VAR_4] = VAR_2;
    }
  return 3;
}
