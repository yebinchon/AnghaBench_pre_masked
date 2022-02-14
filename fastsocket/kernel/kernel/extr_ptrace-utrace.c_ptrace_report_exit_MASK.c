
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct utrace_engine {int dummy; } ;
struct ptrace_context {long eventmsg; } ;
struct TYPE_2__ {int signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 struct ptrace_context* FUNC_1 (struct utrace_engine*) ;
 scalar_t__ FUNC_2 (struct ptrace_context*) ;
 int FUNC_3 (struct ptrace_context*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(u32 VAR_3, struct utrace_engine *VAR_4,
         long VAR_5, long *VAR_6)
{
 struct ptrace_context *VAR_7 = FUNC_1(VAR_4);

 FUNC_0(FUNC_2(VAR_7) &&
  !FUNC_4(VAR_2->signal));

 FUNC_3(VAR_7, VAR_0);
 VAR_7->eventmsg = *VAR_6;

 return VAR_1;
}
