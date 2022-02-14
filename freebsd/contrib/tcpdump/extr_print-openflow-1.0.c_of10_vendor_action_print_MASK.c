
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int const* FUNC_3 (int *,int const*,int const*,int const) ;
 int const* FUNC_4 (int *,int const*,int const*,int const) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static const u_char *
FUNC_6(netdissect_options *VAR_3,
                         const u_char *VAR_4, const u_char *VAR_5, const u_int VAR_6)
{
 uint32_t VAR_7;
 const u_char *(*VAR_8)(netdissect_options *, const u_char *, const u_char *, const u_int);

 if (VAR_6 < 4)
  goto invalid;

 FUNC_2(*VAR_4, 4);
 VAR_7 = FUNC_0(VAR_4);
 VAR_4 += 4;
 FUNC_1((VAR_3, ", vendor 0x%08x (%s)", VAR_7, FUNC_5(VAR_7)));

 VAR_8 =
  VAR_7 == VAR_0 ? FUNC_3 :
  FUNC_4;
 return VAR_8(VAR_3, VAR_4, VAR_5, VAR_6 - 4);

invalid:
 FUNC_1((VAR_3, "%s", VAR_1));
 FUNC_2(*VAR_4, VAR_6);
 return VAR_4 + VAR_6;
trunc:
 FUNC_1((VAR_3, "%s", VAR_2));
 return VAR_5;
}
