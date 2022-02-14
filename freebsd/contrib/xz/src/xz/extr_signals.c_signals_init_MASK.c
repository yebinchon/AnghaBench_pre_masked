
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 size_t FUNC_0 (int const*) ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int const* VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int const,struct sigaction*,struct sigaction*) ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

extern void
FUNC_5(void)
{

 static const int VAR_5[] = {
  132,
  130,

  133,


  131,


  129,


  128,

 };


 FUNC_4(&VAR_1);
 for (size_t VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); ++VAR_6)
  FUNC_3(&VAR_1, VAR_5[VAR_6]);
 struct sigaction VAR_7;



 VAR_7.sa_mask = VAR_1;




 VAR_7.sa_flags = 0;
 VAR_7.sa_handler = &VAR_3;

 for (size_t VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); ++VAR_8) {


  struct sigaction VAR_9;
  if (FUNC_2(VAR_5[VAR_8], ((void*)0), &VAR_9) == 0
    && VAR_9.sa_handler == VAR_0)
   continue;


  if (FUNC_2(VAR_5[VAR_8], &VAR_7, ((void*)0)))
   FUNC_1();
 }

 VAR_4 = 1;

 return;
}
