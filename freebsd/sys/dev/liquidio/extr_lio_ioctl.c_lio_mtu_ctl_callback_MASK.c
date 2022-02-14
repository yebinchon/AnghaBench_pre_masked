
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {int* ctxptr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_device*,char*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_0, uint32_t VAR_1, void *VAR_2)
{
 struct lio_soft_command *VAR_3 = VAR_2;
 volatile int *VAR_4;

 VAR_4 = VAR_3->ctxptr;

 if (VAR_1) {
  FUNC_1(VAR_0, "MTU updation ctl instruction failed. Status: %llx\n",
       FUNC_0(VAR_1));
  *VAR_4 = -1;




  FUNC_2();
  return;
 }

 *VAR_4 = 1;





 FUNC_2();
}
