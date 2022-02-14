
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CStream ;
typedef unsigned long long U64 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,unsigned long long const) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_6(ZSTD_CStream* VAR_3, int VAR_4, unsigned long long VAR_5)
{




    U64 const VAR_6 = (VAR_5==0) ? VAR_0 : VAR_5;
    FUNC_0(4, "ZSTD_initCStream_srcSize");
    FUNC_1( FUNC_3(VAR_3, VAR_2) );
    FUNC_1( FUNC_2(VAR_3, ((void*)0)) );
    FUNC_1( FUNC_4(VAR_3, VAR_1, VAR_4) );
    FUNC_1( FUNC_5(VAR_3, VAR_6) );
    return 0;
}
