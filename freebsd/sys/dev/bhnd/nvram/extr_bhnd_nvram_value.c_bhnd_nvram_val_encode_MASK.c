
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* fmt; } ;
typedef TYPE_2__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;
struct TYPE_6__ {int (* op_encode ) (TYPE_2__*,void*,size_t*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,void*,size_t*,int ) ;
 int FUNC_1 (TYPE_2__*,void*,size_t*,int ) ;

int
FUNC_2(bhnd_nvram_val *VAR_0, void *VAR_1, size_t *VAR_2,
    bhnd_nvram_type VAR_3)
{

 if (VAR_0->fmt->op_encode != ((void*)0))
  return (VAR_0->fmt->op_encode(VAR_0, VAR_1, VAR_2, VAR_3));

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
