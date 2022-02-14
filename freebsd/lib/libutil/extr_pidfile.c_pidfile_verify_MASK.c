
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct pidfh {int pf_fd; scalar_t__ pf_dev; scalar_t__ pf_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct stat*) ;

__attribute__((used)) static int
FUNC_1(const struct pidfh *VAR_2)
{
 struct stat VAR_3;

 if (VAR_2 == ((void*)0) || VAR_2->pf_fd == -1)
  return (VAR_0);



 if (FUNC_0(VAR_2->pf_fd, &VAR_3) == -1)
  return (VAR_1);
 if (VAR_3.st_dev != VAR_2->pf_dev || VAR_3.st_ino != VAR_2->pf_ino)
  return (VAR_0);
 return (0);
}
