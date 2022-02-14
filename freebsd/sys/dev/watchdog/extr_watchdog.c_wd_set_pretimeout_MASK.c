
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct timespec*) ;
 int FUNC_4 (char*,int,int,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(int VAR_5, int VAR_6)
{
 u_int VAR_7;
 struct timespec VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5();
 FUNC_3(VAR_7, &VAR_8);

 if (VAR_5 >= VAR_8.tv_sec) {




  if (VAR_6)
   VAR_5 = 0;
  else
   return VAR_0;
 }


 if (VAR_5 == 0) {
  VAR_3 = 0;
  FUNC_1(&VAR_2);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_7) - (VAR_1*VAR_5);
 (void) FUNC_0(&VAR_2,
     VAR_9, VAR_4, "pre");
 VAR_3 = VAR_5;
 return 0;
}
