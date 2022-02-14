
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 int const* FUNC_3 (int *,int const*,int const*,int const) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static const u_char *
FUNC_5(netdissect_options *VAR_2,
                       const u_char *VAR_3, const u_char *VAR_4, const u_int VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5 < 4)
  goto invalid;

 FUNC_2(*VAR_3, 4);
 VAR_6 = FUNC_0(VAR_3);
 VAR_3 += 4;
 FUNC_1((VAR_2, ", vendor 0x%08x (%s)", VAR_6, FUNC_4(VAR_6)));

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5 - 4);

invalid:
 FUNC_1((VAR_2, "%s", VAR_0));
 FUNC_2(*VAR_3, VAR_5);
 return VAR_3 + VAR_5;
trunc:
 FUNC_1((VAR_2, "%s", VAR_1));
 return VAR_4;
}
