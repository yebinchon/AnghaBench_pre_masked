
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* ci_decompress ) (void*,void*,size_t,size_t,int ) ;int ci_level; } ;
typedef TYPE_1__ zio_compress_info_t ;
typedef scalar_t__ uint_t ;
typedef enum zio_compress { ____Placeholder_zio_compress } zio_compress ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (void*,void*,size_t,size_t,int ) ;
 TYPE_1__* VAR_2 ;

int
FUNC_2(enum zio_compress VAR_3, void *VAR_4, void *VAR_5,
    size_t VAR_6, size_t VAR_7)
{
 zio_compress_info_t *VAR_8 = &VAR_2[VAR_3];
 if ((uint_t)VAR_3 >= VAR_1 || VAR_8->ci_decompress == ((void*)0))
  return (FUNC_0(VAR_0));

 return (VAR_8->ci_decompress(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8->ci_level));
}
