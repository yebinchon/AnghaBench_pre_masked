
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {scalar_t__ base; scalar_t__ indx; scalar_t__ disp; } ;
typedef int rtx ;
typedef int FILE ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (char*) ;
 char** VAR_0 ;
 int FUNC_6 (int ,struct s390_address*) ;

void
FUNC_7 (FILE *VAR_1, rtx VAR_2)
{
  struct s390_address VAR_3;

  if (!FUNC_6 (VAR_2, &VAR_3)
      || (VAR_3.base && !FUNC_1 (FUNC_0 (VAR_3.base)))
      || (VAR_3.indx && !FUNC_2 (FUNC_0 (VAR_3.indx))))
    FUNC_5 ("cannot decompose address");

  if (VAR_3.disp)
    FUNC_4 (VAR_1, VAR_3.disp);
  else
    FUNC_3 (VAR_1, "0");

  if (VAR_3.base && VAR_3.indx)
    FUNC_3 (VAR_1, "(%s,%s)", VAR_0[FUNC_0 (VAR_3.indx)],
                              VAR_0[FUNC_0 (VAR_3.base)]);
  else if (VAR_3.base)
    FUNC_3 (VAR_1, "(%s)", VAR_0[FUNC_0 (VAR_3.base)]);
}
