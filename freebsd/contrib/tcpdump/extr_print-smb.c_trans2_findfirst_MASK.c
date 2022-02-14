
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int const*,char const*,int const*,int ) ;
 int FUNC_2 (int *,int const*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_2,
                 const u_char *VAR_3, const u_char *VAR_4, int VAR_5, int VAR_6)
{
    const char *VAR_7;

    if (VAR_0)
 VAR_7 = "Attribute=[A]\nSearchCount=[d]\nFlags=[w]\nLevel=[dP4]\nFile=[S]\n";
    else
 VAR_7 = "Handle=[w]\nCount=[d]\nEOS=[w]\nEoffset=[d]\nLastNameOfs=[w]\n";

    FUNC_1(VAR_2, VAR_3, VAR_7, VAR_3 + VAR_5, VAR_1);
    if (VAR_6) {
 FUNC_0((VAR_2, "data:\n"));
 FUNC_2(VAR_2, VAR_4, VAR_6);
    }
}
