
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int,char*,int const,int const,int const,int const) ;

__attribute__((used)) static const char *
FUNC_1(const u_char *VAR_0)
{
    static char VAR_1[4][11+5];
    static int VAR_2 = 0;
    VAR_2 = (VAR_2 + 1) % 4;
    FUNC_0(VAR_1[VAR_2], 16, "%02x:%02x:%02x:%02x",
             VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3]);
    return VAR_1[VAR_2];
}
