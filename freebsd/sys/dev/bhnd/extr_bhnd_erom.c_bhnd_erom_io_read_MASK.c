
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bhnd_erom_io {int (* read ) (struct bhnd_erom_io*,int ,int ) ;} ;
typedef int bhnd_size_t ;


 int FUNC_0 (struct bhnd_erom_io*,int ,int ) ;

uint32_t
FUNC_1(struct bhnd_erom_io *VAR_0, bhnd_size_t VAR_1, u_int VAR_2)
{
 return (VAR_0->read(VAR_0, VAR_1, VAR_2));
}
