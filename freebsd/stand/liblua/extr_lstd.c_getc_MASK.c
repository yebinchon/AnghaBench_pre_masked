
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 size_t FUNC_0 (int ,char*,int) ;

int
FUNC_1(FILE *VAR_1)
{
 char VAR_2;
 size_t VAR_3;

 if (VAR_1 == ((void*)0))
  return VAR_0;
 VAR_3 = FUNC_0(VAR_1->fd, &VAR_2, 1);
 if (VAR_3 == 1)
  return VAR_2;
 return VAR_0;
}
