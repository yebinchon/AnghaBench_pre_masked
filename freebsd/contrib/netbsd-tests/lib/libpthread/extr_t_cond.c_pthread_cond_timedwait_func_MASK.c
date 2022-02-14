
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (struct timespec*,int ,int) ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_8(void *VAR_4)
{
 struct timespec VAR_5;
 size_t VAR_6 = 0;
 int VAR_7;

 for (;;) {

  if (VAR_6++ >= 10000)
   FUNC_5(((void*)0));

  (void)FUNC_3(&VAR_5, 0, sizeof(struct timespec));

  FUNC_0(FUNC_2(VAR_0, &VAR_5) == 0);






  VAR_5.tv_sec = VAR_5.tv_sec - 1;

  FUNC_1(FUNC_6(&VAR_3));
  VAR_7 = FUNC_4(&VAR_2, &VAR_3, &VAR_5);





  FUNC_0(VAR_7 == VAR_1);
  FUNC_1(FUNC_7(&VAR_3));
 }
}
