
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* fmt; } ;
typedef TYPE_2__ bhnd_nvram_val ;
struct TYPE_6__ {void const* (* op_next ) (TYPE_2__*,void const*,size_t*) ;} ;


 void const* FUNC_0 (TYPE_2__*,void const*,size_t*) ;
 void const* FUNC_1 (TYPE_2__*,void const*,size_t*) ;

const void *
FUNC_2(bhnd_nvram_val *VAR_0, const void *VAR_1, size_t *VAR_2)
{

 if (VAR_0->fmt->op_next != ((void*)0))
  return (VAR_0->fmt->op_next(VAR_0, VAR_1, VAR_2));

 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
