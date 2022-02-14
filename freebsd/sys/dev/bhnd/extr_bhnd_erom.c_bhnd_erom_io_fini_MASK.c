
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {void (* fini ) (struct bhnd_erom_io*) ;} ;


 void FUNC_0 (struct bhnd_erom_io*) ;

void
FUNC_1(struct bhnd_erom_io *VAR_0)
{
 if (VAR_0->fini != ((void*)0))
  return (VAR_0->fini(VAR_0));
}
