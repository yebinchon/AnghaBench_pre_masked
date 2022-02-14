
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(void *VAR_8)
{
 FUNC_1(&VAR_7);

 while (!FUNC_2() && !VAR_6) {
  FUNC_4(VAR_4);

  if (VAR_5) {
   FUNC_7();
   FUNC_11(VAR_5);
   FUNC_9(&VAR_7);
  }

  FUNC_3();

  FUNC_8("Sleeping for 10 secs\n");
  FUNC_6(VAR_2);
  FUNC_5(VAR_0 * VAR_1);
  FUNC_0(VAR_3);
 }

 if (VAR_6)
  FUNC_10();

 return 0;
}
