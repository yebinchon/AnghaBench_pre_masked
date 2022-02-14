
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buf_pr {int dummy; } ;
struct TYPE_3__ {int* d; } ;
typedef TYPE_1__ ipfw_insn_u32 ;


 int FUNC_0 (struct buf_pr*,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct buf_pr *VAR_0, ipfw_insn_u32 *VAR_1)
{
 int VAR_2;
 char VAR_3= ' ';

 FUNC_0(VAR_0, " icmptypes");
 for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
  if ( (VAR_1->d[0] & (1 << (VAR_2))) == 0)
   continue;
  FUNC_0(VAR_0, "%c%d", VAR_3, VAR_2);
  VAR_3 = ',';
 }
}
