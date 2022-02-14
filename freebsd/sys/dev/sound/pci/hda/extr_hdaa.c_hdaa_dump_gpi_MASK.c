
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_devinfo {int gpio_cap; int nid; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,char*,char*,char*,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct hdaa_devinfo *VAR_0)
{
 device_t VAR_1 = VAR_0->dev;
 int VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_4(VAR_0->gpio_cap) > 0) {
  VAR_3 = FUNC_6(VAR_1,
      FUNC_0(0, VAR_0->nid));
  VAR_4 = FUNC_6(VAR_1,
      FUNC_3(0, VAR_0->nid));
  VAR_5 = FUNC_6(VAR_1,
      FUNC_2(0, VAR_0->nid));
  VAR_6 = FUNC_6(VAR_1,
      FUNC_1(0, VAR_0->nid));
  for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_0->gpio_cap); VAR_2++) {
   FUNC_5(VAR_1, " GPI%d:%s%s%s state=%d", VAR_2,
        (VAR_6 & (1 << VAR_2)) ? " sticky" : "",
        (VAR_5 & (1 << VAR_2)) ? " unsol" : "",
        (VAR_4 & (1 << VAR_2)) ? " wake" : "",
        (VAR_3 >> VAR_2) & 1);
  }
 }
}
