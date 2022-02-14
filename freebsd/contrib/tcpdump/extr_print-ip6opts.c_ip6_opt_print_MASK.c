
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int *,int const*) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_4, const u_char *VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;

    if (VAR_6 == 0)
        return;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_8) {
 if (VAR_5[VAR_7] == 130)
     VAR_8 = 1;
 else {
     if (VAR_7 + 1 < VAR_6)
  VAR_8 = VAR_5[VAR_7 + 1] + 2;
     else
  goto trunc;
 }
 if (VAR_7 + VAR_8 > VAR_6)
     goto trunc;

 switch (VAR_5[VAR_7]) {
 case 130:
            FUNC_2((VAR_4, "(pad1)"));
     break;
 case 129:
     if (VAR_6 - VAR_7 < VAR_2) {
  FUNC_2((VAR_4, "(padn: trunc)"));
  goto trunc;
     }
            FUNC_2((VAR_4, "(padn)"));
     break;
 case 128:
     if (VAR_6 - VAR_7 < VAR_3) {
  FUNC_2((VAR_4, "(rtalert: trunc)"));
  goto trunc;
     }
     if (VAR_5[VAR_7 + 1] != VAR_3 - 2) {
  FUNC_2((VAR_4, "(rtalert: invalid len %d)", VAR_5[VAR_7 + 1]));
  goto trunc;
     }
     FUNC_2((VAR_4, "(rtalert: 0x%04x) ", FUNC_0(&VAR_5[VAR_7 + 2])));
     break;
 case 131:
     if (VAR_6 - VAR_7 < VAR_1) {
  FUNC_2((VAR_4, "(jumbo: trunc)"));
  goto trunc;
     }
     if (VAR_5[VAR_7 + 1] != VAR_1 - 2) {
  FUNC_2((VAR_4, "(jumbo: invalid len %d)", VAR_5[VAR_7 + 1]));
  goto trunc;
     }
     FUNC_2((VAR_4, "(jumbo: %u) ", FUNC_1(&VAR_5[VAR_7 + 2])));
     break;
        case 132:
     if (VAR_6 - VAR_7 < VAR_0) {
  FUNC_2((VAR_4, "(homeaddr: trunc)"));
  goto trunc;
     }
     if (VAR_5[VAR_7 + 1] < VAR_0 - 2) {
  FUNC_2((VAR_4, "(homeaddr: invalid len %d)", VAR_5[VAR_7 + 1]));
  goto trunc;
     }
     FUNC_2((VAR_4, "(homeaddr: %s", FUNC_4(VAR_4, &VAR_5[VAR_7 + 2])));
            if (VAR_5[VAR_7 + 1] > VAR_0 - 2) {
  FUNC_3(VAR_4, &VAR_5[VAR_7 + VAR_0],
      (VAR_8 - VAR_0));
     }
            FUNC_2((VAR_4, ")"));
     break;
 default:
     if (VAR_6 - VAR_7 < VAR_2) {
  FUNC_2((VAR_4, "(type %d: trunc)", VAR_5[VAR_7]));
  goto trunc;
     }
     FUNC_2((VAR_4, "(opt_type 0x%02x: len=%d)", VAR_5[VAR_7], VAR_5[VAR_7 + 1]));
     break;
 }
    }
    FUNC_2((VAR_4, " "));
    return;

trunc:
    FUNC_2((VAR_4, "[trunc] "));
}
