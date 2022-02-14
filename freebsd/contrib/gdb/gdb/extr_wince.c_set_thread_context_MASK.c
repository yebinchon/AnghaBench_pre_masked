
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_result ;
typedef int HANDLE ;
typedef int CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int *,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3 (HANDLE VAR_2, CONTEXT * VAR_3)
{
  gdb_wince_result VAR_4;
  if (VAR_1 < 0)
    return 1;
  FUNC_1 ("SetThreadContext handle", VAR_0, VAR_2);
  FUNC_2 ("SetThreadContext context", VAR_0, VAR_3, sizeof (*VAR_3));
  return FUNC_0 ("SetThreadContext context", VAR_0, &VAR_4, ((void*)0));
}
