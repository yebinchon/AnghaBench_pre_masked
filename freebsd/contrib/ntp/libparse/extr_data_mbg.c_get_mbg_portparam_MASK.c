
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mode; int * com; } ;
typedef TYPE_1__ PORT_PARM ;


 int VAR_0 ;
 int FUNC_0 (unsigned char**,int *) ;

void
FUNC_1(
 unsigned char **VAR_1,
 PORT_PARM *VAR_2
 )
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      FUNC_0(VAR_1, &VAR_2->com[VAR_3]);
    }
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      VAR_2->mode[VAR_3] = *(*VAR_1)++;
    }
}
