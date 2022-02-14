
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int comm; int pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*,int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 () ;
 int FUNC_20 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,char*,int) ;
 int FUNC_24 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_25(void *VAR_15)
{
 int VAR_16, VAR_17;

 FUNC_1(VAR_14);

 FUNC_14();
 FUNC_15(VAR_2, -5);


 FUNC_21(&VAR_8);
 VAR_17 = FUNC_8(VAR_4, VAR_0);
 FUNC_0(VAR_17 < 0 || VAR_17 >= VAR_0);
 FUNC_3(VAR_17, VAR_4);
 FUNC_20(VAR_17, VAR_2->pid);
 FUNC_22(&VAR_8);

 FUNC_23(VAR_2->comm, "kslowd%03u", VAR_17);

 for (;;) {
  VAR_16 = VAR_12;
  VAR_16 *= FUNC_5(&VAR_9);
  VAR_16 /= 100;

  FUNC_12(&VAR_10, &VAR_14,
       VAR_1);
  if (!FUNC_10(VAR_2) &&
      !VAR_11 &&
      !FUNC_16(VAR_16) &&
      !VAR_3)
   FUNC_13();
  FUNC_9(&VAR_10, &VAR_14);

  FUNC_24();

  VAR_16 = VAR_12;
  VAR_16 *= FUNC_5(&VAR_9);
  VAR_16 /= 100;

  if (FUNC_16(VAR_16) && FUNC_18(VAR_17)) {
   FUNC_7();
   if (FUNC_11(&VAR_7) &&
       FUNC_11(&VAR_13) &&
       FUNC_5(&VAR_9) >
       VAR_6)
    FUNC_19();
   continue;
  }

  if (VAR_11)
   break;

  if (VAR_3 && FUNC_17())
   break;
 }

 FUNC_21(&VAR_8);
 FUNC_20(VAR_17, 0);
 FUNC_2(VAR_17, VAR_4);
 FUNC_22(&VAR_8);

 if (FUNC_4(&VAR_9))
  FUNC_6(&VAR_5, 0);
 return 0;
}
