
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int S16 ;
typedef int FSE_CTable ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int *,int *,unsigned int,unsigned int,void*,size_t const) ;
 int FUNC_6 (int *,int,void const*,size_t,int *) ;
 int FUNC_7 (int *,unsigned int,unsigned int*,size_t,unsigned int) ;
 unsigned int FUNC_8 (unsigned int,size_t,unsigned int) ;
 int FUNC_9 (int *,int,int *,unsigned int,unsigned int) ;
 int FUNC_10 (unsigned int*,unsigned int*,void const*,size_t,void*,size_t const) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

size_t FUNC_11 (void* VAR_6, size_t VAR_7, const void* VAR_8, size_t VAR_9, unsigned VAR_10, unsigned VAR_11, void* VAR_12, size_t VAR_13)
{
    BYTE* const VAR_14 = (BYTE*) VAR_6;
    BYTE* VAR_15 = VAR_14;
    BYTE* const VAR_16 = VAR_14 + VAR_7;

    unsigned VAR_17[VAR_1+1];
    S16 VAR_18[VAR_1+1];
    FSE_CTable* VAR_19 = (FSE_CTable*)VAR_12;
    size_t const VAR_20 = FUNC_3(VAR_11, VAR_10);
    void* VAR_21 = (void*)(VAR_19 + VAR_20);
    size_t const VAR_22 = VAR_13 - (VAR_20 * sizeof(FSE_CTable));


    if (VAR_13 < FUNC_4(VAR_11, VAR_10)) return FUNC_2(VAR_5);
    if (VAR_9 <= 1) return 0;
    if (!VAR_10) VAR_10 = VAR_1;
    if (!VAR_11) VAR_11 = VAR_0;


    { FUNC_1(VAR_3, FUNC_10(VAR_17, &VAR_10, VAR_8, VAR_9, VAR_21, VAR_22) );
        if (VAR_3 == VAR_9) return 1;
        if (VAR_3 == 1) return 0;
        if (VAR_3 < (VAR_9 >> 7)) return 0;
    }

    VAR_11 = FUNC_8(VAR_11, VAR_9, VAR_10);
    FUNC_0( FUNC_7(VAR_18, VAR_11, VAR_17, VAR_9, VAR_10) );


    { FUNC_1(VAR_4, FUNC_9(VAR_15, VAR_16-VAR_15, VAR_18, VAR_10, VAR_11) );
        VAR_15 += VAR_4;
    }


    FUNC_0( FUNC_5(VAR_19, VAR_18, VAR_10, VAR_11, VAR_21, VAR_22) );
    { FUNC_1(VAR_2, FUNC_6(VAR_15, VAR_16 - VAR_15, VAR_8, VAR_9, VAR_19) );
        if (VAR_2 == 0) return 0;
        VAR_15 += VAR_2;
    }


    if ( (size_t)(VAR_15-VAR_14) >= VAR_9-1 ) return 0;

    return VAR_15-VAR_14;
}
