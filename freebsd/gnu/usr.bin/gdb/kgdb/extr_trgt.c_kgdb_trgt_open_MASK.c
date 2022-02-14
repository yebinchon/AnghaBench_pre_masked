
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct kthr {int tid; } ;
struct cleanup {int dummy; } ;
typedef int kvm_t ;
struct TYPE_2__ {int tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thread_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char*,char*,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_6 ;
 struct kthr* FUNC_12 () ;
 struct kthr* FUNC_13 (struct kthr*) ;
 int VAR_7 ;
 int FUNC_14 () ;
 int * VAR_8 ;
 int VAR_9 ;
 int * FUNC_15 (int ,char*,int ,int ,int ) ;
 struct cleanup* FUNC_16 (int (*) (char*),char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int VAR_10 ;
 int FUNC_21 (int) ;
 char* FUNC_22 (char*) ;
 int FUNC_23 (int *) ;
 char* VAR_11 ;
 int FUNC_24 (char*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_25 (char*) ;

__attribute__((used)) static void
FUNC_26(char *VAR_13, int VAR_14)
{
 struct cleanup *VAR_15;
 struct thread_info *VAR_16;
 struct kthr *VAR_17;
 kvm_t *VAR_18;
 char *VAR_19;
 int VAR_20;

 FUNC_21 (VAR_14);
 if (!VAR_13)
  FUNC_4 ("No vmcore file specified.");
 if (!VAR_4)
  FUNC_4 ("Can't open a vmcore without a kernel");

 VAR_13 = FUNC_22 (VAR_13);
 if (VAR_13[0] != '/') {
  VAR_19 = FUNC_2 (VAR_3, "/", VAR_13, ((void*)0));
  FUNC_25(VAR_13);
  VAR_13 = VAR_19;
 }

 VAR_15 = FUNC_16 (FUNC_25, VAR_13);

 VAR_18 = FUNC_15(FUNC_1(VAR_4), VAR_13,
     VAR_12 ? VAR_1 : VAR_0, VAR_9, VAR_6);
 if (VAR_18 == ((void*)0))
  FUNC_4 ("Failed to open vmcore: %s", VAR_9);


 FUNC_3(VAR_15);
 FUNC_23(&VAR_7);

 VAR_8 = VAR_18;
 VAR_11 = VAR_13;
 VAR_15 = FUNC_16(FUNC_10, ((void*)0));

 VAR_20 = !FUNC_19 (&VAR_7);
 FUNC_3 (VAR_15);

 FUNC_11();

 FUNC_9();
 VAR_17 = FUNC_12();
 while (VAR_17 != ((void*)0)) {
  VAR_16 = FUNC_0(FUNC_17(VAR_17->tid));
  VAR_17 = FUNC_13(VAR_17);
 }
 if (VAR_2 != 0)
  VAR_5 = FUNC_17(VAR_2->tid);

 if (VAR_20) {

  FUNC_14();
  FUNC_5();
  FUNC_20 (FUNC_7());
  FUNC_18(FUNC_8(),
      FUNC_6(FUNC_8()), 1);
 } else
  FUNC_24(
 "you won't be able to access this vmcore until you terminate\nyour %s; do ``info files''", VAR_10);

}
