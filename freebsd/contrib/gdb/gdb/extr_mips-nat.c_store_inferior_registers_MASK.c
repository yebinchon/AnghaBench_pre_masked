
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int badvaddr; int cause; int fp_implementation_revision; } ;
typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;

void
FUNC_7 (int VAR_10)
{
  unsigned int VAR_11;
  char VAR_12[80];

  if (VAR_10 > 0)
    {
      if (VAR_10 == VAR_6 || VAR_10 == VAR_4
   || VAR_10 == FUNC_1 (VAR_7)->badvaddr
   || VAR_10 == FUNC_1 (VAR_7)->cause
   || VAR_10 == FUNC_1 (VAR_7)->fp_implementation_revision
   || VAR_10 == VAR_0
   || (VAR_10 >= VAR_1 && VAR_10 <= VAR_2))
 return;
      VAR_11 = FUNC_5 (VAR_10);
      VAR_8 = 0;
      FUNC_3 (VAR_5, FUNC_0 (VAR_9), (PTRACE_ARG3_TYPE) VAR_11,
       FUNC_4 (VAR_10));
      if (VAR_8 != 0)
 {
   FUNC_6 (VAR_12, "writing register number %d", VAR_10);
   FUNC_2 (VAR_12);
 }
    }
  else
    {
      for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
 FUNC_7 (VAR_10);
    }
}
