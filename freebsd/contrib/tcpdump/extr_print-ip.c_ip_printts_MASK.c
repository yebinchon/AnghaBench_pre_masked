
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 char* FUNC_4 (int *,int const*) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_0,
           register const u_char *VAR_1, u_int VAR_2)
{
 register u_int VAR_3;
 register u_int VAR_4;
 int VAR_5;
 const char *VAR_6;

 if (VAR_2 < 4) {
  FUNC_1((VAR_0, "[bad length %u]", VAR_2));
  return (0);
 }
 FUNC_1((VAR_0, " TS{"));
 VAR_5 = ((VAR_1[3]&0xF) != 128) ? 8 : 4;
 if ((VAR_2 - 4) & (VAR_5-1))
  FUNC_1((VAR_0, "[bad length %u]", VAR_2));
 FUNC_2(VAR_1[2]);
 VAR_3 = VAR_1[2] - 1;
 VAR_4 = 0;
 if (VAR_3 < 4 || ((VAR_3 - 4) & (VAR_5-1)) || VAR_3 > VAR_2 + 1)
  FUNC_1((VAR_0, "[bad ptr %u]", VAR_1[2]));
 FUNC_2(VAR_1[3]);
 switch (VAR_1[3]&0xF) {
 case 128:
  FUNC_1((VAR_0, "TSONLY"));
  break;
 case 129:
  FUNC_1((VAR_0, "TS+ADDR"));
  break;






 case 2:
  FUNC_1((VAR_0, "PRESPEC2.0"));
  break;
 case 3:
  FUNC_1((VAR_0, "PRESPEC"));
  break;
 default:
  FUNC_1((VAR_0, "[bad ts type %d]", VAR_1[3]&0xF));
  goto done;
 }

 VAR_6 = " ";
 for (VAR_4 = 4; VAR_4 < VAR_2; VAR_4 += VAR_5) {
  if (VAR_3 == VAR_4)
   VAR_6 = " ^ ";
  FUNC_3(VAR_1[VAR_4], VAR_5);
  FUNC_1((VAR_0, "%s%d@%s", VAR_6, FUNC_0(&VAR_1[VAR_4+VAR_5-4]),
         VAR_5!=8 ? "" : FUNC_4(VAR_0, &VAR_1[VAR_4])));
  VAR_6 = " ";
 }

done:
 FUNC_1((VAR_0, "%s", VAR_3 == VAR_4 ? " ^ " : ""));

 if (VAR_1[3]>>4)
  FUNC_1((VAR_0, " [%d hops not recorded]} ", VAR_1[3]>>4));
 else
  FUNC_1((VAR_0, "}"));
 return (0);

trunc:
 return (-1);
}
