
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nvme_controller*,int) ;
 int FUNC_2 (struct nvme_controller*,int,int) ;
 int FUNC_3 (struct nvme_controller*,char*) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(struct nvme_controller *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_6);
 VAR_6 &= ~(VAR_0 << VAR_1);
 VAR_6 |= VAR_2 << VAR_1;
 FUNC_2(VAR_5, VAR_6, VAR_6);

 while (1) {
  VAR_7 = FUNC_1(VAR_5, VAR_7);
  if (VAR_7 == 0xffffffff)
   break;
  if (FUNC_0(VAR_7) == VAR_3)
   break;
  if (VAR_8++ > 5*VAR_4) {
   FUNC_3(VAR_5, "did not complete shutdown within"
       " 5 seconds of notification\n");
   break;
  }
  FUNC_4("nvme shn", 1);
 }
}
