
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTRACE_ARG3_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;

void
FUNC_7 (int VAR_6)
{
  unsigned int VAR_7;
  char VAR_8[VAR_1];
  int VAR_9;
  char VAR_10[VAR_1];
  FUNC_3 (VAR_10, 0, VAR_1);

  FUNC_2 ();

  for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++)
    {
      VAR_7 = FUNC_5 (VAR_6);
      for (VAR_9 = 0; VAR_9 < FUNC_0 (VAR_6); VAR_9 += sizeof (int))
 {
   *(int *) &VAR_8[VAR_9] = FUNC_4 (VAR_3, FUNC_1 (VAR_5),
         (PTRACE_ARG3_TYPE) VAR_7, 0);
   VAR_7 += sizeof (int);
 }
      FUNC_6 (VAR_6, VAR_8);
    }

  FUNC_6 (VAR_4, VAR_10);

  FUNC_6 (VAR_0, VAR_10);
}
