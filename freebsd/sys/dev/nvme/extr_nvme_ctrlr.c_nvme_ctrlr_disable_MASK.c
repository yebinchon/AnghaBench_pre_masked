
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_controller {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nvme_controller*,int) ;
 int FUNC_1 (struct nvme_controller*,int) ;
 int FUNC_2 (struct nvme_controller*,int,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvme_controller *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = FUNC_1(VAR_7, VAR_8);
 VAR_9 = FUNC_1(VAR_7, VAR_9);

 VAR_10 = (VAR_8 >> VAR_2) & VAR_1;
 VAR_11 = (VAR_9 >> VAR_4) & VAR_3;







 if (VAR_10 == 1) {
  if (VAR_11 == 0) {

   VAR_12 = FUNC_0(VAR_7, 1);
   if (VAR_12 != 0)
    return (VAR_12);
  }
 } else {

  if (VAR_11 == 0)
   return (0);
  else
   return (FUNC_0(VAR_7, 0));
 }

 VAR_8 &= ~VAR_1;
 FUNC_2(VAR_7, VAR_8, VAR_8);





 if (VAR_7->quirks & VAR_5)
  FUNC_3("nvmeR", VAR_0 * VAR_6 / 1000);
 return (FUNC_0(VAR_7, 0));
}
