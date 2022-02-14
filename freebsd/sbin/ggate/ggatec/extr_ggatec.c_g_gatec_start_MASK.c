
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_7;

 VAR_0 = 0;
 VAR_7 = FUNC_3(&VAR_3, ((void*)0), VAR_1, ((void*)0));
 if (VAR_7 != 0) {
  FUNC_1(VAR_6, 1);
  FUNC_2("pthread_create(recv_thread): %s.",
      FUNC_6(VAR_7));
 }
 VAR_5 = FUNC_4();
 FUNC_5(((void*)0));

 FUNC_0(VAR_4);
 FUNC_0(VAR_2);
}
