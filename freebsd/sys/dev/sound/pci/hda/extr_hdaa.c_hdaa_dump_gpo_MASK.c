
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_devinfo {int gpio_cap; int nid; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct hdaa_devinfo *VAR_0)
{
 device_t VAR_1 = VAR_0->dev;
 int VAR_2;
 uint32_t VAR_3;

 if (FUNC_1(VAR_0->gpio_cap) > 0) {
  VAR_3 = FUNC_3(VAR_1,
      FUNC_0(0, VAR_0->nid));
  for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->gpio_cap); VAR_2++) {
   FUNC_2(VAR_1, " GPO%d: state=%d", VAR_2,
        (VAR_3 >> VAR_2) & 1);
  }
 }
}
