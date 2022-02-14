
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int flagword ;
struct TYPE_2__ {int bss; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_14 ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 void* VAR_15 ;
 TYPE_1__* FUNC_7 (void*) ;
 int VAR_16 ;
 void* FUNC_8 (char*,int ) ;
 int FUNC_9 (void*,int ) ;
 void* VAR_17 ;

__attribute__((used)) static void
FUNC_10 (int VAR_18, char ** VAR_19)
{
  int VAR_20 = 0;
  flagword VAR_21;

  VAR_14 = 0;



  VAR_17 = FUNC_8 (VAR_10, 0);
  VAR_12 = FUNC_8 (VAR_3, 0);
  VAR_11 = FUNC_8 (VAR_2, 0);


  VAR_21 = FUNC_1 (VAR_16);
  FUNC_2 (VAR_16, VAR_17,
    VAR_21 & (VAR_4 | VAR_7 | VAR_9
           | VAR_5 | VAR_8));
  FUNC_2 (VAR_16, VAR_12,
    VAR_21 & (VAR_4 | VAR_7 | VAR_9
           | VAR_6));
  FUNC_2 (VAR_16, VAR_11, VAR_21 & VAR_4);
  FUNC_7 (VAR_11)->bss = 1;
  FUNC_8 (VAR_0, 0);
  FUNC_8 (VAR_1, 0);
  VAR_15 = FUNC_8 ("*GAS `reg' section*", 0);
  VAR_13 = FUNC_8 ("*GAS `expr' section*", 0);

  FUNC_9 (VAR_17, 0);



  FUNC_4 ();
  VAR_19++;
  VAR_18--;

  while (VAR_18--)
    {
      if (*VAR_19)
 {
   FUNC_0 (1);
   VAR_20++;

   FUNC_6 (*VAR_19);
 }
      VAR_19++;
    }
  if (!VAR_20)
    FUNC_6 ("");
}
