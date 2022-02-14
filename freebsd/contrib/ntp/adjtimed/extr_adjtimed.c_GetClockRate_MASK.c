
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rate ;
typedef int off_t ;
typedef int caddr_t ;
struct TYPE_2__ {scalar_t__ n_value; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long) ;

long
FUNC_5(void)
{
 long VAR_4, VAR_5;

 if (FUNC_0(VAR_2, (off_t)VAR_3[0].n_value, 0) == -1L)
     return (-1L);

 VAR_5 = FUNC_2(FUNC_3(VAR_0));

 if (FUNC_1(VAR_2, (caddr_t)&VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
     VAR_4 = VAR_1;

 FUNC_4(VAR_5);
 return (VAR_4);
}
