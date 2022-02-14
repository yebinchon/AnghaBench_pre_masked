
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct octeon_device {int* uboot_version; int uboot_sidx; int uboot_eidx; int uboot_len; struct lio_console* console; } ;
struct lio_console {char* leftover; scalar_t__ waiting; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*,size_t) ;
 int FUNC_1 (struct octeon_device*,size_t,int*,int) ;
 int FUNC_2 (struct octeon_device*,char*,int) ;
 int FUNC_3 (struct octeon_device*,char*,size_t,char*) ;
 int FUNC_4 (struct octeon_device*,char*,size_t,int) ;
 int FUNC_5 (struct octeon_device*,char*,int*) ;

__attribute__((used)) static void
FUNC_6(struct octeon_device *VAR_1)
{
 struct lio_console *VAR_2;
 int32_t VAR_3, VAR_4, VAR_5;
 uint32_t VAR_6 = 0;
 int VAR_7, VAR_8 = 0;

 VAR_8 = FUNC_2(VAR_1, "setenv stdout pci", 50);

 VAR_2 = &VAR_1->console[VAR_6];
 VAR_5 = 0;
 VAR_4 = 0;

 VAR_8 = FUNC_2(VAR_1, "version", 1);

 do {




  VAR_3 = FUNC_1(VAR_1,
           VAR_6, VAR_1->uboot_version +
           VAR_4,
           VAR_0 - 1 -
           VAR_4);
  if (VAR_3 > 0) {
   VAR_1->uboot_version[VAR_3] = 0x0;

   VAR_4 += VAR_3;
   if (VAR_2->waiting)
    FUNC_0(VAR_1, VAR_6);

  } else if (VAR_3 < 0) {
   FUNC_4(VAR_1, "Error reading console %u, ret=%d\n",
        VAR_6, VAR_3);
  }

  VAR_5++;
 } while ((VAR_3 > 0) && (VAR_5 < 16));





 if ((VAR_4 == 0) && (VAR_2->leftover[0])) {
  FUNC_3(VAR_1, "%u: %s\n", VAR_6, VAR_2->leftover);
  VAR_2->leftover[0] = '\0';
 }

 VAR_8 = FUNC_2(VAR_1, "setenv stdout serial", 50);


 for (VAR_7 = 0; VAR_7 < (VAR_0 - 9); VAR_7++) {
  if (VAR_1->uboot_version[VAR_7] == 'U' &&
      VAR_1->uboot_version[VAR_7 + 2] == 'B' &&
      VAR_1->uboot_version[VAR_7 + 3] == 'o' &&
      VAR_1->uboot_version[VAR_7 + 4] == 'o' &&
      VAR_1->uboot_version[VAR_7 + 5] == 't') {
   VAR_1->uboot_sidx = VAR_7;
   VAR_7++;
   for (; VAR_1->uboot_version[VAR_7] != 0x0; VAR_7++) {
    if (VAR_1->uboot_version[VAR_7] == 'm' &&
        VAR_1->uboot_version[VAR_7 + 1] == 'i' &&
        VAR_1->uboot_version[VAR_7 + 2] == 'p' &&
        VAR_1->uboot_version[VAR_7 + 3] == 's') {
     VAR_1->uboot_eidx = VAR_7 - 1;
     VAR_1->uboot_version[VAR_7 - 1] = 0x0;
     VAR_1->uboot_len = VAR_1->uboot_eidx -
      VAR_1->uboot_sidx + 1;
     FUNC_5(VAR_1, "%s\n",
           &VAR_1->uboot_version
           [VAR_1->uboot_sidx]);
     return;
    }
   }
  }
 }
}
