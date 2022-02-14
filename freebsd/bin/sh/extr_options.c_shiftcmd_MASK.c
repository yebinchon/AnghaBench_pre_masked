
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nparam; int reset; int * p; scalar_t__ malloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;

int
FUNC_3(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = 1;
 if (VAR_3 > 1)
  VAR_6 = FUNC_2(VAR_4[1]);
 if (VAR_6 > VAR_2.nparam)
  return 1;
 VAR_0;
 VAR_2.nparam -= VAR_6;
 if (VAR_2.malloc)
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_0(VAR_2.p[VAR_5]);
 FUNC_1(VAR_2.p, VAR_2.p + VAR_6,
     (VAR_2.nparam + 1) * sizeof(VAR_2.p[0]));
 VAR_2.reset = 1;
 VAR_1;
 return 0;
}
