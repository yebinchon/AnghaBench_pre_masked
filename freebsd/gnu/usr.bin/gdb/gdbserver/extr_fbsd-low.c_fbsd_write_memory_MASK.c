
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PTRACE_XFER_TYPE ;
typedef int PTRACE_ARG3_TYPE ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int,long) ;
 int VAR_3 ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_5, const char *VAR_6, int VAR_7)
{
  register int VAR_8;

  register CORE_ADDR VAR_9 = VAR_5 & -(CORE_ADDR) sizeof (PTRACE_XFER_TYPE);

  register int VAR_10
  = (((VAR_5 + VAR_7) - VAR_9) + sizeof (PTRACE_XFER_TYPE) - 1) / sizeof (PTRACE_XFER_TYPE);

  register PTRACE_XFER_TYPE *VAR_11 = (PTRACE_XFER_TYPE *) FUNC_0 (VAR_10 * sizeof (PTRACE_XFER_TYPE));
  extern int VAR_12;

  if (VAR_2)
    {
      FUNC_1 (VAR_4, "Writing %02x to %08lx\n", (unsigned)VAR_6[0], (long)VAR_5);
    }



  VAR_11[0] = FUNC_3 (VAR_0, VAR_3,
        (PTRACE_ARG3_TYPE) (intptr_t)VAR_9, 0);

  if (VAR_10 > 1)
    {
      VAR_11[VAR_10 - 1]
 = FUNC_3 (VAR_0, VAR_3,
    (PTRACE_ARG3_TYPE) (intptr_t) (VAR_9 + (VAR_10 - 1)
          * sizeof (PTRACE_XFER_TYPE)),
    0);
    }



  FUNC_2 ((char *) VAR_11 + (VAR_5 & (sizeof (PTRACE_XFER_TYPE) - 1)), VAR_6, VAR_7);



  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++, VAR_9 += sizeof (PTRACE_XFER_TYPE))
    {
      VAR_12 = 0;
      FUNC_3 (VAR_1, VAR_3, (PTRACE_ARG3_TYPE) (intptr_t)VAR_9, VAR_11[VAR_8]);
      if (VAR_12)
 return VAR_12;
    }

  return 0;
}
