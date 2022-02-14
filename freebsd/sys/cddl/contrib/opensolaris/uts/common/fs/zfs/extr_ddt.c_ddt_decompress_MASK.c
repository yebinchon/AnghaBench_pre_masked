
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ci_level; int (* ci_decompress ) (int*,void*,size_t,size_t,int ) ;} ;
typedef TYPE_1__ zio_compress_info_t ;
typedef int uchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int*,void*,size_t,size_t,int ) ;
 TYPE_1__* VAR_3 ;

void
FUNC_3(uchar_t *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7)
{
 uchar_t VAR_8 = *VAR_4++;
 int VAR_9 = VAR_8 & VAR_1;
 zio_compress_info_t *VAR_10 = &VAR_3[VAR_9];

 if (VAR_10->ci_decompress != ((void*)0))
  (void) VAR_10->ci_decompress(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10->ci_level);
 else
  FUNC_0(VAR_4, VAR_5, VAR_7);

 if (((VAR_8 & VAR_0) != 0) !=
     (VAR_2 != 0))
  FUNC_1(VAR_5, VAR_7);
}
