
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct re_registers {int* end; int* start; } ;
struct TYPE_2__ {int (* supply_register ) (char*,int,char*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct re_registers*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int,int ,int,struct re_registers*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, int VAR_3)
{
  FUNC_1 ("MON Parsing  register dump\n");
  while (1)
    {
      int VAR_4, VAR_5;
      char *VAR_6, *VAR_7;


      struct re_registers VAR_8;

      FUNC_0 (&VAR_8, 0, sizeof (struct re_registers));

      if (FUNC_2 (&VAR_1, VAR_2, VAR_3, 0, VAR_3,
       &VAR_8) == -1)
 break;

      VAR_4 = VAR_8.end[1] - VAR_8.start[1];
      VAR_6 = VAR_2 + VAR_8.start[1];
      VAR_5 = VAR_8.end[2] - VAR_8.start[2];
      VAR_7 = VAR_2 + VAR_8.start[2];

      VAR_0->supply_register (VAR_6, VAR_4, VAR_7, VAR_5);

      VAR_2 += VAR_8.end[0];
      VAR_3 -= VAR_8.end[0];
    }
}
