
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd_map_size; int * fd_map; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (int VAR_2)
{
  FUNC_0 ();
  if (VAR_2 >= 0 && VAR_2 < VAR_1.fd_map_size)
    VAR_1.fd_map[VAR_2] = VAR_0;
}
