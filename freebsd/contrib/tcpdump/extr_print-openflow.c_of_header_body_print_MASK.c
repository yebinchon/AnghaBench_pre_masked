
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_0 ;

 int VAR_1 ;
 int const* FUNC_4 (int *,int const*,int const*,int,int,int ) ;
 int FUNC_5 (int *,int,int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static const u_char *
FUNC_6(netdissect_options *VAR_3, const u_char *VAR_4, const u_char *VAR_5)
{
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;
 uint32_t VAR_9;

 if (VAR_5 < VAR_4 + VAR_0)
  goto invalid;

 FUNC_3(*VAR_4, 1);
 VAR_6 = *VAR_4;
 VAR_4 += 1;

 FUNC_3(*VAR_4, 1);
 VAR_7 = *VAR_4;
 VAR_4 += 1;

 FUNC_3(*VAR_4, 2);
 VAR_8 = FUNC_0(VAR_4);
 VAR_4 += 2;

 FUNC_3(*VAR_4, 4);
 VAR_9 = FUNC_1(VAR_4);
 VAR_4 += 4;





 if (VAR_8 < VAR_0) {
  FUNC_5(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
  goto invalid;
 }


 switch (VAR_6) {
 case 128:
  return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);
 default:
  FUNC_5(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_3(*VAR_4, VAR_8 - VAR_0);
  return VAR_4 + VAR_8 - VAR_0;
 }

invalid:
 FUNC_2((VAR_3, "%s", VAR_1));
 FUNC_3(*VAR_4, VAR_5 - VAR_4);
 return VAR_5;
trunc:
 FUNC_2((VAR_3, "%s", VAR_2));
 return VAR_5;
}
