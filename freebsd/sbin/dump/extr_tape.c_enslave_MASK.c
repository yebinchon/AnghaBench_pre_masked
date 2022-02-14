
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pid; int fd; scalar_t__ sent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ) ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_10(void)
{
 int VAR_20[2];
 int VAR_21, VAR_22;

 VAR_13 = FUNC_5();

 FUNC_7(VAR_3, VAR_11);
 FUNC_7(VAR_2, VAR_15);
 FUNC_7(VAR_4, VAR_18);
 FUNC_7(VAR_5, VAR_14);

 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
  if (VAR_21 == VAR_17 - &VAR_16[0]) {
   VAR_10 = 1;
  } else {
   VAR_10 = 0;
  }

  if (FUNC_8(VAR_0, VAR_8, 0, VAR_20) < 0 ||
      (VAR_16[VAR_21].pid = FUNC_4()) < 0)
   FUNC_6("too many slaves, %d (recompile smaller): %s\n",
       VAR_21, FUNC_9(VAR_12));

  VAR_16[VAR_21].fd = VAR_20[1];
  VAR_16[VAR_21].sent = 0;
  if (VAR_16[VAR_21].pid == 0) {
   for (VAR_22 = 0; VAR_22 <= VAR_21; VAR_22++)
           (void) FUNC_2(VAR_16[VAR_22].fd);
   FUNC_7(VAR_1, VAR_6);
   FUNC_3(VAR_20[0], VAR_21);
   FUNC_0(VAR_9);
  }
 }

 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++)
  (void) FUNC_1(VAR_19, VAR_16[VAR_21].fd,
         (char *) &VAR_16[(VAR_21 + 1) % VAR_7].pid,
                sizeof VAR_16[0].pid);

 VAR_13 = 0;
}
