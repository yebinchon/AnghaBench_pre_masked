
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (int VAR_1)
{
  DWORD VAR_2;
  HANDLE VAR_3 = FUNC_1 (L"SuspendThread handle", VAR_1, VAR_0);
  VAR_2 = FUNC_0 (VAR_3);
  FUNC_2 (L"SuspendThread result", VAR_1, VAR_0, VAR_2);
}
