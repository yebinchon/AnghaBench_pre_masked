
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTRACE_XFER_TYPE ;
typedef int PTRACE_ARG3_TYPE ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3 (CORE_ADDR VAR_3, char *VAR_4, int VAR_5)
{
  register int VAR_6;

  register CORE_ADDR VAR_7 = VAR_3 & -(CORE_ADDR) sizeof (PTRACE_XFER_TYPE);

  register int VAR_8
    = (((VAR_3 + VAR_5) - VAR_7) + sizeof (PTRACE_XFER_TYPE) - 1)
      / sizeof (PTRACE_XFER_TYPE);

  register PTRACE_XFER_TYPE *VAR_9
    = (PTRACE_XFER_TYPE *) FUNC_0 (VAR_8 * sizeof (PTRACE_XFER_TYPE));


  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++, VAR_7 += sizeof (PTRACE_XFER_TYPE))
    {
      VAR_1 = 0;
      VAR_9[VAR_6] = FUNC_2 (VAR_0, VAR_2, (PTRACE_ARG3_TYPE) (intptr_t)VAR_7, 0);
      if (VAR_1)
 return VAR_1;
    }


  FUNC_1 (VAR_4, (char *) VAR_9 + (VAR_3 & (sizeof (PTRACE_XFER_TYPE) - 1)), VAR_5);

  return 0;
}
