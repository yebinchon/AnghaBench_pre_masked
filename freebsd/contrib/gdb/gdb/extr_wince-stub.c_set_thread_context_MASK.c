
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef int gdb_wince_result ;
typedef int LPCONTEXT ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int ,int,int ,int *,int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_1)
{
  gdb_wince_result VAR_2;
  HANDLE VAR_3 = FUNC_1 (L"SetThreadContext handle", VAR_1, VAR_0);
  LPCONTEXT VAR_4 = (LPCONTEXT) FUNC_2 (L"SetThreadContext context", VAR_1,
     VAR_0, ((void*)0));

  VAR_2 = FUNC_0 (VAR_3, VAR_4);
  FUNC_3 (L"SetThreadContext result", VAR_2, VAR_1, VAR_0,
      &VAR_2, sizeof (VAR_2));
}
