
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
  const char *VAR_2[] = { "netgraph", "ng_socket", "ng_ether", "ng_pppoe" };
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < sizeof VAR_2 / sizeof *VAR_2; VAR_3++)
    if (FUNC_2(VAR_2[VAR_3]) == -1 && FUNC_1(VAR_2[VAR_3]) == -1) {
      FUNC_0(VAR_1, "kldload: %s: %s\n", VAR_2[VAR_3], FUNC_3(VAR_0));
      return 0;
    }

  return 1;
}
