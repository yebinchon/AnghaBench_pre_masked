
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
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(struct hdaa_devinfo *VAR_0)
{
 device_t VAR_1 = VAR_0->dev;
 int VAR_2;
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 if (FUNC_6(VAR_0->gpio_cap) > 0) {
  VAR_3 = FUNC_8(VAR_1,
      FUNC_0(0, VAR_0->nid));
  VAR_5 = FUNC_8(VAR_1,
      FUNC_2(0, VAR_0->nid));
  VAR_4 = FUNC_8(VAR_1,
      FUNC_1(0, VAR_0->nid));
  VAR_6 = FUNC_8(VAR_1,
      FUNC_5(0, VAR_0->nid));
  VAR_7 = FUNC_8(VAR_1,
      FUNC_4(0, VAR_0->nid));
  VAR_8 = FUNC_8(VAR_1,
      FUNC_3(0, VAR_0->nid));
  for (VAR_2 = 0; VAR_2 < FUNC_6(VAR_0->gpio_cap); VAR_2++) {
   FUNC_7(VAR_1, " GPIO%d: ", VAR_2);
   if ((VAR_5 & (1 << VAR_2)) == 0) {
    FUNC_9("disabled\n");
    continue;
   }
   if ((VAR_4 & (1 << VAR_2)) == 0) {
    FUNC_9("input%s%s%s",
        (VAR_8 & (1 << VAR_2)) ? " sticky" : "",
        (VAR_7 & (1 << VAR_2)) ? " unsol" : "",
        (VAR_6 & (1 << VAR_2)) ? " wake" : "");
   } else
    FUNC_9("output");
   FUNC_9(" state=%d\n", (VAR_3 >> VAR_2) & 1);
  }
 }
}
