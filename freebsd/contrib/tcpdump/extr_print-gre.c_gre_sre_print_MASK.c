
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int const*,int ) ;
 int FUNC_2 (int *,int ,int ,int const*,int ) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0, uint16_t VAR_1, uint8_t VAR_2,
    uint8_t VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 int VAR_6;

 switch (VAR_1) {
 case 128:
  FUNC_0((VAR_0, ", (rtaf=ip"));
  VAR_6 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_0((VAR_0, ")"));
  break;
 case 129:
  FUNC_0((VAR_0, ", (rtaf=asn"));
  VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
  FUNC_0((VAR_0, ")"));
  break;
 default:
  FUNC_0((VAR_0, ", (rtaf=0x%x)", VAR_1));
  VAR_6 = 1;
 }
 return (VAR_6);
}
