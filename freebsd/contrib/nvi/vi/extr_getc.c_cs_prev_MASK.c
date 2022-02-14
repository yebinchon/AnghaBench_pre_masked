
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cs_flags; int cs_lno; size_t cs_cno; int * cs_bp; int cs_ch; int cs_len; } ;
typedef TYPE_1__ VCS ;
typedef int SCR ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int ,int **,int *) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(SCR *VAR_1, VCS *VAR_2)
{
 switch (VAR_2->cs_flags) {
 case 131:
 case 129:
  if (VAR_2->cs_lno == 1) {
   VAR_2->cs_flags = 128;
   break;
  }
  if (FUNC_1(VAR_1,
      --VAR_2->cs_lno, VAR_0, &VAR_2->cs_bp, &VAR_2->cs_len)) {
   ++VAR_2->cs_lno;
   return (1);
  }
  if (VAR_2->cs_len == 0 || FUNC_2(VAR_2->cs_bp, VAR_2->cs_len)) {
   VAR_2->cs_cno = 0;
   VAR_2->cs_flags = 131;
  } else {
   VAR_2->cs_flags = 0;
   VAR_2->cs_cno = VAR_2->cs_len - 1;
   VAR_2->cs_ch = VAR_2->cs_bp[VAR_2->cs_cno];
  }
  break;
 case 130:
 case 0:
  if (VAR_2->cs_cno == 0)
   if (VAR_2->cs_lno == 1)
    VAR_2->cs_flags = 128;
   else
    VAR_2->cs_flags = 129;
  else
   VAR_2->cs_ch = VAR_2->cs_bp[--VAR_2->cs_cno];
  break;
 case 128:
  break;
 default:
  FUNC_0();

 }
 return (0);
}
