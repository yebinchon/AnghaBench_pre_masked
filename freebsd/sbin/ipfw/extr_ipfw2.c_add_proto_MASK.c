
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int * FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static ipfw_insn *
FUNC_4(ipfw_insn *VAR_4, char *VAR_5, u_char *VAR_6)
{
 u_char VAR_7 = VAR_0;

 if (FUNC_0(VAR_5, "all") == 0 || FUNC_3(VAR_5, "ip") == 0)
  ;
 else if (FUNC_3(VAR_5, "ip4") == 0)

  FUNC_2(VAR_4, VAR_2, 0, 0);
 else if (FUNC_3(VAR_5, "ip6") == 0) {

  VAR_7 = VAR_1;
  FUNC_2(VAR_4, VAR_3, 0, 0);
 } else
  return FUNC_1(VAR_4, VAR_5, VAR_6);

 *VAR_6 = VAR_7;
 return VAR_4;
}
