
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(unsigned char *VAR_2, int VAR_3,
                           const unsigned char *VAR_4, int VAR_5, int VAR_6)
{

    if (VAR_5 > VAR_3) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    FUNC_2(VAR_2, 0, VAR_3 - VAR_5);
    FUNC_1(VAR_2 + VAR_3 - VAR_5, VAR_4, VAR_5);
    return VAR_3;
}
