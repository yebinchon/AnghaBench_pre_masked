
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdc_data {TYPE_1__* fd; } ;
struct TYPE_2__ {int fdsu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fdc_data*,int,int ,int ,int,int*) ;
 int FUNC_1 (struct fdc_data*,char*) ;

__attribute__((used)) static int
FUNC_2(struct fdc_data *VAR_1, int *VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1, 2, VAR_0, VAR_1->fd->fdsu, 1, &VAR_3))
  return (FUNC_1(VAR_1, "Sense Drive Status failed\n"));
 if (VAR_2)
  *VAR_2 = VAR_3;
 return (0);
}
