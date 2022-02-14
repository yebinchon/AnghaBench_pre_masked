
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int const*,int ) ;
 int FUNC_4 (int *,int const*,int ) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int *,int const*,int ) ;
 int FUNC_9 (int *,int const*,int const*,int ) ;
 int FUNC_10 (int *,int const*,int ) ;
 int FUNC_11 (int *,int const*,int ) ;
 int FUNC_12 (int *,int const*,int ) ;
 int FUNC_13 (int *,int const*,int ) ;
 int FUNC_14 (int *,int const*,int ) ;
 int VAR_0 ;
 int FUNC_15 (int ,char*,int) ;
 int FUNC_16 (int *,int const*) ;

__attribute__((used)) static int
FUNC_17(netdissect_options *VAR_1,
                uint16_t VAR_2, const uint8_t *VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 FUNC_2((VAR_1, "%s", FUNC_15(VAR_0, "Unhandled Management subtype(%x)", FUNC_1(VAR_2))));


 if (FUNC_0(VAR_2))
  return FUNC_16(VAR_1, VAR_4);
 switch (FUNC_1(VAR_2)) {
 case 138:
  return FUNC_4(VAR_1, VAR_4, VAR_5);
 case 137:
  return FUNC_5(VAR_1, VAR_4, VAR_5);
 case 129:
  return FUNC_13(VAR_1, VAR_4, VAR_5);
 case 128:
  return FUNC_14(VAR_1, VAR_4, VAR_5);
 case 131:
  return FUNC_11(VAR_1, VAR_4, VAR_5);
 case 130:
  return FUNC_12(VAR_1, VAR_4, VAR_5);
 case 134:
  return FUNC_8(VAR_1, VAR_4, VAR_5);
 case 136:
  return FUNC_6();
 case 132:
  return FUNC_10(VAR_1, VAR_4, VAR_5);
 case 135:
  return FUNC_7(VAR_1, VAR_4, VAR_5);
 case 133:
  return FUNC_9(VAR_1, VAR_3, VAR_4, VAR_5);
 case 139:
  return FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5);
 default:
  return 1;
 }
}
