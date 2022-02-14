
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11(int VAR_11)
{
 int VAR_12 = 0;

 (void)FUNC_9(VAR_6, VAR_7);
 FUNC_4(VAR_6, VAR_1, &VAR_12);
 FUNC_4(VAR_6, VAR_0, &VAR_12);

 if (VAR_2)
  FUNC_1(&VAR_9, FUNC_7(VAR_2));
 else if (VAR_5)
  FUNC_1(&VAR_9, FUNC_7(VAR_5));
 if (VAR_4)
  FUNC_2(&VAR_9, FUNC_7(VAR_4));
 else if (VAR_5)
  FUNC_2(&VAR_9, FUNC_7(VAR_5));
 FUNC_5(0);
 FUNC_6();
 if (VAR_11)
  FUNC_0(&VAR_9);
 if (FUNC_10(VAR_6, VAR_8, &VAR_9) < 0) {
  FUNC_8(VAR_3, "tcsetattr %s: %m", VAR_10);
  FUNC_3(1);
 }
}
