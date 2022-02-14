
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct siba_erom_io {int ncores; struct bhnd_erom_io* eio; } ;
struct bhnd_erom_io {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct siba_erom_io *VAR_0, struct bhnd_erom_io *VAR_1, u_int VAR_2)
{
 VAR_0->eio = VAR_1;
 VAR_0->ncores = VAR_2;
 return (0);
}
