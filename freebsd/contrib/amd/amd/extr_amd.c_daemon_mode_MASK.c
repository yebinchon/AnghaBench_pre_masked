
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int sa ;
typedef int mode_t ;
struct TYPE_2__ {int flags; char* pid_file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*,char*) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_8 (struct sigaction*,int ,int) ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 (char*,long) ;
 int FUNC_11 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int) ;

__attribute__((used)) static int
FUNC_16(void)
{
  int VAR_10;
  FUNC_14(VAR_1, VAR_7);


  VAR_10 = FUNC_2();

  if (VAR_10 != 0) {




    for (;;)
      FUNC_9();

  }



  FUNC_14(VAR_1, VAR_2);





  if (VAR_6.flags & VAR_0) {
    if (FUNC_0(VAR_6.pid_file, "/dev/stdout")) {
      FUNC_10("%ld\n", (long) VAR_3);

      FUNC_4(VAR_9);
    } else {
      FILE *VAR_11;
      mode_t VAR_12 = FUNC_15(0022);

      VAR_11 = FUNC_5(VAR_6.pid_file, "w");
      if (VAR_11) {
 FUNC_6(*VAR_11, "%ld\n", (long) VAR_3);
 (void) FUNC_3(VAR_11);
      } else {
 FUNC_6(VAR_8, "cannot open %s (errno=%d)\n", VAR_6.pid_file, VAR_4);
      }
      FUNC_15(VAR_12);
    }
  }




  VAR_5 = 1;




  FUNC_1();

  return FUNC_7();
}
