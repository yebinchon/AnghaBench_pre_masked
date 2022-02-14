
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {scalar_t__ ctxptr; } ;
struct lio_intrmod_context {int cond; int status; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct octeon_device *VAR_0, uint32_t VAR_1,
    void *VAR_2)
{
 struct lio_soft_command *VAR_3 = (struct lio_soft_command *)VAR_2;
 struct lio_intrmod_context *VAR_4;

 VAR_4 = (struct lio_intrmod_context *)VAR_3->ctxptr;

 VAR_4->status = VAR_1;

 VAR_4->cond = 1;





 FUNC_0();
}
