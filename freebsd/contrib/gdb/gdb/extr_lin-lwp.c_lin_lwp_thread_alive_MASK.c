
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7 (ptid_t VAR_4)
{
  FUNC_2 (FUNC_3 (VAR_4));

  VAR_2 = 0;
  FUNC_4 (VAR_0, FUNC_0 (VAR_4), 0, 0);
  if (VAR_1)
    FUNC_1 (VAR_3,
   "LLTA: PTRACE_PEEKUSER %s, 0, 0 (%s)\n",
   FUNC_6 (VAR_4),
   VAR_2 ? FUNC_5 (VAR_2) : "OK");
  if (VAR_2)
    return 0;

  return 1;
}
