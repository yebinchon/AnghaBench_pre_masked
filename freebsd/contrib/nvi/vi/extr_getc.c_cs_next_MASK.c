
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cs_flags; size_t cs_cno; int * cs_bp; int cs_ch; int cs_len; int cs_lno; } ;
typedef TYPE_1__ VCS ;
typedef int SCR ;
typedef int CHAR_T ;





 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int **,int *) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(SCR *VAR_0, VCS *VAR_1)
{
 CHAR_T *VAR_2;

 switch (VAR_1->cs_flags) {
 case 130:
 case 128:
  if (FUNC_1(VAR_0, ++VAR_1->cs_lno, 0, &VAR_2, &VAR_1->cs_len)) {
   --VAR_1->cs_lno;
   VAR_1->cs_flags = 129;
  } else {
   VAR_1->cs_bp = VAR_2;
   if (VAR_1->cs_len == 0 ||
       FUNC_2(VAR_1->cs_bp, VAR_1->cs_len)) {
    VAR_1->cs_cno = 0;
    VAR_1->cs_flags = 130;
   } else {
    VAR_1->cs_flags = 0;
    VAR_1->cs_ch = VAR_1->cs_bp[VAR_1->cs_cno = 0];
   }
  }
  break;
 case 0:
  if (VAR_1->cs_cno == VAR_1->cs_len - 1)
   VAR_1->cs_flags = 128;
  else
   VAR_1->cs_ch = VAR_1->cs_bp[++VAR_1->cs_cno];
  break;
 case 129:
  break;
 default:
  FUNC_0();

 }
 return (0);
}
