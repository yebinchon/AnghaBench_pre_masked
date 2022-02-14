
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; char* s; } ;
typedef TYPE_1__ argsin ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;
 void* FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 (void*,char*,int,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  argsin VAR_3[3];
  char *VAR_4;
  int VAR_5;
  int VAR_6 = 0;

  int VAR_7 = FUNC_4 ();
  int VAR_8 = FUNC_3 ();
  while (VAR_8 != 0)
    {
      switch (VAR_8 & 0x3)
 {
 case 130:
   VAR_3[VAR_6].n = FUNC_3 ();
   break;

 case 128:
   VAR_3[VAR_6].n = FUNC_4 ();
   break;

 case 129:



   VAR_5 = FUNC_3 ();
   if (VAR_5 > 32)
     {
       if (VAR_5 == 255)
  {
    VAR_5 = FUNC_4 ();
  }
       VAR_4 = FUNC_0 (VAR_5);
       FUNC_5 (FUNC_4 (),
            VAR_4,
            VAR_5,
            0,
            0,
            0);
     }
   else
     {
       int VAR_9;
       VAR_4 = FUNC_0 (VAR_5 + 1);
       for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  VAR_4[VAR_9] = FUNC_3 ();
       VAR_4[VAR_9] = 0;
     }
   VAR_3[VAR_6].n = VAR_5;
   VAR_3[VAR_6].s = VAR_4;
   break;

 default:
   FUNC_1 ("Unimplemented SWI argument");
 }

      VAR_8 = VAR_8 >> 2;
      VAR_6++;
    }

  if (FUNC_2 (VAR_7, VAR_3))
    {



      FUNC_6 ("bbw-", VAR_1, VAR_2, VAR_3[0].n);
    }
  else
    {
      FUNC_6 ("bb-", VAR_1, VAR_0);
    }
}
