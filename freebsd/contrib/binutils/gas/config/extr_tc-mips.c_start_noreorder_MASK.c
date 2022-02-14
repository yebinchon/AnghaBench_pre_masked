
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ noreorder; scalar_t__ mips16; } ;
struct TYPE_5__ {int fixed_p; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_9 (void)
{
  if (VAR_5.noreorder == 0)
    {
      unsigned int VAR_10;
      int VAR_11;


      for (VAR_10 = 0; VAR_10 < FUNC_0 (VAR_2); VAR_10++)
 VAR_2[VAR_10].fixed_p = 1;




      VAR_11 = FUNC_8 (VAR_2, ((void*)0));
      if (VAR_11 > 0)
 {
   if (VAR_4 != 0)
     {


       FUNC_2 (VAR_5.mips16 ? VAR_11 * 2 : VAR_11 * 4);
       VAR_6 = VAR_1;
       VAR_7 = VAR_11;
       VAR_8 = 0;
       VAR_9 = 0;
     }

   for (; VAR_11 > 0; --VAR_11)
     FUNC_1 (VAR_0);



   FUNC_4 (VAR_1);
   FUNC_3 (0);
   FUNC_7 ();
 }
      FUNC_5 ();
      FUNC_6 ();
    }
  VAR_5.noreorder++;
  VAR_3 = 1;
}
