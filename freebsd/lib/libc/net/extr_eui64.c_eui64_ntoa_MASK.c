
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eui64 {int* octet; } ;


 int FUNC_0 (char*,size_t,char*,int,int,int,int,int,int,int,int) ;

int
FUNC_1(const struct eui64 *VAR_0, char *VAR_1, size_t VAR_2)
{
        int VAR_3;

        VAR_3 = FUNC_0(VAR_1, VAR_2, "%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x",
     VAR_0->octet[0], VAR_0->octet[1], VAR_0->octet[2], VAR_0->octet[3],
     VAR_0->octet[4], VAR_0->octet[5], VAR_0->octet[6], VAR_0->octet[7]);
        if (VAR_3 < 23 || VAR_3 >= VAR_2)
                return (-1);
        return (0);
}
