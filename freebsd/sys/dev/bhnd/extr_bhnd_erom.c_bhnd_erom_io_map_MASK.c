
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int (* map ) (struct bhnd_erom_io*,int ,int ) ;} ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int FUNC_0 (struct bhnd_erom_io*,int ,int ) ;

int
FUNC_1(struct bhnd_erom_io *VAR_0, bhnd_addr_t VAR_1, bhnd_size_t VAR_2)
{
 return (VAR_0->map(VAR_0, VAR_1, VAR_2));
}
