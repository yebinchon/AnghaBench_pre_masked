
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(netdissect_options *VAR_0,
        const u_char *VAR_1, const u_char *VAR_2)
{

 const u_char *VAR_3 = VAR_2 - 20;
 int VAR_4 = 20;
 int VAR_5 = VAR_2 - VAR_1;
 if(VAR_5 > 10) {
  VAR_5 = 10;
 }


 if(VAR_3 < VAR_1 + VAR_5) {
  VAR_3 = VAR_1+VAR_5;
  VAR_4 = VAR_2 - VAR_3;
 }

 FUNC_0((VAR_0," data=("));
 if(!FUNC_1(VAR_0, (const uint8_t *)(VAR_1), VAR_5)) goto trunc;
 FUNC_0((VAR_0, "..."));
 if(VAR_4) {
  if(!FUNC_1(VAR_0, (const uint8_t *)(VAR_3), VAR_4)) goto trunc;
 }
 FUNC_0((VAR_0,")"));
 return 1;

trunc:
 return 0;
}
