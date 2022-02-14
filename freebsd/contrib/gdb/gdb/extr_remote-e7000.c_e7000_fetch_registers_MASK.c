
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arch; int mach; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;







 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_10;
  char *VAR_11 = ((void*)0);

  FUNC_1 ("R\r");

  if (VAR_2->arch == VAR_4)
    {
      VAR_11 = VAR_8;
      switch (VAR_2->mach)
 {
 case 130:
 case 129:
 case 128:
   VAR_11 = VAR_9;
 }
    }
  if (VAR_2->arch == VAR_3)
    {
      VAR_11 = VAR_6;
      switch (VAR_2->mach)
 {
 case 134:
 case 133:
 case 132:
 case 131:
   VAR_11 = VAR_7;
 }
    }

  FUNC_0 (VAR_5, VAR_11);


  for (VAR_10 = VAR_0; VAR_10 < VAR_1; VAR_10++)
    {
      int VAR_12 = 0;

      FUNC_2 (VAR_10, (char *) (&VAR_12));
    }
}
