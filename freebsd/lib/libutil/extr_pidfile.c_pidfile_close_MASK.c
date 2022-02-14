
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int pf_dirfd; int pf_fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pidfh*) ;
 int FUNC_2 (struct pidfh*) ;

int
FUNC_3(struct pidfh *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != 0) {
  VAR_0 = VAR_2;
  return (-1);
 }

 if (FUNC_0(VAR_1->pf_fd) == -1)
  VAR_2 = VAR_0;
 if (FUNC_0(VAR_1->pf_dirfd) == -1 && VAR_2 == 0)
  VAR_2 = VAR_0;

 FUNC_1(VAR_1);
 if (VAR_2 != 0) {
  VAR_0 = VAR_2;
  return (-1);
 }
 return (0);
}
