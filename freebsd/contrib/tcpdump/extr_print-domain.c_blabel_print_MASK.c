
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;

__attribute__((used)) static const u_char *
FUNC_3(netdissect_options *VAR_0,
             const u_char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 const u_char *VAR_5, *VAR_6;
 char VAR_7;

 if (!FUNC_2(*VAR_1, 1))
  return(((void*)0));
 if ((VAR_2 = *VAR_1) == 0)
  VAR_2 = 256;
 VAR_3 = (VAR_2 + 3) / 4;
 VAR_6 = VAR_1 + 1 + VAR_3;


 FUNC_0((VAR_0, "\\[x"));
 for (VAR_5 = VAR_1 + 1, VAR_4 = VAR_2; VAR_5 < VAR_6 && VAR_4 > 7; VAR_4 -= 8, VAR_5++) {
  FUNC_1(*VAR_5);
  FUNC_0((VAR_0, "%02x", *VAR_5));
 }
 if (VAR_4 > 4) {
  FUNC_1(*VAR_5);
  VAR_7 = *VAR_5++;
  FUNC_0((VAR_0, "%02x", VAR_7 & (0xff << (8 - VAR_4))));
 } else if (VAR_4 > 0) {
  FUNC_1(*VAR_5);
  VAR_7 = *VAR_5++;
  FUNC_0((VAR_0, "%1x", ((VAR_7 >> 4) & 0x0f) & (0x0f << (4 - VAR_4))));
 }
 FUNC_0((VAR_0, "/%d]", VAR_2));
 return VAR_6;
trunc:
 FUNC_0((VAR_0, ".../%d]", VAR_2));
 return ((void*)0);
}
