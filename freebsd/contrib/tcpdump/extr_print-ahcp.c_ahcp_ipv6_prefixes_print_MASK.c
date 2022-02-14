
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_2, const u_char *VAR_3, const u_char *VAR_4)
{
 const char *VAR_5 = ": ";

 while (VAR_3 < VAR_4) {
  if (VAR_3 + 17 > VAR_4)
   goto invalid;
  FUNC_1(*VAR_3, 17);
  FUNC_0((VAR_2, "%s%s/%u", VAR_5, FUNC_2(VAR_2, VAR_3), *(VAR_3 + 16)));
  VAR_3 += 17;
  VAR_5 = ", ";
 }
 return 0;

invalid:
 FUNC_0((VAR_2, "%s", VAR_0));
 FUNC_1(*VAR_3, VAR_4 - VAR_3);
 return 0;
trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
 return -1;
}
