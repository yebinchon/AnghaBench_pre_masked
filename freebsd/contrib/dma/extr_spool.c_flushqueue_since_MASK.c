
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct stat {TYPE_1__ st_mtim; } ;
struct TYPE_4__ {int spooldir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct timeval*,int ) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;

int
FUNC_4(unsigned int VAR_2)
{
        struct stat VAR_3;
 struct timeval VAR_4;
        char *VAR_5 = ((void*)0);

 if (FUNC_0(&VAR_5, "%d/%d", VAR_1.spooldir, VAR_0) < 0)
  return (0);
 if (FUNC_3(VAR_5, &VAR_3) < 0) {
  FUNC_1(VAR_5);
  return (0);
 }
 FUNC_1(VAR_5);
 VAR_5 = ((void*)0);
 if (FUNC_2(&VAR_4, 0) != 0)
  return (0);


 if (VAR_3.st_mtim.tv_sec + (int)VAR_2 >= VAR_4.tv_sec)
  return (1);
 else
  return (0);
}
