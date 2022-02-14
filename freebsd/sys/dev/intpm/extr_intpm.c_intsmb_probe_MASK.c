
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct intsmb_device {scalar_t__ devid; int description; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct intsmb_device* VAR_2 ;
 size_t FUNC_1 (struct intsmb_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 const struct intsmb_device *VAR_4;
 uint32_t VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2); VAR_6++) {
  VAR_4 = &VAR_2[VAR_6];
  if (VAR_4->devid == VAR_5) {
   FUNC_0(VAR_3, VAR_4->description);
   return (VAR_0);
  }
 }
 return (VAR_1);
}
