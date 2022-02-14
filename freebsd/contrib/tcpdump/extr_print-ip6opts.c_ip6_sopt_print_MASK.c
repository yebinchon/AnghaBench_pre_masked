
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_1, const u_char *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += VAR_5) {
 if (VAR_2[VAR_4] == 129)
     VAR_5 = 1;
 else {
     if (VAR_4 + 1 < VAR_3)
  VAR_5 = VAR_2[VAR_4 + 1] + 2;
     else
  goto trunc;
 }
 if (VAR_4 + VAR_5 > VAR_3)
     goto trunc;

 switch (VAR_2[VAR_4]) {
 case 129:
            FUNC_0((VAR_1, ", pad1"));
     break;
 case 128:
     if (VAR_3 - VAR_4 < VAR_0) {
  FUNC_0((VAR_1, ", padn: trunc"));
  goto trunc;
     }
            FUNC_0((VAR_1, ", padn"));
     break;
 default:
     if (VAR_3 - VAR_4 < VAR_0) {
  FUNC_0((VAR_1, ", sopt_type %d: trunc)", VAR_2[VAR_4]));
  goto trunc;
     }
     FUNC_0((VAR_1, ", sopt_type 0x%02x: len=%d", VAR_2[VAR_4], VAR_2[VAR_4 + 1]));
     break;
 }
    }
    return;

trunc:
    FUNC_0((VAR_1, "[trunc] "));
}
