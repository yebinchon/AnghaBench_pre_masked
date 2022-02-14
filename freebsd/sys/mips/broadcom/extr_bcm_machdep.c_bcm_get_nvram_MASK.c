
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_platform {int * nvram_io; int * nvram_cls; } ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,void*,size_t*,int ) ;

int
FUNC_1(struct bcm_platform *VAR_1, const char *VAR_2, void *VAR_3, size_t *VAR_4,
    bhnd_nvram_type VAR_5)
{
 if (VAR_1->nvram_io == ((void*)0) || VAR_1->nvram_cls == ((void*)0))
  return (VAR_0);

 return (FUNC_0(VAR_1->nvram_cls, VAR_1->nvram_io, VAR_2,
     VAR_3, VAR_4, VAR_5));
}
