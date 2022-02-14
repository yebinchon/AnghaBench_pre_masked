
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ gdb_wince_result ;
typedef int c ;
struct TYPE_5__ {int ContextFlags; } ;
typedef int HANDLE ;
typedef TYPE_1__ CONTEXT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,scalar_t__,int,int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5 (int VAR_1)
{
  CONTEXT VAR_2;
  HANDLE VAR_3 = FUNC_2 (L"GetThreadContext handle", VAR_1, VAR_0);
  gdb_wince_result VAR_4;

  FUNC_3 (&VAR_2, 0, sizeof (VAR_2));
  VAR_2.ContextFlags = FUNC_1 (L"GetThreadContext flags", VAR_1, VAR_0);

  VAR_4 = (gdb_wince_result) FUNC_0 (VAR_3, &VAR_2);
  FUNC_4 (L"GetThreadContext data", VAR_4, VAR_1, VAR_0,
      &VAR_2, sizeof (VAR_2));
}
