
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef int gdb_wince_result ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int,int ,int*,int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2)
{
  HANDLE VAR_3 = FUNC_1 (L"ThreadAlive handle", VAR_2, VAR_0);
  gdb_wince_result VAR_4;

  VAR_4 = FUNC_0 (VAR_3, 0) == VAR_1 ? 1 : 0;
  FUNC_2 (L"WriteProcessMemory data", VAR_4, VAR_2, VAR_0,
      &VAR_4, sizeof (VAR_4));
}
