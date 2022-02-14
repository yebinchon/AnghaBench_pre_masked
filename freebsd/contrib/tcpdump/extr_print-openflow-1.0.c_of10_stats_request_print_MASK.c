
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const FUNC_0 (int const*) ;
 int const FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int const) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* FUNC_4 (int *,char*,int const*,int const*) ;
 int const* FUNC_5 (int *,int const*,int const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,int const) ;
 int VAR_9 ;

__attribute__((used)) static const u_char *
FUNC_7(netdissect_options *VAR_10,
                         const u_char *VAR_11, const u_char *VAR_12, u_int VAR_13)
{
 const u_char *VAR_14 = VAR_11;
 const u_int VAR_15 = VAR_13;
 uint16_t VAR_16;


 FUNC_3(*VAR_11, 2);
 VAR_16 = FUNC_0(VAR_11);
 VAR_11 += 2;
 FUNC_2((VAR_10, "\n\t type %s", FUNC_6(VAR_7, "invalid (0x%04x)", VAR_16)));

 FUNC_3(*VAR_11, 2);
 FUNC_2((VAR_10, ", flags 0x%04x", FUNC_0(VAR_11)));
 if (FUNC_0(VAR_11))
  FUNC_2((VAR_10, " (bogus)"));
 VAR_11 += 2;

 VAR_13 -= VAR_3;
 switch(VAR_16) {
 case 133:
 case 129:
  if (VAR_13)
   goto invalid;
  return VAR_11;
 case 132:
 case 134:
  if (VAR_13 != VAR_0)
   goto invalid;

  if (VAR_12 == (VAR_11 = FUNC_4(VAR_10, "\n\t ", VAR_11, VAR_12)))
   return VAR_12;

  FUNC_3(*VAR_11, 1);
  FUNC_2((VAR_10, "\n\t table_id %s", FUNC_6(VAR_8, "%u", *VAR_11)));
  VAR_11 += 1;

  FUNC_3(*VAR_11, 1);
  VAR_11 += 1;

  FUNC_3(*VAR_11, 2);
  FUNC_2((VAR_10, ", out_port %s", FUNC_6(VAR_5, "%u", FUNC_0(VAR_11))));
  return VAR_11 + 2;
 case 131:
  if (VAR_13 != VAR_1)
   goto invalid;

  FUNC_3(*VAR_11, 2);
  FUNC_2((VAR_10, "\n\t port_no %s", FUNC_6(VAR_5, "%u", FUNC_0(VAR_11))));
  VAR_11 += 2;

  FUNC_3(*VAR_11, 6);
  return VAR_11 + 6;
 case 130:
  if (VAR_13 != VAR_2)
   goto invalid;

  FUNC_3(*VAR_11, 2);
  FUNC_2((VAR_10, "\n\t port_no %s", FUNC_6(VAR_5, "%u", FUNC_0(VAR_11))));
  VAR_11 += 2;

  FUNC_3(*VAR_11, 2);
  VAR_11 += 2;

  FUNC_3(*VAR_11, 4);
  FUNC_2((VAR_10, ", queue_id %s", FUNC_6(VAR_6, "%u", FUNC_1(VAR_11))));
  return VAR_11 + 4;
 case 128:
  return FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13);
 }
 return VAR_11;

invalid:
 FUNC_2((VAR_10, "%s", VAR_4));
 FUNC_3(*VAR_14, VAR_15);
 return VAR_14 + VAR_15;
trunc:
 FUNC_2((VAR_10, "%s", VAR_9));
 return VAR_12;
}
