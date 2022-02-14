
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t af_filesz; } ;
typedef TYPE_1__ au_fstat_t ;
typedef int au_fstat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (size_t*) ;

int
FUNC_3(void)
{
 size_t VAR_3;
 au_fstat_t VAR_4;




 if (FUNC_2(&VAR_3) != 0)
  return (VAR_2);

 FUNC_1(&VAR_4, sizeof(VAR_4));
 VAR_4.af_filesz = VAR_3;
 if (FUNC_0(&VAR_4, sizeof(VAR_4)) != 0)
  return (VAR_0);

 return (VAR_1);
}
