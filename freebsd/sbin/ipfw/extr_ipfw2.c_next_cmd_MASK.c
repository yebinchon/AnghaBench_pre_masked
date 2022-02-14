
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ipfw_insn ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static ipfw_insn *
FUNC_3(ipfw_insn *VAR_0, int *VAR_1)
{
 *VAR_1 -= FUNC_1(VAR_0);
 FUNC_0(*VAR_1, 0);
 VAR_0 += FUNC_1(VAR_0);
 FUNC_2(VAR_0, sizeof(*VAR_0));
 return VAR_0;
}
