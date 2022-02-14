
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const u_char *
FUNC_2(netdissect_options *VAR_0,
                const char *VAR_1, register const u_char *VAR_2)
{
 register u_int VAR_3;

 if ((VAR_3 = *VAR_2++) == 0) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_2 += 2;
 }
 FUNC_1((VAR_0, " %s%d", VAR_1, VAR_3));
 return (VAR_2);
}
