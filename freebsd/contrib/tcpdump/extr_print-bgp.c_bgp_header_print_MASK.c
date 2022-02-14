
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bgp {int bgp_type; } ;
typedef int netdissect_options ;






 int VAR_0 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (struct bgp*,int const*,int) ;
 int FUNC_7 (int *,int const*,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_2,
                 const u_char *VAR_3, int VAR_4)
{
 struct bgp VAR_5;

 FUNC_1(VAR_3[0], VAR_0);
 FUNC_6(&VAR_5, VAR_3, VAR_0);
 FUNC_0((VAR_2, "\n\t%s Message (%u), length: %u",
               FUNC_8(VAR_1, "Unknown", VAR_5.bgp_type),
               VAR_5.bgp_type,
               VAR_4));

 switch (VAR_5.bgp_type) {
 case 130:
  FUNC_3(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3, VAR_4);
  break;
 case 131:
  FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
        case 132:
                break;
        case 129:
                FUNC_4(VAR_2, VAR_3, VAR_4);
                break;
        default:

                FUNC_1(*VAR_3, VAR_4);
                FUNC_0((VAR_2, "\n\t  no Message %u decoder", VAR_5.bgp_type));
                FUNC_7(VAR_2, VAR_3, "\n\t  ", VAR_4);
                break;
 }
 return 1;
trunc:
 FUNC_0((VAR_2, "[|BGP]"));
 return 0;
}
