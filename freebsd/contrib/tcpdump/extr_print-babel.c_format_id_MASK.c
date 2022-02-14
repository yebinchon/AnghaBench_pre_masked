
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,char*,int const,int const,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static const char *
FUNC_1(const u_char *VAR_0)
{
    static char VAR_1[25];
    FUNC_0(VAR_1, 25, "%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x",
             VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5], VAR_0[6], VAR_0[7]);
    VAR_1[24] = '\0';
    return VAR_1;
}
