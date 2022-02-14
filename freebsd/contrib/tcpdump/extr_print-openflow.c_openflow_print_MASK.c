
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int const*,int const*) ;

void
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1, const u_int VAR_2)
{
 const u_char *VAR_3 = VAR_1 + VAR_2;

 FUNC_0((VAR_0, ": OpenFlow"));
 while (VAR_1 < VAR_3)
  VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_3);
}
