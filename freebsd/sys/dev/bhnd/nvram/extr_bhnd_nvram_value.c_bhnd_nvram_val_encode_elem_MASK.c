
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* fmt; } ;
typedef TYPE_2__ bhnd_nvram_val ;
typedef int bhnd_nvram_type ;
struct TYPE_6__ {int (* op_encode_elem ) (TYPE_2__*,void const*,size_t,void*,size_t*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,void const*,size_t,void*,size_t*,int ) ;
 int FUNC_1 (TYPE_2__*,void const*,size_t,void*,size_t*,int ) ;

int
FUNC_2(bhnd_nvram_val *VAR_0, const void *VAR_1,
    size_t VAR_2, void *VAR_3, size_t *VAR_4, bhnd_nvram_type VAR_5)
{

 if (VAR_0->fmt->op_encode_elem != ((void*)0)) {
  return (VAR_0->fmt->op_encode_elem(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5));
 }

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5));
}
