
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hop_cnt; char* path; } ;
typedef TYPE_1__ DRPath ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 char VAR_0 ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(char *VAR_1, DRPath * VAR_2)
{
 char *VAR_3;

 VAR_2->hop_cnt = -1;

 FUNC_0("DR str: %s", VAR_1);
 while (VAR_1 && *VAR_1) {
  if ((VAR_3 = FUNC_2(VAR_1, ',')))
   *VAR_3 = 0;
  VAR_2->path[++VAR_2->hop_cnt] = (char)FUNC_1(VAR_1);
  if (!VAR_3)
   break;
  VAR_1 = VAR_3 + 1;
 }
 return VAR_2->hop_cnt;
}
