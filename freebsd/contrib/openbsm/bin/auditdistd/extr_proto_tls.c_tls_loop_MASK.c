
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int *,int *,int *,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,int *) ;

__attribute__((used)) static void
FUNC_10(int VAR_4, SSL *VAR_5)
{
 fd_set VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_5(VAR_5);
 FUNC_4(VAR_8 >= 0);

 for (;;) {
  FUNC_2(&VAR_6);
  FUNC_1(VAR_4, &VAR_6);
  FUNC_1(VAR_8, &VAR_6);
  VAR_7 = FUNC_3(VAR_4, VAR_8);

  FUNC_4(VAR_7 + 1 <= (int)VAR_2);
  if (FUNC_7(VAR_7 + 1, &VAR_6, ((void*)0), ((void*)0), ((void*)0)) == -1) {
   if (VAR_3 == VAR_0)
    continue;
   FUNC_6(VAR_1, "select() failed");
  }
  if (FUNC_0(VAR_4, &VAR_6))
   FUNC_9(VAR_4, VAR_5);
  if (FUNC_0(VAR_8, &VAR_6))
   FUNC_8(VAR_5, VAR_4);
 }
}
