
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _U_SINT ;
typedef float _UF ;
typedef int UNITY_LINE_TYPE ;
typedef int UNITY_FLOAT_TRAIT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (float const) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 int FUNC_3 (int const) ;
 float VAR_9 ;

void FUNC_4(const _UF VAR_10,
                             const char* VAR_11,
                             const UNITY_LINE_TYPE VAR_12,
                             const UNITY_FLOAT_TRAIT_T VAR_13)
{
    const char* VAR_14[] = { VAR_4, VAR_6, VAR_5, VAR_2 };
    _U_SINT VAR_15 = ((_U_SINT)VAR_13 & 1);
    _U_SINT VAR_16 = !VAR_15;
    _U_SINT VAR_17 = VAR_13 >> 1;

    VAR_1;

    switch(VAR_13)
    {


        case 134:
        case 130:
            VAR_16 = ((1.0f / VAR_9) == VAR_10) ? 1 : 0;
            break;
        case 132:
        case 128:
            VAR_16 = ((-1.0f / VAR_9) == VAR_10) ? 1 : 0;
            break;


        case 133:
        case 129:
            VAR_16 = (VAR_10 == VAR_10) ? 0 : 1;
            break;


        case 135:
        case 131:
            if ( (VAR_10 != VAR_10) || ((1.0f / VAR_9) == VAR_10) || ((-1.0f / VAR_9) == VAR_10) )
                VAR_16 = 0;
            else
                VAR_16 = 1;
            break;
 default:
     ;
    }

    if (VAR_16 != VAR_15)
    {
        FUNC_3(VAR_12);
        FUNC_1(VAR_3);
        if (!VAR_15)
            FUNC_1(VAR_7);
        FUNC_1(VAR_14[VAR_17]);
        FUNC_1(VAR_8);



        if (VAR_15)
            FUNC_1(VAR_7);
        FUNC_1(VAR_14[VAR_17]);

        FUNC_0(VAR_11);
        VAR_0;
    }
}
