
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{
 u_int VAR_3;
 for (VAR_3=0; VAR_3<VAR_2; VAR_3++) {
  FUNC_0((VAR_0, "%c", *VAR_1++));
 }
}
