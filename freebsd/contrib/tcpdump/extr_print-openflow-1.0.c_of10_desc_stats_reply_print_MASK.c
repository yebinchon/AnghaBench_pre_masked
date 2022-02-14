
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,scalar_t__ const) ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int const*,int const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static const u_char *
FUNC_3(netdissect_options *VAR_5,
                            const u_char *VAR_6, const u_char *VAR_7, const u_int VAR_8)
{
 if (VAR_8 != VAR_1)
  goto invalid;

 FUNC_1(*VAR_6, VAR_0);
 FUNC_0((VAR_5, "\n\t  mfr_desc '"));
 FUNC_2(VAR_5, VAR_6, VAR_6 + VAR_0);
 FUNC_0((VAR_5, "'"));
 VAR_6 += VAR_0;

 FUNC_1(*VAR_6, VAR_0);
 FUNC_0((VAR_5, "\n\t  hw_desc '"));
 FUNC_2(VAR_5, VAR_6, VAR_6 + VAR_0);
 FUNC_0((VAR_5, "'"));
 VAR_6 += VAR_0;

 FUNC_1(*VAR_6, VAR_0);
 FUNC_0((VAR_5, "\n\t  sw_desc '"));
 FUNC_2(VAR_5, VAR_6, VAR_6 + VAR_0);
 FUNC_0((VAR_5, "'"));
 VAR_6 += VAR_0;

 FUNC_1(*VAR_6, VAR_2);
 FUNC_0((VAR_5, "\n\t  serial_num '"));
 FUNC_2(VAR_5, VAR_6, VAR_6 + VAR_2);
 FUNC_0((VAR_5, "'"));
 VAR_6 += VAR_2;

 FUNC_1(*VAR_6, VAR_0);
 FUNC_0((VAR_5, "\n\t  dp_desc '"));
 FUNC_2(VAR_5, VAR_6, VAR_6 + VAR_0);
 FUNC_0((VAR_5, "'"));
 return VAR_6 + VAR_0;

invalid:
 FUNC_0((VAR_5, "%s", VAR_3));
 FUNC_1(*VAR_6, VAR_8);
 return VAR_6 + VAR_8;
trunc:
 FUNC_0((VAR_5, "%s", VAR_4));
 return VAR_7;
}
