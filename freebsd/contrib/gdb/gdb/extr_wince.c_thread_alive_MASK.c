
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdb_wince_result ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2 (HANDLE VAR_2)
{
  gdb_wince_result VAR_3;
  if (VAR_1 < 0)
    return 1;
  FUNC_1 ("ThreadAlive handle", VAR_0, VAR_2);
  return FUNC_0 ("ThreadAlive result", VAR_0, &VAR_3, ((void*)0));
}
