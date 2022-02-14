
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int const*,int ) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int *,int const*,int ) ;
 int FUNC_9 (int *,int const*,int ) ;
 int FUNC_10 (int *,int const*,int ) ;

void
FUNC_11(netdissect_options *VAR_0,
           const u_char *VAR_1, u_int VAR_2, int VAR_3)
{
 uint8_t VAR_4;





 FUNC_1(*VAR_1);
 VAR_4 = *VAR_1;
 FUNC_0((VAR_0, " aodv"));

 switch (VAR_4) {

 case 132:
  if (VAR_3)
   FUNC_10(VAR_0, VAR_1, VAR_2);
  else
   FUNC_4(VAR_0, VAR_1, VAR_2);
  break;

 case 134:
  if (VAR_3)
   FUNC_9(VAR_0, VAR_1, VAR_2);
  else
   FUNC_3(VAR_0, VAR_1, VAR_2);
  break;

 case 135:
  if (VAR_3)
   FUNC_8(VAR_0, VAR_1, VAR_2);
  else
   FUNC_2(VAR_0, VAR_1, VAR_2);
  break;

 case 133:
  FUNC_0((VAR_0, " rrep-ack %u", VAR_2));
  break;

 case 128:
  FUNC_7(VAR_0, VAR_1, VAR_2);
  break;

 case 130:
  FUNC_6(VAR_0, VAR_1, VAR_2);
  break;

 case 131:
  FUNC_5(VAR_0, VAR_1, VAR_2);
  break;

 case 129:
  FUNC_0((VAR_0, " rrep-ack %u", VAR_2));
  break;

 default:
  FUNC_0((VAR_0, " type %u %u", VAR_4, VAR_2));
 }
 return;

trunc:
 FUNC_0((VAR_0, " [|aodv]"));
}
