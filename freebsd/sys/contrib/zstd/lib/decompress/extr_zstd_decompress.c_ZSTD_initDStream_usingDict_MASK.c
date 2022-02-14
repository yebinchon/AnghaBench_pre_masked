
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; } ;
typedef TYPE_1__ ZSTD_DStream ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void const*,size_t) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 size_t FUNC_4 (int ) ;

size_t FUNC_5(ZSTD_DStream* VAR_1, const void* VAR_2, size_t VAR_3)
{
    FUNC_0(4, "ZSTD_initDStream_usingDict");
    FUNC_1( FUNC_3(VAR_1, VAR_0) );
    FUNC_1( FUNC_2(VAR_1, VAR_2, VAR_3) );
    return FUNC_4(VAR_1->format);
}
