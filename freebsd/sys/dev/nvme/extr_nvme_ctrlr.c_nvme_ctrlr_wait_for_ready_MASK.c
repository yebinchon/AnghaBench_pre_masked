
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int ready_timeout_in_ms; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nvme_controller*,int) ;
 int FUNC_2 (struct nvme_controller*,char*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvme_controller *VAR_3, int VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 VAR_5 = 0;
 while (1) {
  VAR_6 = FUNC_1(VAR_3, VAR_6);
  if (VAR_6 == 0xffffffff)
   return (VAR_0);
  if (((VAR_6 >> VAR_2) & VAR_1)
      == VAR_4)
   break;
  if (VAR_5++ > VAR_3->ready_timeout_in_ms) {
   FUNC_2(VAR_3, "controller ready did not become %d "
       "within %d ms\n", VAR_4, VAR_3->ready_timeout_in_ms);
   return (VAR_0);
  }
  FUNC_0(1000);
 }

 return (0);
}
