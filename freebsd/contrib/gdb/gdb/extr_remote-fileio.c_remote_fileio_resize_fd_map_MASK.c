
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fd_map; int fd_map_size; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2 (void)
{
  if (!VAR_0.fd_map)
    return FUNC_0 ();
  VAR_0.fd_map_size += 10;
  VAR_0.fd_map =
    (int *) FUNC_1 (VAR_0.fd_map,
        VAR_0.fd_map_size * sizeof (int));
  return VAR_0.fd_map_size - 10;
}
