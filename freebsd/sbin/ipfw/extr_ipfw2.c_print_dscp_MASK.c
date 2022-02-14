
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct buf_pr {int dummy; } ;
struct TYPE_3__ {int* d; } ;
typedef TYPE_1__ ipfw_insn_u32 ;


 int FUNC_0 (struct buf_pr*,char*,...) ;
 int VAR_0 ;
 char* FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct buf_pr *VAR_1, ipfw_insn_u32 *VAR_2)
{
 int VAR_3 = 0;
 uint32_t *VAR_4;
 char VAR_5= ' ';
 const char *VAR_6;

 FUNC_0(VAR_1, " dscp");
 VAR_4 = VAR_2->d;
 while (VAR_3 < 64) {
  if (*VAR_4 & (1 << VAR_3)) {
   if ((VAR_6 = FUNC_1(VAR_0, VAR_3)) != ((void*)0))
    FUNC_0(VAR_1, "%c%s", VAR_5, VAR_6);
   else
    FUNC_0(VAR_1, "%c%d", VAR_5, VAR_3);
   VAR_5 = ',';
  }

  if ((++VAR_3 % 32) == 0)
   VAR_4++;
 }
}
