
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int line ;


 int FUNC_0 (char*,int,char*,int,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static const char *
FUNC_1(uint32_t VAR_0, const u_char *VAR_1)
{
    static char VAR_2[256];

    FUNC_0(VAR_2, sizeof(VAR_2), "%08x.%02x:%02x:%02x:%02x:%02x:%02x",
     VAR_0, VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5]);

    return VAR_2;
}
