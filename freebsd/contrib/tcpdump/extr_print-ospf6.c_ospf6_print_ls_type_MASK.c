
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int rtrid_t ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_4,
                    register u_int VAR_5, register const rtrid_t *VAR_6)
{
        FUNC_0((VAR_4, "\n\t    %s LSA (%d), %s Scope%s, LSA-ID %s",
               FUNC_2(VAR_3, "Unknown", VAR_5 & VAR_1),
               VAR_5 & VAR_1,
               FUNC_2(VAR_2, "Unknown", VAR_5 & VAR_0),
               VAR_5 &0x8000 ? ", transitive" : "",
               FUNC_1(VAR_4, VAR_6)));
}
