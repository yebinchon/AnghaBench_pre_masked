
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_context {int stop_code; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ptrace_context *VAR_1, int VAR_2)
{
 VAR_1->stop_code = (VAR_2 << 8) | VAR_0;
}
