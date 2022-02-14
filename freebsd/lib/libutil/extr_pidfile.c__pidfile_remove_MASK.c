
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int pf_dirfd; int pf_fd; int pf_filename; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct pidfh*) ;
 int FUNC_2 (int,int ,int,int ) ;
 int FUNC_3 (struct pidfh*) ;

__attribute__((used)) static int
FUNC_4(struct pidfh *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 != 0) {
  VAR_1 = VAR_4;
  return (-1);
 }

 if (FUNC_2(VAR_2->pf_dirfd, VAR_2->pf_filename, VAR_2->pf_fd, 0) == -1) {
  if (VAR_1 == VAR_0)
   return (-1);
  VAR_4 = VAR_1;
 }
 if (FUNC_0(VAR_2->pf_fd) == -1 && VAR_4 == 0)
  VAR_4 = VAR_1;
 if (FUNC_0(VAR_2->pf_dirfd) == -1 && VAR_4 == 0)
  VAR_4 = VAR_1;
 if (VAR_3)
  FUNC_1(VAR_2);
 else
  VAR_2->pf_fd = -1;
 if (VAR_4 != 0) {
  VAR_1 = VAR_4;
  return (-1);
 }
 return (0);
}
