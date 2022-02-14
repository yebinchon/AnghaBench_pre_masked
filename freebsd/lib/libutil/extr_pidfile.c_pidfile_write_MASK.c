
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int pf_fd; } ;
typedef scalar_t__ ssize_t ;
typedef int pidstr ;


 int FUNC_0 (struct pidfh*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pidfh*) ;
 scalar_t__ FUNC_4 (int,char*,scalar_t__,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(struct pidfh *VAR_1)
{
 char VAR_2[16];
 int VAR_3, VAR_4;





 VAR_0 = FUNC_3(VAR_1);
 if (VAR_0 != 0) {



  return (-1);
 }
 VAR_4 = VAR_1->pf_fd;




 if (FUNC_1(VAR_4, 0) == -1) {
  VAR_3 = VAR_0;
  FUNC_0(VAR_1, 0);
  VAR_0 = VAR_3;
  return (-1);
 }

 FUNC_5(VAR_2, sizeof(VAR_2), "%u", FUNC_2());
 if (FUNC_4(VAR_4, VAR_2, FUNC_6(VAR_2), 0) != (ssize_t)FUNC_6(VAR_2)) {
  VAR_3 = VAR_0;
  FUNC_0(VAR_1, 0);
  VAR_0 = VAR_3;
  return (-1);
 }

 return (0);
}
