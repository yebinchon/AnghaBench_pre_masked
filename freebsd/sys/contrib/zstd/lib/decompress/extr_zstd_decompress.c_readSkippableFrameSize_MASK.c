
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_2(void const* VAR_4, size_t VAR_5)
{
    size_t const VAR_6 = VAR_1;
    U32 VAR_7;

    FUNC_1(VAR_5 < VAR_1, VAR_3);

    VAR_7 = FUNC_0((BYTE const*)VAR_4 + VAR_0);
    FUNC_1((U32)(VAR_7 + VAR_1) < VAR_7,
                    VAR_2);
    {
        size_t const VAR_8 = VAR_6 + VAR_7;
        FUNC_1(VAR_8 > VAR_5, VAR_3);
        return VAR_8;
    }
}
