
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pc_val ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

CORE_ADDR
FUNC_2 (lwpid_t VAR_2)
{
  unsigned long VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_4 = FUNC_1 (VAR_0, VAR_1);
  VAR_5 = FUNC_0 (
     VAR_2,
     (TTRACE_ARG_TYPE) VAR_4,
     (char *) &VAR_3,
     sizeof (VAR_3));
  if (VAR_5 <= 0)
    {
      return (CORE_ADDR) VAR_3;
    }
  else
    {
      return (CORE_ADDR) 0;
    }
}
