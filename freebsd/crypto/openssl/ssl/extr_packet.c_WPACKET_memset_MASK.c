
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;


 int FUNC_0 (int *,size_t,unsigned char**) ;
 int FUNC_1 (unsigned char*,int,size_t) ;

int FUNC_2(WPACKET *VAR_0, int VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3;

    if (VAR_2 == 0)
        return 1;

    if (!FUNC_0(VAR_0, VAR_2, &VAR_3))
        return 0;

    FUNC_1(VAR_3, VAR_1, VAR_2);

    return 1;
}
