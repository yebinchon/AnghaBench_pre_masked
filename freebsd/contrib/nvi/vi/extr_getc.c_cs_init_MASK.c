
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cs_len; size_t cs_cno; int * cs_bp; int cs_ch; scalar_t__ cs_flags; int cs_lno; } ;
typedef TYPE_1__ VCS ;
typedef int SCR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int **,scalar_t__*,int*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

int
FUNC_3(SCR *VAR_2, VCS *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2, VAR_3->cs_lno, &VAR_3->cs_bp, &VAR_3->cs_len, &VAR_4)) {
  if (VAR_4)
   FUNC_1(VAR_2, VAR_1, "177|Empty file");
  return (1);
 }
 if (VAR_3->cs_len == 0 || FUNC_2(VAR_3->cs_bp, VAR_3->cs_len)) {
  VAR_3->cs_cno = 0;
  VAR_3->cs_flags = VAR_0;
 } else {
  VAR_3->cs_flags = 0;
  VAR_3->cs_ch = VAR_3->cs_bp[VAR_3->cs_cno];
 }
 return (0);
}
