
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int,int,int ,int,int ) ;

int
FUNC_5 (int VAR_6, CORE_ADDR VAR_7, CORE_ADDR VAR_8)
{
  pid_t VAR_9;
  lwpid_t VAR_10;
  int VAR_11;

  VAR_10 = FUNC_2 (VAR_6);
  VAR_9 = FUNC_0 (VAR_10);

  VAR_4 = 0;
  VAR_11 = FUNC_4 (VAR_1,
        VAR_9,
        VAR_10,
        (TTRACE_ARG_TYPE) VAR_7,
        8,
        (TTRACE_ARG_TYPE) VAR_8 );
  return VAR_11;
}
