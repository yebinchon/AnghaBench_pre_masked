
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CStream ;
typedef int ZSTD_CDict ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_CStream* VAR_1, const ZSTD_CDict* VAR_2)
{
    FUNC_0(4, "ZSTD_initCStream_usingCDict");
    FUNC_1( FUNC_3(VAR_1, VAR_0) );
    FUNC_1( FUNC_2(VAR_1, VAR_2) );
    return 0;
}
