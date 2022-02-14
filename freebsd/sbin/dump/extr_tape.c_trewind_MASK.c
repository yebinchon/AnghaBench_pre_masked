
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_2__ {int fd; scalar_t__ sent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,struct stat*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_12 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (int*) ;
 int VAR_9 ;

void
FUNC_14(void)
{
 struct stat VAR_10;
 int VAR_11;
 int VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_6[VAR_11].sent) {
   if (FUNC_1(VAR_5, VAR_6[VAR_11].fd, (char *)&VAR_12, sizeof VAR_12)
       != sizeof VAR_12) {
    FUNC_8("  DUMP: error reading command pipe in master");
    FUNC_3(0);
   }
   VAR_6[VAR_11].sent = 0;
   if (VAR_12 != VAR_9) {
    FUNC_5("EOT detected in last 2 tape records!\n");
    FUNC_5("Use a longer tape, decrease the size estimate\n");
    FUNC_9("or use no size estimate at all.\n");
   }
  }
  (void) FUNC_2(VAR_6[VAR_11].fd);
 }
 while (FUNC_13((int *)((void*)0)) >= 0)
            ;

 if (VAR_2)
  return;

 FUNC_5("Closing %s\n", VAR_7);

 if (VAR_4) {
  VAR_8 = -1;
  (void)FUNC_7(VAR_3);
  VAR_3 = ((void*)0);
  return;
 }
 if (FUNC_4(VAR_8, &VAR_10) == 0 && FUNC_0(VAR_10.st_mode)) {
  (void)FUNC_2(VAR_8);
  return;
 }
 (void) FUNC_2(VAR_8);
 while ((VAR_11 = FUNC_6(VAR_7, 0)) < 0)
  FUNC_12 (10);
 (void) FUNC_2(VAR_11);
}
