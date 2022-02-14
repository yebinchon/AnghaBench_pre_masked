
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int bridge_id_str ;


 int FUNC_0 (char*,int,char*,int const,int const,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static char *
FUNC_1(const u_char *VAR_0)
{
    static char VAR_1[sizeof("pppp.aa:bb:cc:dd:ee:ff")];

    FUNC_0(VAR_1, sizeof(VAR_1),
             "%.2x%.2x.%.2x:%.2x:%.2x:%.2x:%.2x:%.2x",
             VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5], VAR_0[6], VAR_0[7]);

    return VAR_1;
}
