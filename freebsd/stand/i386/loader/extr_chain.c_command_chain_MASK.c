
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ uint16_t ;
struct stat {int st_size; } ;
struct i386_devdesc {int dummy; } ;
struct TYPE_4__ {int (* arch_readin ) (int,int,int) ;} ;
struct TYPE_3__ {int src; int dest; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (struct i386_devdesc*) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int,struct stat*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (void**,char*,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int,int,int) ;
 scalar_t__ FUNC_14 (int,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_15(int VAR_23, char *VAR_24[])
{
 int VAR_25, VAR_26, VAR_27 = VAR_4;
 struct stat VAR_28;
 vm_offset_t VAR_29 = 0x100000;
 struct i386_devdesc *VAR_30;

 if (VAR_23 == 1) {
  VAR_8 = "no device or file name specified";
  return (VAR_0);
 }
 if (VAR_23 != 2) {
  VAR_8 = "invalid trailing arguments";
  return (VAR_0);
 }

 VAR_25 = FUNC_8(VAR_24[1], VAR_3);
 if (VAR_25 == -1) {
  VAR_8 = "open failed";
  return (VAR_0);
 }
 VAR_26 = FUNC_11(VAR_24[1]);
 if (VAR_24[1][VAR_26-1] != ':') {
  if (FUNC_5(VAR_25, &VAR_28) == -1) {
   VAR_8 = "stat failed";
   FUNC_3(VAR_25);
   return (VAR_0);
  }
  VAR_27 = VAR_28.st_size;
 } else if (FUNC_12(VAR_24[1], "disk", 4) != 0) {
  VAR_8 = "can only use disk device";
  FUNC_3(VAR_25);
  return (VAR_0);
 }

 FUNC_7((void **)(&VAR_30), VAR_24[1], ((void*)0));
 if (VAR_30 == ((void*)0)) {
  VAR_8 = "can't determine root device";
  FUNC_3(VAR_25);
  return (VAR_0);
 }

 if (VAR_6.arch_readin(VAR_25, VAR_29, VAR_27) != VAR_27) {
  VAR_8 = "failed to read disk";
  FUNC_3(VAR_25);
  return (VAR_0);
 }
 FUNC_3(VAR_25);

 if (VAR_24[1][VAR_26-1] == ':' &&
     *((uint16_t *)FUNC_0(VAR_29 + VAR_2)) != VAR_1) {
  VAR_8 = "wrong magic";
  return (VAR_0);
 }

 VAR_10[0].src = VAR_29;
 VAR_10[0].dest = 0x7C00;
 VAR_10[0].size = VAR_27;

 VAR_15 = FUNC_2(VAR_30);
 VAR_17 = VAR_11;
 VAR_14 = 0;
 VAR_16 = 0;
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_22 = 0;
 VAR_13 = 0;
 VAR_21 = 0x7C00;
 VAR_20 = 0x7C00;
 VAR_12 = 0;

 FUNC_6(VAR_9, 0x600, VAR_11);

 FUNC_4();

 FUNC_1((void *)0x600);

 FUNC_9("exec returned");
 return (VAR_0);
}
