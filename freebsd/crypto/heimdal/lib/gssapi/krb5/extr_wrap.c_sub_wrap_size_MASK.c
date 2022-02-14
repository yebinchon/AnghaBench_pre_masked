
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t*,size_t*,int ) ;

__attribute__((used)) static OM_uint32
FUNC_1 (
            OM_uint32 VAR_2,
            OM_uint32 * VAR_3,
     int VAR_4,
     int VAR_5
           )
{
    size_t VAR_6, VAR_7;

    VAR_6 = 8 + VAR_2 + VAR_4 + VAR_5;

    FUNC_0(VAR_6, &VAR_6, &VAR_7, VAR_0);

    VAR_7 -= VAR_2;
    if (VAR_7 < VAR_2) {
        *VAR_3 = (VAR_2 - VAR_7);
        (*VAR_3) &= (~(OM_uint32)(VAR_4 - 1));
    } else {
        *VAR_3 = 0;
    }
    return VAR_1;
}
