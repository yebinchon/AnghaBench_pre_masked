
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const FUNC_0 (int const*) ;
 int const FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_4 (int *,int const*,int const*,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int const) ;
 int VAR_4 ;

__attribute__((used)) static const u_char *
FUNC_6(netdissect_options *VAR_5,
                     const u_char *VAR_6, const u_char *VAR_7, const u_int VAR_8)
{

 FUNC_3(*VAR_6, 4);
 FUNC_2((VAR_5, "\n\t buffer_id %s", FUNC_5(VAR_1, "0x%08x", FUNC_1(VAR_6))));
 VAR_6 += 4;

 FUNC_3(*VAR_6, 2);
 FUNC_2((VAR_5, ", total_len %u", FUNC_0(VAR_6)));
 VAR_6 += 2;

 FUNC_3(*VAR_6, 2);
 FUNC_2((VAR_5, ", in_port %s", FUNC_5(VAR_2, "%u", FUNC_0(VAR_6))));
 VAR_6 += 2;

 FUNC_3(*VAR_6, 1);
 FUNC_2((VAR_5, ", reason %s", FUNC_5(VAR_3, "invalid (0x%02x)", *VAR_6)));
 VAR_6 += 1;

 FUNC_3(*VAR_6, 1);
 VAR_6 += 1;


 return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8 - (VAR_0 - 2));

trunc:
 FUNC_2((VAR_5, "%s", VAR_4));
 return VAR_7;
}
