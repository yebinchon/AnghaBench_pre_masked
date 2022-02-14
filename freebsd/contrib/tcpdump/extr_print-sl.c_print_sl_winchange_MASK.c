
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 short FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const u_char *
FUNC_2(netdissect_options *VAR_0,
                   register const u_char *VAR_1)
{
 register short VAR_2;

 if ((VAR_2 = *VAR_1++) == 0) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_1 += 2;
 }
 if (VAR_2 >= 0)
  FUNC_1((VAR_0, " W+%d", VAR_2));
 else
  FUNC_1((VAR_0, " W%d", VAR_2));
 return (VAR_1);
}
