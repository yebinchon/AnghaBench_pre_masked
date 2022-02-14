
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTRACE_XFER_TYPE ;
typedef int PTRACE_ARG3_TYPE ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int,int ,int ) ;
 scalar_t__ FUNC_8 (int,unsigned int) ;
 int FUNC_9 (char*,char*,char*,int) ;
 int FUNC_10 (int,char*) ;

__attribute__((used)) static void
FUNC_11 (int VAR_5)
{

  CORE_ADDR VAR_6;
  char VAR_7[128];
  int VAR_8;
  unsigned int VAR_9;
  char VAR_10[VAR_0];
  int VAR_11;

  if (FUNC_0 (VAR_5))
    {
      FUNC_5 (VAR_10, '\0', FUNC_1 (VAR_5));
      FUNC_10 (VAR_5, VAR_10);
      return;
    }


  if ((VAR_11 = FUNC_4 (VAR_4)) == 0)
    VAR_11 = FUNC_2 (VAR_4);

  VAR_9 = VAR_2;

  VAR_6 = FUNC_8 (VAR_5, VAR_9);
  for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_5); VAR_8 += sizeof (PTRACE_XFER_TYPE))
    {
      VAR_3 = 0;
      *(PTRACE_XFER_TYPE *) & VAR_10[VAR_8] = FUNC_7 (VAR_1, VAR_11,
            (PTRACE_ARG3_TYPE) VAR_6, 0);
      VAR_6 += sizeof (PTRACE_XFER_TYPE);
      if (VAR_3 != 0)
 {
   FUNC_9 (VAR_7, "reading register %s (#%d)",
     FUNC_3 (VAR_5), VAR_5);
   FUNC_6 (VAR_7);
 }
    }
  FUNC_10 (VAR_5, VAR_10);
}
