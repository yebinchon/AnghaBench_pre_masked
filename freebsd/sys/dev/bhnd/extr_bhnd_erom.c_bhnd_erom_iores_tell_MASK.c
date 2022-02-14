
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_erom_iores {TYPE_1__* mapped; } ;
struct bhnd_erom_io {int dummy; } ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;
struct TYPE_2__ {int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct bhnd_erom_io *VAR_1, bhnd_addr_t *VAR_2,
    bhnd_size_t *VAR_3)
{
 struct bhnd_erom_iores *VAR_4 = (struct bhnd_erom_iores *)VAR_1;

 if (VAR_4->mapped == ((void*)0))
  return (VAR_0);

 *VAR_2 = FUNC_1(VAR_4->mapped->res);
 *VAR_3 = FUNC_0(VAR_4->mapped->res);

 return (0);
}
