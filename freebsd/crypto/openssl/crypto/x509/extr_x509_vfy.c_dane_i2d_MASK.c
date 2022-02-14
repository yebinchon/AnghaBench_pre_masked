
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int X509 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned char**) ;
 int FUNC_3 (int ,unsigned char**) ;

__attribute__((used)) static unsigned char *FUNC_4(
    X509 *VAR_3,
    uint8_t VAR_4,
    unsigned int *VAR_5)
{
    unsigned char *VAR_6 = ((void*)0);
    int VAR_7;




    switch (VAR_4) {
    case 129:
        VAR_7 = FUNC_2(VAR_3, &VAR_6);
        break;
    case 128:
        VAR_7 = FUNC_3(FUNC_0(VAR_3), &VAR_6);
        break;
    default:
        FUNC_1(VAR_1, VAR_2);
        return ((void*)0);
    }

    if (VAR_7 < 0 || VAR_6 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }

    *VAR_5 = (unsigned int)VAR_7;
    return VAR_6;
}
