
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_1,
    const u_char *VAR_2, u_int VAR_3, const u_char *VAR_4,
    u_int VAR_5)
{
 if (VAR_3 == 0)
  FUNC_0((VAR_1, "<No address>"));
 else {
  FUNC_0((VAR_1, "%s", FUNC_1(VAR_1, VAR_2, VAR_0, VAR_3)));
  if (VAR_5 != 0)
   FUNC_0((VAR_1, ",%s",
      FUNC_1(VAR_1, VAR_4, VAR_0, VAR_5)));
 }
}
