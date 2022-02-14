
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ process_state_t ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,int ) ;

int
FUNC_3 (int VAR_7)
{
  int VAR_8;
  CORE_ADDR VAR_9;
  CORE_ADDR VAR_10;
  unsigned int VAR_11;
  process_state_t VAR_12 = VAR_6;







  VAR_5 = 0;
  VAR_8 = FUNC_1 (VAR_3,
    VAR_7,
    (lwpid_t) VAR_2,
    (TTRACE_ARG_TYPE) VAR_2,
    (TTRACE_ARG_TYPE) VAR_2,
    VAR_2);

  if (VAR_5)
    {


      VAR_5 = 0;
      VAR_7 = FUNC_0 (VAR_7);
    }
  else
    {




      if (VAR_6 != VAR_4)
 VAR_6 = VAR_1;
      FUNC_2 (VAR_7, VAR_0);
    }

  return VAR_7;
}
