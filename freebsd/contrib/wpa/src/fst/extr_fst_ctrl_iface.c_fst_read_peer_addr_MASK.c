
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(const char *VAR_1, u8 *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2)) {
  FUNC_0(VAR_0, "Bad peer_mac %s: invalid addr string",
      VAR_1);
  return -1;
 }

 if (FUNC_3(VAR_2) ||
     FUNC_2(VAR_2)) {
  FUNC_0(VAR_0, "Bad peer_mac %s: not a unicast addr",
      VAR_1);
  return -1;
 }

 return 0;
}
