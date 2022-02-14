
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
 int VAR_0 ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_2,
            register const u_char *VAR_3, u_int VAR_4)
{
 register u_int VAR_5;
 const char *VAR_6 = "";

 for (; VAR_4 > 0; VAR_3 += VAR_5, VAR_4 -= VAR_5) {
  u_int VAR_7;

  FUNC_1((VAR_2, "%s", VAR_6));
  VAR_6 = ",";

  FUNC_2(*VAR_3);
  VAR_7 = *VAR_3;

  FUNC_1((VAR_2, "%s",
            FUNC_6(VAR_0,"unknown %u",VAR_7)));

  if (VAR_7 == 133 ||
                    VAR_7 == 135)
   VAR_5 = 1;

  else {
   FUNC_2(VAR_3[1]);
   VAR_5 = VAR_3[1];
   if (VAR_5 < 2) {
    FUNC_1((VAR_2, " [bad length %u]", VAR_5));
    return;
   }
  }

  if (VAR_5 > VAR_4) {
   FUNC_1((VAR_2, " [bad length %u]", VAR_5));
   return;
  }

  FUNC_3(*VAR_3, VAR_5);

  switch (VAR_7) {
  case 135:
   return;

  case 128:
   if (FUNC_5(VAR_2, VAR_3, VAR_5) == -1)
    goto trunc;
   break;

  case 131:
  case 129:
  case 134:
   if (FUNC_4(VAR_2, VAR_3, VAR_5) == -1)
    goto trunc;
   break;

  case 132:
   if (VAR_5 < 4) {
    FUNC_1((VAR_2, " [bad length %u]", VAR_5));
    break;
   }
   FUNC_2(VAR_3[3]);
   if (FUNC_0(&VAR_3[2]) != 0)
    FUNC_1((VAR_2, " value %u", FUNC_0(&VAR_3[2])));
   break;

  case 133:
  case 130:
  default:
   break;
  }
 }
 return;

trunc:
 FUNC_1((VAR_2, "%s", VAR_1));
}
