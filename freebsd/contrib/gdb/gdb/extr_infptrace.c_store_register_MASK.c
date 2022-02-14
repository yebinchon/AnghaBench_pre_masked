
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
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int,unsigned int) ;
 int FUNC_9 (char*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_10 (int VAR_5)
{

  CORE_ADDR VAR_6;
  char VAR_7[128];
  int VAR_8;
  unsigned int VAR_9;
  int VAR_10;
  char VAR_11[VAR_0];

  if (FUNC_0 (VAR_5))
    {
      return;
    }


  if ((VAR_10 = FUNC_4 (VAR_4)) == 0)
    VAR_10 = FUNC_2 (VAR_4);

  VAR_9 = VAR_2;

  VAR_6 = FUNC_8 (VAR_5, VAR_9);


  FUNC_7 (VAR_5, VAR_11);


  for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_5); VAR_8 += sizeof (PTRACE_XFER_TYPE))
    {
      VAR_3 = 0;
      FUNC_6 (VAR_1, VAR_10, (PTRACE_ARG3_TYPE) VAR_6,
       *(PTRACE_XFER_TYPE *) (VAR_11 + VAR_8));
      VAR_6 += sizeof (PTRACE_XFER_TYPE);
      if (VAR_3 != 0)
 {
   FUNC_9 (VAR_7, "writing register %s (#%d)",
     FUNC_3 (VAR_5), VAR_5);
   FUNC_5 (VAR_7);
 }
    }
}
