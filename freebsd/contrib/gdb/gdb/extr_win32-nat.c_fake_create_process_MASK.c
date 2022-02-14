
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hThread; } ;
struct TYPE_5__ {TYPE_1__ CreateThread; } ;
struct TYPE_6__ {TYPE_2__ u; int dwThreadId; int dwProcessId; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

DWORD
FUNC_2 (void)
{
  VAR_3 = FUNC_0 (VAR_1, VAR_0,
     VAR_2.dwProcessId);
  VAR_5 = VAR_2.dwThreadId;
  VAR_4 = FUNC_1 (VAR_5,
         VAR_2.u.CreateThread.hThread);
  return VAR_5;
}
