
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct cdev*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{




 if (((VAR_6 & VAR_3) == 0) || ((VAR_6 & VAR_2) == 0))
  return(VAR_1);




 if ((VAR_6 & VAR_4) != 0) {
  FUNC_1("%s: can't do nonblocking access\n", FUNC_0(VAR_5));
  return(VAR_0);
 }

 return(0);
}
