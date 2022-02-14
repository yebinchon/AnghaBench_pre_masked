
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buf_pr {int dummy; } ;
struct TYPE_3__ {int* d; } ;
typedef TYPE_1__ ipfw_insn_u32 ;


 int FUNC_0 (struct buf_pr*,char*,...) ;

void
FUNC_1(struct buf_pr *VAR_0, ipfw_insn_u32 *VAR_1)
{
 int VAR_2, VAR_3;
 char VAR_4= ' ';

 FUNC_0(VAR_0, " icmp6types");
 for (VAR_2 = 0; VAR_2 < 7; VAR_2++)
  for (VAR_3=0; VAR_3 < 32; ++VAR_3) {
   if ( (VAR_1->d[VAR_2] & (1 << (VAR_3))) == 0)
    continue;
   FUNC_0(VAR_0, "%c%d", VAR_4, (VAR_2*32 + VAR_3));
   VAR_4 = ',';
  }
}
